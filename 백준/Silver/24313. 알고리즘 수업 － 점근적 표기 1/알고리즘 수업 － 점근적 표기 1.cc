#include <iostream>


using namespace std;




int main() {


    ios_base::sync_with_stdio(false); // C와 C++ 스트림의 동기화 해제
    cin.tie(NULL); // 입력과 출력 연결을 끊어주기


    int a1, a0;

    cin >> a1 >> a0;

    int c = 0;
    cin >> c;
    int n;
    cin >> n;
    
    if ((c - a1) * n >= a0 && a1<=c) {
        cout << 1;
    }
    else cout << 0;
    

   

   
    return 0;
} 