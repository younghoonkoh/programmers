#include <iostream>


using namespace std;




int main() {


    ios_base::sync_with_stdio(false); // C와 C++ 스트림의 동기화 해제
    cin.tie(NULL); // 입력과 출력 연결을 끊어주기

    int A, B;

    cin >> A >> B;

    cout << A * B;
   
    return 0;
} 