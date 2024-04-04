#include <iostream>
#include <queue>


using namespace std;




int main() {


    ios_base::sync_with_stdio(false); // C와 C++ 스트림의 동기화 해제
    cin.tie(NULL); // 입력과 출력 연결을 끊어주기

    int N;
    cin >> N;

    queue<int> s;

    for (int i = 1; i <= N; ++i) {
        s.push(i);
    }

    for (int i = 0; i < N-1; ++i) {

        s.pop();
        s.push(s.front());
        s.pop();
    }

    cout << s.front();

    return 0;
} 