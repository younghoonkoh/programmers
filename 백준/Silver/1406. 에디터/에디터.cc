#include <iostream>
#include <string>
#include <list>
using namespace std;






int main()
{

    ios_base::sync_with_stdio(false); // C와 C++ 스트림의 동기화 해제
    cin.tie(NULL); // 입력과 출력 연결을 끊어주기

    int M;
    string s = "";
    string ans = "";

    cin >> s >> M;
    list <char> li;

    for (int i = 0; i < s.size(); ++i) {
        li.push_back(s[i]);
    }

    auto cursor = li.end();

    for (int i = 0; i < M; ++i) {
        char cmd, c;
        cin >> cmd;

        if (cmd == 'L') {
            if (cursor != li.begin())
                --cursor;
        }

        else if (cmd == 'D') {
            if (cursor != li.end()) {
                ++cursor;
            }
        }

        else if (cmd == 'B') {
            if (cursor != li.begin()) {
                --cursor;
                cursor = li.erase(cursor);
            }
        }

        else if (cmd == 'P') {
            cin >> c;
            li.insert(cursor, c);
        }

    }

    for (cursor = li.begin(); cursor != li.end(); ++cursor) {
        cout << *cursor;
    }
  
    return 0;
}