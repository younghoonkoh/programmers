#include <iostream>



using namespace std;



int main() {


    ios_base::sync_with_stdio(false); // C와 C++ 스트림의 동기화 해제
    cin.tie(NULL); // 입력과 출력 연결을 끊어주기

    int M, N;

    cin >> M >> N;

    int sum = 0;

    int a = 0;
    int b[10000] = {};

    for (int i = M; M <= N; ++M) {


        for (int j = 2; j <= M; ++j) {

            if (M == j) {
                b[a] = M;
                
                sum += b[a];
                ++a;
            }

            if (M % j == 0) {
                break;
            }

        }

        
        
    }
    if (b[0] == NULL) {
        cout << -1;
    }

    else cout << sum << "\n" << b[0]; 





    return 0;
}