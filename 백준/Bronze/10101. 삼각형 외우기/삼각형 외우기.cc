#include <iostream>



using namespace std;




int main() {


    ios_base::sync_with_stdio(false); // C와 C++ 스트림의 동기화 해제
    cin.tie(NULL); // 입력과 출력 연결을 끊어주기

    int a, b, c;

    cin >> a >> b >> c;

    if (a == 60 && b ==60 && c == 60) {
        cout << "Equilateral";
    }
    else if (a + b + c == 180 && (a == b || b == c || a == c)) {
        cout << "Isosceles";
    }
    else if (a + b + c == 180) {
        cout << "Scalene";
    }
    else cout << "Error";

    
   
    return 0;
} 