#include <iostream>
#include <string>
using namespace std;




int main() {

	ios_base::sync_with_stdio(false); // C와 C++ 스트림의 동기화 해제
	cin.tie(NULL); // 입력과 출력 연결을 끊어주기

	string str = "";

	cin >> str;

	for (int i = 0; i < str.size(); ++i) {
		if (str[i] < 'a') {
			str[i] = str[i] + 32;
		}
		else {
			str[i] = str[i] - 32;
		}

		cout << str[i];
	}

	return 0;
}