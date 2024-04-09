#include <iostream>



using namespace std;




int main() {


    ios_base::sync_with_stdio(false); // C와 C++ 스트림의 동기화 해제
    cin.tie(NULL); // 입력과 출력 연결을 끊어주기

    int N;

    cin >> N;

    long long a, b;
    long long a_min = 10000, a_max = -10000, b_min = 10000, b_max=-10000;



    for (int i = 0; i < N; ++i) {
        cin >> a >> b;

        if (a > a_max) {
            a_max = a;
        }

        if (b > b_max) {
            b_max = b;
        }

        if (a_min > a) {
            a_min = a;
        }

        if (b_min > b) {
            b_min = b;
        }

    }

    cout << (a_max - a_min) * (b_max - b_min);
    
   
    return 0;
} 