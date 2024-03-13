#include <iostream>
#include <string>

using namespace std;






int main()
{

    ios_base::sync_with_stdio(false); // C와 C++ 스트림의 동기화 해제
    cin.tie(NULL); // 입력과 출력 연결을 끊어주기

    int arr[21];

    for (int i = 1; i <= 20; ++i) {
        arr[i] = i;
    }

    for (int i = 0; i < 10; ++i) {
        int a, b;
        cin >> a >> b;


        while (a < b) {             //a<b라는 조건을 걸어줘 무한루프 탈출.
            int tmp = arr[a];       //숫자 뒤바꾸기. 후위연산자를 활용해 계산 끝난 후 1증가시켜 줌
            arr[a++] = arr[b];
            arr[b--] = tmp;
        }
    }

    for (int i = 1; i <= 20; ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}
