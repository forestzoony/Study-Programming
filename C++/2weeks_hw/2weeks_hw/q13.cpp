#include <iostream>
#include <cstring>
using namespace std;

bool checkError() {
	if (cin.fail()) { 
		cin.ignore(100, '\n');
		cout << "�Է� ����" << endl;
		return true; // ���� ����
	}
	else
		return false; // ���� ����
}

int main() {
	int menu; // 1~4
	int num; // ���κ�

	cout << "***** �¸��忡 ���� ���� ȯ���մϴ�. *****" << endl;
	while (true) {
		cout << "«��:1, ¥��:2, ������:3, ����:4>>  ";
		cin >> menu;
		if (checkError()) continue; 

		if (menu < 1 || menu > 4) {
			cout << "�ٽ� �ֹ��ϼ���!!" << endl;
			continue;
		}
		else if (menu == 4) {
			cout << "���� ������ �������ϴ�." << endl;
			return 0;
		}

		// �Է� ����
		cout << "���κ�?";
		cin >> num;
		if (checkError()) continue; 
		if (num < 1) {
			cout << "�ٽ� �ֹ��ϼ���!!" << endl;
			continue;
		}
		switch (menu) {
		case 1:
			cout << "«�� " << num << "�κ� ���Խ��ϴ�" << endl;
			break;
		case 2:
			cout << "¥�� " << num << "�κ� ���Խ��ϴ�" << endl;
			break;
		case 3:
			cout << "������ " << num << "�κ� ���Խ��ϴ�" << endl;
			break;
		}
	}
}