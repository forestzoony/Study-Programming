#include <iostream>
using namespace std;

int main() {
	for (int i = 1; i <= 100; i++)
	{
		cout << i;
		if (i % 10 == 0) // 10의 배수일 때마다 한 줄을 넘어가게 코드를 만듬.
			cout << endl; 
		else
			cout << "\t";
	}
}