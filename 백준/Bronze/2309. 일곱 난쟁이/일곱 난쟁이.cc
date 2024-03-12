#include <iostream>
#include <string>

using namespace std;




int main()
{

    ios_base::sync_with_stdio(false); // C와 C++ 스트림의 동기화 해제
    cin.tie(NULL); // 입력과 출력 연결을 끊어주기


    int array[9] = {};
    int cmt = 0;
    int sum = 0;


    for (int i = 0; i < 9; ++i) {
        cin >> array[i];

        sum += array[i];
    }

    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 8; ++j) {           //오름차순 정렬
            if (array[j] > array[j + 1]) {
                cmt = array[j];
                array[j] = array[j + 1];
                array[j + 1] = cmt;
            }            
        }
    }
    for (int i = 0; i < 8; ++i) {
        for (int j = i+1; j < 9; ++j) {
            if (sum - array[i] - array[j] == 100) {
                for (int z = 0; z < 9; ++z) {
                    if (z != i && z != j) {
                        cout << array[z] << "\n";
                    }
                }
                return 0;
            }
        }
    }
    return 0;
}
