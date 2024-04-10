#include <iostream>
#include <string>


using namespace std;



int main() {


    ios_base::sync_with_stdio(false); // C와 C++ 스트림의 동기화 해제
    cin.tie(NULL); // 입력과 출력 연결을 끊어주기

    string N;
    int b;
    cin >> N >> b;

    int mul = 0;

    for (int i = 0; i < N.size(); ++i) {
        if ('0' <= N[i] && N[i] <= '9') {
            mul = mul * b + (N[i] - '0');
        }
        else mul = mul * b + (N[i] - 'A' + 10);
    }

    cout << mul;

    return 0;
}