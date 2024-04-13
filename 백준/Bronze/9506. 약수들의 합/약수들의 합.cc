#include <iostream>



using namespace std;



int main() {


    ios_base::sync_with_stdio(false); // C와 C++ 스트림의 동기화 해제
    cin.tie(NULL); // 입력과 출력 연결을 끊어주기

    int M = 0;

    int arr[100000] = {};

    while (true) {
        cin >> M;
        int sum = 0;
        int s = 0;

        if (M == -1) {
            break;
        }

        for (int i = 1; i < M; ++i) {

            if (M % i == 0) {
                sum += i;
                arr[i] = i;
            }
        }
        
        if (sum == M) {
            cout << sum << " = " << arr[1];
            
            for (int i = 2; i < M; ++i) {
                if (M % i == 0) {
                    cout << " + " << arr[i];
                }



            }
            cout << "\n";
        }

        else cout << M << " is NOT perfect." << "\n";



    }




    return 0;
}