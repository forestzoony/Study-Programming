#include <iostream>
using namespace std;

int main() {
	char c[100]; //���ڸ� ���� �迭 ���� �����ϱ� 

	while (true)
	{
		cout << "�����ϰ� ������ yes�� �Է��ϼ���>>"; 
		cin.getline(c, 100, '\n');

		if (strcmp(c, "yes") == 0) //yes ����� �ݺ��� ����
			break;
	}
	cout << "�����մϴ�..." << endl;
}
