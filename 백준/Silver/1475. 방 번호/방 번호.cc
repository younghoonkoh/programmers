#include <iostream>
#include <string>
using namespace std;




int main()
{

    ios_base::sync_with_stdio(false); // C와 C++ 스트림의 동기화 해제
    cin.tie(NULL); // 입력과 출력 연결을 끊어주기

    int N;
    cin >> N;

    string s = to_string(N);


    int sum = 0;

    int number[10] = {};

    for (int i = 0; i < s.size(); ++i) {
        number[s[i] - '0']++;
    }


    for (int i = 0; i < 10; ++i) {

        if (i != 9 && i != 6) {
            if (number[i] > sum) {
                sum = number[i];
            }
        }
    }

    if (sum < (number[6] + number[9] + 1) / 2) {
        sum = (number[6] + number[9] + 1) / 2;
    }
    cout << sum;

    return 0;
}