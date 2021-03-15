#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char c[100];
	cout << "문자열 입력 >>";
	cin >> c;

	for (int n = 0; n < strlen(c); n++)
	{
		for (int m = 0; m <= n; m++)
		{
			cout << c[m]; // 문자열을 하나씩 출력하는 for 반복문을 사용함. 
		}
		cout << endl;
	}
}