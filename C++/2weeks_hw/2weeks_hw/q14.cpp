#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int n;
	int total = 0;
	char c[100];

	cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�.\n";

	while (true) {
		cout << "�ֹ�>> ";
		cin >> c >> n;

		if (strcmp(c, "����������") == 0) {
			cout << 2000 * n << "���Դϴ�. ���ְ� �弼��\n";
			total += 2000 * n;
		}
		else if (strcmp(c, "�Ƹ޸�ī��") == 0) {
			cout << 2300 * n << "���Դϴ�. ���ְ� �弼��\n";
			total += 2300 * n;
		}
		else if (strcmp(c, "īǪġ��") == 0) {
			cout << 2500 * n << "���Դϴ�. ���ְ� �弼��\n";
			total += 2500 * n;
		}
		if (total > 20000) {
			cout << "���� " << total << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���� ����~~~";
			break;
		}
	}
	return 0;
}

