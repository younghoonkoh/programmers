#include <iostream>
#include <string>

using namespace std;




int main()
{

    ios_base::sync_with_stdio(false); // C와 C++ 스트림의 동기화 해제
    cin.tie(NULL); // 입력과 출력 연결을 끊어주기

    int A, B;

    cin >> A >> B;

    if (A > B) {
        cout << A - B - 1 << "\n";

        for (int i = B + 1; i < A; ++i) {
            cout << i << " ";
        }
    }

    else if (A < B) {
        cout << B - A - 1 << "\n";
        for (int i = A + 1; i < B; ++i) {
            cout << i << " ";
        }
    }

    else cout << 0;
    
    return 0;
}
