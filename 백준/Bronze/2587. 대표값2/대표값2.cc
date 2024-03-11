#include <iostream>
#include <string>

using namespace std;




int main()
{

    ios_base::sync_with_stdio(false); // C와 C++ 스트림의 동기화 해제
    cin.tie(NULL); // 입력과 출력 연결을 끊어주기

    int natural[5] = {};
    int sum = 0;
    int average = 0;
    int middle = 0;


    for (int i = 0; i < 5; ++i) {
        cin >> natural[i];

        sum += natural[i];

        average = sum / 5;
    }

    for (int i = 0; i<5; ++i){

        for (int j = 0; j < 4; ++j) {
            if (natural[j] > natural[j + 1]) {
                middle = natural[j];
                natural[j] = natural[j + 1];
                natural[j + 1] = middle;
            }           
        }


    }

    cout << average << "\n" << natural[2];


    return 0;
}
