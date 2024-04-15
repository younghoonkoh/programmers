#include <iostream>
using namespace std;




int main()
{

    ios_base::sync_with_stdio(false); // C와 C++ 스트림의 동기화 해제
    cin.tie(NULL); // 입력과 출력 연결을 끊어주기

    int X = 0; 

    cin >> X;
    
    int i = 1;
    while (X > i) {
        X -= i;
        ++i;
    }

    if (i % 2 == 1) {
        cout << i + 1 - X << "/" << X;
    }
    else cout << X << "/" << i + 1 - X;
    


    return 0;

}