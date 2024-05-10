#include <iostream>
#include <string>
using namespace std;





int main()
{

    ios_base::sync_with_stdio(false); // C와 C++ 스트림의 동기화 해제
    cin.tie(NULL); // 입력과 출력 연결을 끊어주기

    string str = {};

    getline(cin, str);

    int sum = 1;

    for (int i = 0; i < str.size(); ++i) {
        
        if (str[i] == 32) {
            sum++;
        }

    }

    if (str[0] == 32)
        sum--;
    if (str[str.size() - 1] == 32)
        sum--;

    cout << sum;


    return 0;
}