#include <iostream>
#include <string>
#include <list>
using namespace std;




void input(int N, int k) {

    list<int> s;
    list<int> ::iterator cur;

    for (int i = 1; i <= N; ++i) {
        s.push_back(i);
    }

    cur = s.begin();

    cout << "<";

    while (s.size() > 1) {
        for (int i = 0; i < k - 1; ++i) {
            ++cur;
            if (cur == s.end()) {
                cur = s.begin();
            }
        }
        cout << *cur <<", ";

        cur = s.erase(cur);

        if (cur == s.end()) {
            cur = s.begin();
        }

    }



    cout << *cur << ">";
}

    

    


int main(){

   
    ios_base::sync_with_stdio(false); // C와 C++ 스트림의 동기화 해제
    cin.tie(NULL); // 입력과 출력 연결을 끊어주기

    int N, k;
    
    cin >> N >> k;


    input(N, k);


  
    return 0;
}