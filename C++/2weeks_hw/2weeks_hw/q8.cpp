#include <iostream>
#include <cstring> // string�Լ� ����� �� ��ó���⿡ ����.
using namespace std;

int main() {
	string answer;
	char name[100];
	int max = 0; 
	int a = 0;

	cout << "5 ���� �̸��� ';'���� �����Ͽ� �Է��ϼ���\n" << ">>";

	for (int i = 1; i <= 5; i++)
	{
		cin.getline(name, 100, ';');
		cout << i << ";" << name;
		cout << endl;

	if (max < strlen(name))
		{
			max = strlen(name); // ������ ���̸� Ȯ���ϴ� �Լ��� �����. 
			a = i;
			answer = name; // ���� �� �̸��� answer�� ���.
		}
	}
	cout << "���� �� �̸���" << answer << endl;
}