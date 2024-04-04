#include <iostream>
#include <stack>


using namespace std;




int main() {


    ios_base::sync_with_stdio(false); // C와 C++ 스트림의 동기화 해제
    cin.tie(NULL); // 입력과 출력 연결을 끊어주기

    int k = 0;
    cin >> k;

    stack<int> s;

    for (int i = 0; i < k; ++i) {
        int c;
        cin >> c;
        if (c == 0) {
            s.pop();
        }
        else {
            s.push(c);
        }


        

    }
    
    int sum = 0;

    while(!s.empty()) {
        sum += s.top();
        s.pop();
    }
    cout << sum;

    return 0;
} 