#include <iostream>
using namespace std;

int sum(); //���� ����ϴ� sum�Լ� ����. 

int sum(int n, int m)
{
	int i, ans = 0;

	for (i = n; i <= m; i++)
	{
		ans += i;
	}
	return ans;
}
int main() {
	int a = 0;

	cout << "������ �Է��ϼ���>>";
	cin >> a;
	cout << "1����" << a << "������ ���� " << sum(1, a) << "�Դϴ�.\n";
}
