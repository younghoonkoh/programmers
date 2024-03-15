#include <iostream>
#include <string>
using namespace std;




int main()
{

    ios_base::sync_with_stdio(false); // C와 C++ 스트림의 동기화 해제
    cin.tie(NULL); // 입력과 출력 연결을 끊어주기




    string str1 = {};
    string str2 = {};

    cin >> str1 >> str2;

    int alpha[26] = {};
    int sum = 0;




    for (int i = 0; i < str1.size(); ++i) {

        alpha[str1[i] - 'a']++;
    }

    for (int i = 0; i < str2.size(); ++i) {
        alpha[str2[i] - 'a']--;
    }



    for (int i = 0; i < 26; ++i) {
        if (alpha[i] < 0) {
            sum -= alpha[i];
        }
        else {
            sum += alpha[i];
        }

    }

    cout << sum;


    return 0;
}