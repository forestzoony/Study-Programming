#include <iostream>
using namespace std;

int main() {
	char c[100]; //문자를 받을 배열 변수 선언하기 

	while (true)
	{
		cout << "종료하고 싶으면 yes를 입력하세요>>"; 
		cin.getline(c, 100, '\n');

		if (strcmp(c, "yes") == 0) //yes 선언시 반복문 종료
			break;
	}
	cout << "종료합니다..." << endl;
}
