#include <iostream>
#include <string>

using namespace std;






int main()
{

    ios_base::sync_with_stdio(false); // C와 C++ 스트림의 동기화 해제
    cin.tie(NULL); // 입력과 출력 연결을 끊어주기

    int N = 0;
    cin >> N;

    for (int i = 0; i < N; ++i) {
        
        for (int j = 0; j < i; ++j) {
            cout << " ";
        }

        for (int j = 2 * (N - i) - 1; 0 < j; --j) {
            cout << "*";
        }
        cout << "\n";
    }

    for (int i = 0; i < N-1; ++i) {
        for (int j = N - i - 2; 0 < j; --j) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 3; ++j) {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}
