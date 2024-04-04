#include <iostream>
#include <string>


using namespace std;




int main() {


    ios_base::sync_with_stdio(false); // C와 C++ 스트림의 동기화 해제
    cin.tie(NULL); // 입력과 출력 연결을 끊어주기


    while (true)
    {
        string N = "";
        
        cin >> N;
        int a = 0, b = 0;

        if (N == "0") {
            break;
        }

        if (N.size() % 2 == 1) {
            for (int i = 0; i < N.size() / 2; ++i) {
                if (N[i] == N[N.size() - 1 - i]) {
                    ++a;
                }
            }
            if (a == N.size() / 2) {
                cout << "yes" << "\n";
            }
            else cout << "no" << "\n";

        }

        else if (N.size() % 2 == 0) {
            for (int i = 0; i < N.size() / 2; ++i) {
                if (N[i] == N[N.size() - i -1]) {
                    ++b;
                }              
            }
            if (b == N.size() / 2) {
                cout << "yes" << "\n";
            }
            else cout << "no" << "\n";
        }
        
        
        
    }



    return 0;
} 