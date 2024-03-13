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
        for (int j = 2*N-1; 2* i < j; --j) {
            cout << "*";
        }

        cout << "\n";
    }


    return 0;
}
