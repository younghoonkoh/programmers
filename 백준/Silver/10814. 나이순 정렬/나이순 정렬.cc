#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

struct person {
    int age;
    string name;
};

bool compare(const person& a, const person& b) {
    if (a.age != b.age) return a.age < b.age;
    return false;
}



int main() {


    ios_base::sync_with_stdio(false); // C와 C++ 스트림의 동기화 해제
    cin.tie(NULL); // 입력과 출력 연결을 끊어주기



    int N;
    cin >> N;

    person people[100001];

    for (int i = 0; i < N; ++i) {
        cin >> people[i].age >> people[i].name;
    }

    stable_sort(people, people + N, compare);

    for (int i = 0; i < N; ++i) {
        cout << people[i].age << " " << people[i].name << "\n";
    }
   
    return 0;
} 