#include <iostream>
#include <algorithm>

using namespace std;





int main(){

   
    ios_base::sync_with_stdio(false); // C와 C++ 스트림의 동기화 해제
    cin.tie(NULL); // 입력과 출력 연결을 끊어주기

    int a[3] = {};

    int N = 30000;

    

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> a[j];
        }
        sort(a, a + 3);
    

        if (a[0] == 0 && a[1] == 0 && a[2] == 0) {
            break;
        }



        else if (a[0] *a[0] + a[1] * a[1] == a[2] * a[2]) {
            cout << "right" <<"\n";
        }
        
        else {
            cout << "wrong" << "\n";
        }
        
    }

    


    

  
    return 0;
}