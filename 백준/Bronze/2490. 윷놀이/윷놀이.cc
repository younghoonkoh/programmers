#include <iostream>
#include <string>

using namespace std;




int main()
{

    ios_base::sync_with_stdio(false); // C와 C++ 스트림의 동기화 해제
    cin.tie(NULL); // 입력과 출력 연결을 끊어주기





    for (int j = 0; j < 3; ++j) {
        int a = 0;
        int total = 0;
        for (int i = 0; i < 4; ++i) {
            cin >> a;

            total += a;
        }

        if (total == 0) cout << "D" << "\n";
        else if (total == 4) cout << "E" << "\n";
        else if (total == 1) cout << "C" << "\n";
        else if (total == 2) cout << "B" << "\n";
        else cout << "A" << "\n";

        
    }    
        
    return 0;
}