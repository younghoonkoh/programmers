#include <iostream>
#include <string>
using namespace std;




int main()
{

    ios_base::sync_with_stdio(false); // C와 C++ 스트림의 동기화 해제
    cin.tie(NULL); // 입력과 출력 연결을 끊어주기


    int N = 0;
    cin >> N;
    int arr[101] = {};
    int sum = 0, hap = 0;
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < N; ++i) {
        if (arr[i] == 1) {
            ++sum;
            for (int j = 1; j < N; ++j) {
                if (arr[i + j] == 1)
                    ++hap;
                    
                if (arr[i + j] == 0)
                    break;
            }
        }
    }

    cout << sum+hap;
            
    return 0;
}