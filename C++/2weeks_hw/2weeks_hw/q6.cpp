#include <iostream>
using namespace std;

int main() {
	char password1[100]; //�н�����1 ���� ����
	char password2[100]; //�н�����2 ���� ����

	cout << "�� ��ȣ�� �Է��ϼ���>>";
	cin >> password1; //��ȣ1 �Է�
	cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ���>>";
	cin >> password2; //��ȣ2 �Է�

	if (strcmp(password1, password2) == 0) //strcmp�Լ��� ��ȣ1,2�� ���ϴ� ���ǹ�
		cout << "�����ϴ�.";
	else
		cout << "�ٸ��ϴ�.";
	cout << endl;
}