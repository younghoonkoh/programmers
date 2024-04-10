#include <iostream>
#include <algorithm>


using namespace std;



int main() {


    ios_base::sync_with_stdio(false); // C와 C++ 스트림의 동기화 해제
    cin.tie(NULL); // 입력과 출력 연결을 끊어주기

    int n = 0, k = 0;

    cin >> n >> k;

    int c = 1, a = 0, s = n;
    int arr[10000] = {};

    while (true) {

        

        if (n % c == 0) {

                    
            arr[a] = c;  
            ++a;        // 배열 안에 들어갈 수의 개수
        }
        
        

        if (c > n) {
            break;
        }

        c++;

        n = s;
    }

    sort(arr, arr + a);

    cout << arr[k-1];

    return 0;
}