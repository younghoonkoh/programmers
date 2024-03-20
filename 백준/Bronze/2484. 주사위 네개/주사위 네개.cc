#include <iostream>
#include <algorithm> // max_element와 fill 함수를 사용하기 위함
using namespace std;

int calculatePrize(int dice[]) {
    int maxPrize = 0;
    // 주사위 눈마다의 빈도를 저장할 배열
    int count[7] = {};

    // 주사위 눈의 빈도 계산
    for (int i = 0; i < 4; ++i) {
        count[dice[i]]++;
    }

    int pairCount = 0; // 2개씩 짝이 몇 쌍인지
    int maxDice = 0; // 주사위 눈 중 최대값

    for (int i = 1; i <= 6; ++i) {
        if (count[i] == 4) {
            return 50000 + i * 5000;
        } else if (count[i] == 3) {
            return 10000 + i * 1000;
        } else if (count[i] == 2) {
            pairCount++;
            maxPrize += i * 500; // 2개짜리 짝을 위한 상금 계산
        }
        if (count[i] > 0) {
            maxDice = i; // 최대 주사위 눈 업데이트
        }
    }

    if (pairCount == 2) {
        return 2000 + maxPrize; // 2개짜리 짝이 두 쌍일 때
    } else if (pairCount == 1) {
        return 1000 + maxPrize / 5; // 한 쌍만 있는 경우, 상금을 재계산
    }

    // 모두 다른 눈이 나온 경우
    return maxDice * 100;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    int maxPrize = 0;
    for (int z = 0; z < N; ++z) {
        int dice[4];
        for (int j = 0; j < 4; ++j) {
            cin >> dice[j];
        }

        int prize = calculatePrize(dice);
        maxPrize = max(maxPrize, prize); // 최대 상금 업데이트
    }

    cout << maxPrize;

    return 0;
}