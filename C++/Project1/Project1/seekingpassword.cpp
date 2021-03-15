
#include <iostream>
using namespace std;
 
int main()
{
	int from, to;
	cout << "몇단까지 출력?";
	cin >> from >> to;
	for (int i = 1; i < 10; i++)
	{
		for (int j = from; j = to; j++)
		{
			cout << j << 'x' << i << '=' << j * i <<
		}
		cout << endl;
	}
}