#include <iostream>
#include <string>
#include <algorithm>

using namespace std;




int main() {


    ios_base::sync_with_stdio(false); // C와 C++ 스트림의 동기화 해제
    cin.tie(NULL); // 입력과 출력 연결을 끊어주기


    string N;
    
    while (true) {
        cin >> N;
        string b = N;
        reverse(N.begin(), N.end());

        if (N == "0") {
            break;
        }

        else if (N == b) {
            cout << "yes\n";
        }
        else {
            cout << "no\n";
        }

    }
        
        
    



    return 0;
} 