#include <iostream>
#include <string>


using namespace std;





int main() {


    ios_base::sync_with_stdio(false); // C와 C++ 스트림의 동기화 해제
    cin.tie(NULL); // 입력과 출력 연결을 끊어주기

    int N;
    cin >> N;

    string a;

    long long sum = 0;

    int alpha[27] = {};

    const long long M = 1234567891;

    long long r = 1;
    cin >> a;
    int b[27] = {};
    for (int i = 0; i < N; ++i) {
       
        b[i] = a[i] - 'a' +1;
        sum = (sum + b[i] * r) % M;
        r = r * 31 % M;
    }
        

    cout << sum;

    return 0;
} 