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
} // for반복문을 사용하여 1단~9단 구구단 출력하기