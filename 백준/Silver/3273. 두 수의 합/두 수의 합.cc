#include <iostream>
#include <string>
using namespace std;




int main()
{

    ios_base::sync_with_stdio(false); // C와 C++ 스트림의 동기화 해제
    cin.tie(NULL); // 입력과 출력 연결을 끊어주기

    int N = 0;
    cin >> N;
    int array[1000000] = {};
    int occur[2000001] = {};

    for (int i = 0; i < N; ++i) {
        cin >> array[i];
    }

    int x = 0;
    cin >> x;
    
    int a = 0;

    for (int i = 0; i < N; ++i) {

        occur[array[i]] = 1;
    }
    for( int i = 0; i < N; ++i){
        if (occur[x - array[i]] == 1) {
            ++a;
        }
    }

    

    cout << a/2;

    return 0;
}