#include <iostream>
#include <deque>


using namespace std;




int main() {


    ios_base::sync_with_stdio(false); // C와 C++ 스트림의 동기화 해제
    cin.tie(NULL); // 입력과 출력 연결을 끊어주기

    int N, M;

    cin >> N>>M;

    deque<int> s;
    int idx= 0;
    int res = 0;
    int c = 0;

    for (int i = 1; i <= N; ++i) {
        s.push_back(i);
    }

    while (M--) {
        cin >> c;

        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == c) {
                idx = i;
                break;                      // 숫자의 위치 구해주기
            }
        }
        
        //앞
        if (idx <= s.size() / 2) {
            while (1) {
                if (s.front() == c) {
                    s.pop_front();
                    break;
                }
                ++res;
                s.push_back(s.front());
                s.pop_front();
            }
            
        }
        //뒤
        else {
            while (1) {
                if(s.front() == c){
                    s.pop_front();
                    break;
                }
                ++res;
                s.push_front(s.back());
                s.pop_back();
            }

        }

    }
    cout << res;




   
    return 0;
} 