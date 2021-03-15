#include <iostream>
#include <cstring> // string함수 사용할 시 전처리기에 포함.
using namespace std;

int main() {
	string answer;
	char name[100];
	int max = 0; 
	int a = 0;

	cout << "5 명의 이름을 ';'으로 구분하여 입력하세요\n" << ">>";

	for (int i = 1; i <= 5; i++)
	{
		cin.getline(name, 100, ';');
		cout << i << ";" << name;
		cout << endl;

	if (max < strlen(name))
		{
			max = strlen(name); // 변수의 길이를 확인하는 함수를 사용함. 
			a = i;
			answer = name; // 가장 긴 이름을 answer로 출력.
		}
	}
	cout << "가장 긴 이름은" << answer << endl;
}