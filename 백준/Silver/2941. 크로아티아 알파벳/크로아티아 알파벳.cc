#include <iostream>
#include <string>


using namespace std;




int main() {


    ios_base::sync_with_stdio(false); // C와 C++ 스트림의 동기화 해제
    cin.tie(NULL); // 입력과 출력 연결을 끊어주기

    string s;
    cin >> s;

    int a;
    string arr[8] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };

    for (int i = 0; i < 8; ++i) {
        while (true) {
            a = s.find(arr[i]);
            if (a != -1) {
                s.replace(a, arr[i].size(), "#");
            }

            else break;
        }
    }

    cout << s.size();
   
    return 0;
} 