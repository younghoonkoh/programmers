#include <iostream>
#include <string>
#include <queue>

using namespace std;





int main(){

   
    ios_base::sync_with_stdio(false); // C와 C++ 스트림의 동기화 해제
    cin.tie(NULL); // 입력과 출력 연결을 끊어주기

    int n;
    cin >> n;

    queue<int> s;

    while (n--) {
        string c;
        cin >> c;

        if (c == "push") {
            int t;
            cin >> t;

            s.push(t);
        }
        if (c == "pop") {
            if (s.empty()) {
                cout << -1 << "\n";
            }
            else
            {
                cout << s.front() << "\n";
                s.pop();
            }
            
        }
        if (c == "size") {
            cout << s.size()<<"\n";
        }

        if (c == "empty") {
            cout << s.empty() << "\n";
        }

        if (c == "front") {
            if (s.empty()) {
                cout << -1 << "\n";
            }
            else cout << s.front() << "\n";
        }

        if (c == "back") {
            if (s.empty()) {
                cout << -1 << "\n";
            }
            else cout << s.back() << "\n";
        }
    }
    

  
    return 0;
}