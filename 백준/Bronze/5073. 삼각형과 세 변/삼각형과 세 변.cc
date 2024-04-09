#include <iostream>
#include <algorithm>


using namespace std;




int main() {


    ios_base::sync_with_stdio(false); // C와 C++ 스트림의 동기화 해제
    cin.tie(NULL); // 입력과 출력 연결을 끊어주기

    int a[3];

    while (true) {
        for (int i = 0; i < 3; ++i) {
            cin >> a[i];
        }

        sort(a, a + 3);

        if (a[0] == 0 && a[1] == 0 && a[2] == 0) {
            break;
        }
        
        if (a[2] >= a[0] + a[1]) {
            cout << "Invalid" << "\n";
        }
        

        else if (a[0] == a[1] && a[1] == a[2]) {
            cout << "Equilateral"<<"\n";
        }

        else if (a[0] == a[1] || a[1] == a[2]) {
            cout << "Isosceles"<<"\n";
        }

        else cout << "Scalene"<<"\n";

       

    }
   
    return 0;
} 