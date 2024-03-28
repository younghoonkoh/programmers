#include <iostream>
#include <string>
#include <stack>
using namespace std;


    


int main(){

   
    ios_base::sync_with_stdio(false); // C와 C++ 스트림의 동기화 해제
    cin.tie(NULL); // 입력과 출력 연결을 끊어주기

    int n;
    cin >> n;
    stack<int> s;

    while (n--) {
        string c;
        cin >> c;
        if (c == "push") {
            int t;
            cin >> t;
            s.push(t);
        }

        else if (c == "pop") {
            if (s.empty()) {
                cout << -1 << "\n";
            }
            else {
                cout << s.top() << "\n";
                s.pop();
            }
        }

        else if (c == "size") {
            cout << s.size() << "\n";
        }

        else if (c == "empty") {
            cout << (int)s.empty() << "\n";
        }

        else {
            if (s.empty()) {
                cout << -1 << "\n";
            }
            else cout << s.top() << "\n";
        }

    }

  
    return 0;
}