#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char c[10001];
	int n = 0;
	int count[26] = { 0, }; // ���ĺ� 26

	cout << "���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�." << endl;
	cout << "�ؽ�Ʈ�� ���� ; �Դϴ�. 10000������ �����մϴ�." << endl;

	cin.getline(c, 10000, ';');

	for (int a = 0; a < strlen(c); a++)
	{
		count[int(c[a]) - 97] ++;
		n++;
	}
	cout << "�� ���ĺ� �� " << n << endl;

	for (int a = 0; a < 26; a++)
	{
		cout << char(a+97) <<"("<< count[a] << ")\t: ";
			for (int b = 0; b < count[a]; b++)
			{
				cout << "*";
		}
		cout << endl;
	}
}