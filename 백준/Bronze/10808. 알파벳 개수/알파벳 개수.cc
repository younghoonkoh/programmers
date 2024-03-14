#include <iostream>
#include <string>

using namespace std;






int main()
{

    ios_base::sync_with_stdio(false); // C와 C++ 스트림의 동기화 해제
    cin.tie(NULL); // 입력과 출력 연결을 끊어주기

    string str = {};
    int alpha[26] = {};
    int num= 0;
    cin >> str;

    for (int i = 0; i < str.size(); ++i) {
        num = str[i] - 'a';                     //아스키코드 이용해서 자릿수 배열 구해줌
        ++alpha[num];
    }

    for (int i = 0; i < 26; ++i) {
        cout << alpha[i] << " ";
    }

    return 0;
}