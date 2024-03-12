#include <iostream>
#include <string>

using namespace std;




int main()
{

    ios_base::sync_with_stdio(false); // C와 C++ 스트림의 동기화 해제
    cin.tie(NULL); // 입력과 출력 연결을 끊어주기

    int N, M;

    cin >> N;
    int y = 0, m =0;

    for (int i = 0; i < N; ++i) {
        cin >> M;
        
        y += (M / 30 + 1) * 10;
        m += (M / 60 + 1) * 15;

    }

    if (y > m) {
        cout << "M" << " " << m;
    }
    else if (y < m) {
        cout << "Y" << " " << y;
        
    }
    else {
        cout << "Y M " << y;

    }
    return 0;
}
