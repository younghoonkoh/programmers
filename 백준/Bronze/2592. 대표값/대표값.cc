#include <iostream>

using namespace std;




int main()
{

    ios_base::sync_with_stdio(false); // C와 C++ 스트림의 동기화 해제
    cin.tie(NULL); // 입력과 출력 연결을 끊어주기
    int array[10] = {}, sum = 0;
    int a[1000] = {};
    for (int i = 0; i < 10; ++i) {
        cin >> array[i];
        sum += array[i];
        a[array[i]]++;
    }
    int max = 0, b = 0;
    for (int i = 0; i < 10; ++i) {
        if (a[array[i]] > max) {
            max = a[array[i]];
        }
    }
    for (int i = 0; i < 10; ++i) {
        if (a[array[i]] == max) {
            b = array[i];
        }
    }








    int avg = sum / 10;

    cout << avg<< "\n" << b;


    
    return 0;
}