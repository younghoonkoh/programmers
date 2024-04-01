#include <iostream>
#include <string>


using namespace std;

const int MX = 100005;
int dat[2 * MX + 1];
int head = MX, tail = MX;

void push_front(int x) {
    dat[--head] = x;
}

void push_back(int x) {
    dat[tail++] = x;
}

int pop_front() {
    
    return dat[head++];

}

int pop_back() {
    
    return dat[--tail];
    
}

int front() {
    return dat[head];
}

int back() {
    return dat[tail - 1];
}

int size() {
    return tail - head;
}

int empty() {
    if (head==tail)
        return 1;
    else return 0;
}


int main() {


    ios_base::sync_with_stdio(false); // C와 C++ 스트림의 동기화 해제
    cin.tie(NULL); // 입력과 출력 연결을 끊어주기

    int N;
    cin >> N;

    string s;

    for (int i = 0; i < N; ++i) {
        cin >> s;

        if (s == "push_front") {
            int N = 0;
            cin >> N;
            push_front(N);
        }

        if (s == "push_back") {
            int N = 0;
            cin >> N;
            push_back(N);
        }

        if (s == "pop_front") {
            if (head==tail) {
                cout << -1 << "\n";
            }
            else cout << pop_front() << "\n";
        }

        if (s == "pop_back") {
            if (head==tail) {
                cout<< -1<<"\n";
            }
            else cout << pop_back() << "\n";
        }

        if (s == "size") {
            cout << size() << "\n";
        }

        if (s == "empty") {
            cout << empty() << "\n";
        }

        if (s == "front") {
            if (head==tail) {
                cout<< -1<<"\n";
            }
            else cout << front() << "\n";
        }

        if (s == "back") {
            if (head==tail) {
                cout << -1 << "\n";
            }
            else cout << back() << "\n";
        }
    }




    return 0;
}