#include <iostream>
#include <string>

using namespace std;




int main() {


    ios_base::sync_with_stdio(false); // C와 C++ 스트림의 동기화 해제
    cin.tie(NULL); // 입력과 출력 연결을 끊어주기



    string s;

    float time[20];
    float score[20];

    string grade;

   

    float sum = 0;
    float a = 0;

    for (int i = 0; i < 20; ++i) {
        cin >> s >> time[i] >> grade;

        if (grade == "A+") score[i] = 4.5;
        else if (grade == "A0") score[i] = 4.0;
        else if (grade == "B+") score[i] = 3.5;
        else if (grade == "B0") score[i] = 3.0;
        else if (grade == "C+") score[i] = 2.5;
        else if (grade == "C0") score[i] = 2.0;
        else if (grade == "D+") score[i] = 1.5;
        else if (grade == "D0") score[i] = 1.0;
        else if (grade == "F") score[i] = 0.0;
        else if (grade == "P") continue;

        sum += time[i] * score[i];
        a += time[i];
    }

    cout << fixed;
    cout.precision(6);

    cout << sum / a;

   
    return 0;
} 