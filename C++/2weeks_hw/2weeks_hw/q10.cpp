#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char c[100];
	cout << "���ڿ� �Է� >>";
	cin >> c;

	for (int n = 0; n < strlen(c); n++)
	{
		for (int m = 0; m <= n; m++)
		{
			cout << c[m]; // ���ڿ��� �ϳ��� ����ϴ� for �ݺ����� �����. 
		}
		cout << endl;
	}
}