#include <iostream>
using namespace std;

int main() {
	char password1[100]; //패스워드1 변수 선언
	char password2[100]; //패스워드2 변수 선언

	cout << "새 암호를 입력하세요>>";
	cin >> password1; //암호1 입력
	cout << "새 암호를 다시 한 번 입력하세요>>";
	cin >> password2; //암호2 입력

	if (strcmp(password1, password2) == 0) //strcmp함수로 암호1,2를 비교하는 조건문
		cout << "같습니다.";
	else
		cout << "다릅니다.";
	cout << endl;
}