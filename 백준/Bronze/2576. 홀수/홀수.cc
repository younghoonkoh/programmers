#include <iostream>
#include <string>

using namespace std;




int main()
{

    ios_base::sync_with_stdio(false); // C와 C++ 스트림의 동기화 해제
    cin.tie(NULL); // 입력과 출력 연결을 끊어주기

    int natural[7] = {};
    int sum = 0;
    int min = 101;

    for (int i = 0; i < 7; ++i) {
        cin >> natural[i];
        
        if (natural[i] % 2 == 1) {
            sum += natural[i];

            if (min > natural[i]) {
                min = natural[i];
            }
        }
    }

    if (sum == 0) {
        cout << "-1";
    }
    else{
        cout << sum << "\n" << min;
    }
    




    return 0;
}