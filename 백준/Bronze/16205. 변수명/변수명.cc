#include <iostream>
#include <string>
using namespace std;




int main()
{

    ios_base::sync_with_stdio(false); // C와 C++ 스트림의 동기화 해제
    cin.tie(NULL); // 입력과 출력 연결을 끊어주기

    int N = 0;
    string str;
    cin >> N >> str;
    string str1 = str;
    int j=0;

    if (N == 1) {
        cout << str << "\n";

        for (int i = 0; i < str.size(); ++i) {
            if (str[i] < 'a') {
                cout << "_";
                str[i] += 32;
            }
            cout << str[i];
        }

        cout << "\n";

        str = str1;
        
        str[0] -= 32;

        cout << str;
    }



    else if (N == 2) {
        for (int i = 0; i < str.size(); ++i) {

            if (str[i] == '_') {
                j = i + 1;
                if (str[j] >= 'a') {
                    str[j] -= 32;

                }
                continue;

            }

            cout << str[i];
        }

        cout << "\n" << str1 << "\n";
        
        for (int i = 0; i < str.size(); ++i) {

            if (str[i] == '_') {
                j = i + 1;       
                if (str[j] >= 'a') {
                    str[j] -= 32;

                }
                continue;
                
            }
            str[0] -= 32;
            

            cout << str[i];
        }

    }

    else if (N == 3) {
        str[0] += 32;
        for (int i = 0; i < str.size(); ++i) {
            

            cout << str[i];

        }
        cout << "\n" ;

        for (int i = 0; i < str.size(); ++i) {

            if (str[i] < 97) {
                cout << "_";
                str[i] += 32;

            }
            cout << str[i];
        }

        cout << "\n" << str1;

      
    }


    return 0;
}