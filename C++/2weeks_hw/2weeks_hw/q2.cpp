#include <iostream>
using namespace std;

int main() {
	for (int n = 1; n <= 9; n++)
	{
		for (int m = 1; m <= 9; m++)
		{
			cout << m << "x" << n << "=" << n * m << "\t";
		}
		cout << endl;
	}
} // for�ݺ����� ����Ͽ� 1��~9�� ������ ����ϱ�