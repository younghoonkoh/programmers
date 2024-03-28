#include <iostream>
#include <string>
using namespace std;

const int mx = 100000;
int arr[mx];
int pos = 0;
    
void push(int N) {



    arr[pos++] = N;

}

int pop() {
    if (arr[pos-1] == NULL) {
        return - 1;
    }

    pos--;
    return arr[pos];
   

}

int size() {
    return pos;
}

int empty() {
    if (arr[pos - 1] == NULL) {
        return 1;
    }
    else return 0;
}


int top() {

    if (arr[pos - 1] == NULL) {
        return - 1;
    }

    return arr[pos - 1];

}
    


int main(){

   
    ios_base::sync_with_stdio(false); // C와 C++ 스트림의 동기화 해제
    cin.tie(NULL); // 입력과 출력 연결을 끊어주기
    int N = 0;
    cin >> N;
    string s = "";
    for (int i = 0; i < N; ++i) {
        cin >> s;
        
        if (s == "push") {
            int N;
            cin >> N;
            push(N);
        }
        
        if (s == "pop") {
            cout << pop() << '\n';
        }

        if (s == "size") {
            cout <<size() << '\n';
        }

        if (s == "empty") {
            cout << empty() << '\n';
        }

        if (s == "top") {
            cout << top() << '\n';
        }

    }
   


  
    return 0;
}