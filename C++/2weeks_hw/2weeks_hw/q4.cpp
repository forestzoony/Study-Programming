#include <iostream>
using namespace std;

int main() {
	double n[5] = { 0 }, max= 0;

	cout << "5 ���� �Ǽ��� �Է��϶�>>";

	for (int i = 0; i < 5; i++) // 5���� �Ǽ��� �Է¹޵��� for�ݺ��� ���
	{
		cin >> n[i];
		n[i] > max ? max = n[i] : max; // �ִ� ����ϵ��� ��
	}

	cout << "���� ū �� = " << max;
}