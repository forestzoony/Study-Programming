#include <iostream>
using namespace std;

int main() {
	char c[100]; // 100�� �̸��� ���ڸ� ���� �迭 ���� c ����.
	int count = 0;

	cout << "���ڵ��� �Է��϶�(100�� �̸�)\n";
	cin.getline(c, 100, '\n');

	for (int i = 0; i < 100; i++)
	{
		if (c[i] == 'x')count++; // for �ݺ������� x������ �����.
	}

	cout << "x�� ������ " << count << endl;
}
