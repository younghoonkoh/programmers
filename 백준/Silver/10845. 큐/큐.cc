#include <iostream>
#include <string>

using namespace std;


const int MX = 1000005;
int arr[MX] = {};
int head, tail = 0;

void push(int x) {
    arr[tail++] = x;
}

int pop() {
    if (tail == head) {
        return -1;
    }
    head++;
    return arr[head -1];
}

int size() {
    return tail - head;
}

int empty() {
    if (tail  ==head) {
        return 1;
    }
    else return 0;
}
    
int front() {
    
    if (tail == head) {
        return -1;
    }
    
    return arr[head];

}


int back() {
    if (tail  == head) {
        return -1;
    }
    return arr[tail - 1];
}



int main(){

   
    ios_base::sync_with_stdio(false); // C와 C++ 스트림의 동기화 해제
    cin.tie(NULL); // 입력과 출력 연결을 끊어주기

    int n;
    cin >> n;

    while (n--) {
        string s;
        cin >> s;

        if (s == "push") {
            int t;
            cin >> t;
            push(t);
        }

        if (s == "pop") {
            cout << pop() << "\n";
        }

        if (s == "size") {
            cout << size() << "\n";
        }
        if (s == "empty") {
            cout << empty() << "\n";
        }
        if (s == "front") {
            cout << front() << "\n";
        }
        if (s == "back") {
            cout << back() << "\n";
        }
    }
    

  
    return 0;
}