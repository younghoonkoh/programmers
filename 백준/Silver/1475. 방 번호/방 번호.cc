#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int number[10] = {};
    int sum = 0;

    // 각 숫자의 개수 세기
    for (int i = 0; i < s.size(); ++i) {
        number[s[i] - '0']++;
    }

    // 6과 9 처리
    int sixNineCount = (number[6] + number[9] + 1) / 2;
    number[6] = sixNineCount;
    number[9] = sixNineCount;

    // 가장 큰 값 찾기
    for (int i = 0; i < 10; ++i) {
        if (i != 6 && i != 9 && number[i] > sum) {
            sum = number[i];
        }
    }

    // 최종 필요한 세트의 개수 계산
    int result = (sum > sixNineCount) ? sum : sixNineCount;
    
    cout << result;

    return 0;
}