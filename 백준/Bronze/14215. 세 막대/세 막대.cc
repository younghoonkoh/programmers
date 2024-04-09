#include <iostream>
#include <algorithm>

using namespace std;




int main() {


    ios_base::sync_with_stdio(false); // C와 C++ 스트림의 동기화 해제
    cin.tie(NULL); // 입력과 출력 연결을 끊어주기


    int a[3];

    for (int i = 0; i < 3; ++i) {
        cin >> a[i];
    }
    sort(a, a + 3);

    int m = 0;

    if (a[2] >= a[1] + a[0]) {
        m = a[0] + a[1] - 1;

        cout << m + a[1] + a[0];
    }

    else cout << a[0] + a[1] + a[2];



    
       

    
   
    return 0;
} 