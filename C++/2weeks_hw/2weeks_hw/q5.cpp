#include <iostream>
using namespace std;

int main() {
	char c[100]; // 100개 미만의 문자를 받을 배열 변수 c 선언.
	int count = 0;

	cout << "문자들을 입력하라(100개 미만)\n";
	cin.getline(c, 100, '\n');

	for (int i = 0; i < 100; i++)
	{
		if (c[i] == 'x')count++; // for 반복문으로 x개수를 출력함.
	}

	cout << "x의 개수는 " << count << endl;
}
