#include <iostream>
#include <string>


using namespace std;



int main() {


    ios_base::sync_with_stdio(false); // C와 C++ 스트림의 동기화 해제
    cin.tie(NULL); // 입력과 출력 연결을 끊어주기

    int N;

    int b;

    string res;

    cin >> N >> b;  //N은 숫자 b는 N의 진수.

    while (N > 0) {
        int t = N % b;
        if (0 <= t && t <= 9) {
            res += (t + '0');
        }
        else res += (t - 10 + 'A');
        N /= b;
    }

    for (int i = res.size() - 1; i >= 0; --i) {
        cout << res[i];
    }


    return 0;
}