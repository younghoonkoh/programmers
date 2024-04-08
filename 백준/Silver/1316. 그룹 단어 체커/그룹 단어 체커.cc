#include <iostream>
#include <string>


using namespace std;




int main() {


    ios_base::sync_with_stdio(false); // C와 C++ 스트림의 동기화 해제
    cin.tie(NULL); // 입력과 출력 연결을 끊어주기

    int N;
    cin >> N;
    string word;
    int a = 0;
    int b = N;
    for (int i = 0; i < N; ++i) {
        cin >> word;

        for (int j = 0; j < word.size(); ++j) {
            for (int n = j+1; n < word.size(); ++n) {

                if (word[j] == word[n] && j+1 != n) {
                    for (int z = j + 1; z < n; ++z) {
                        if (word[z] != word[j]) {
                            ++a;
                        }
                    }
                }
            }
        }
        

        if (a > 0) {
            b--;
        }

        a = 0;

    }


    cout << b;
   
    return 0;
} 