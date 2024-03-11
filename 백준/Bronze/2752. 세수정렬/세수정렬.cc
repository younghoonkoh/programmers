#include <iostream>
#include <string>

using namespace std;




int main()
{

    ios_base::sync_with_stdio(false); // C와 C++ 스트림의 동기화 해제
    cin.tie(NULL); // 입력과 출력 연결을 끊어주기


    int arr[3] = {};
    
    for (int i = 0; i < 3; ++i) {
        cin >> arr[i];
    }
    
    for (int i = 0; i < 3; ++i) {           // 오름차순 알고리즘
        for (int j = 0; j < 2; ++j) {
            if (arr[j + 1] < arr[j]) {
                int a = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = a;
            }
        }
    }

    for (int i = 0; i < 3; ++i) {
        cout << arr[i] << " ";
    }



    return 0;
}
