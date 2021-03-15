#include <iostream>
using namespace std;

int main() {
	int a, c;
	char b;

	while (true)
	{
		cout << "?";
		cin >> a >> b >> c;

		switch (b) {
		case '+':cout << a << " " << b << " " << c << " = " << a + c << endl; break;
		case '-':cout << a << " " << b << " " << c << " = " << a - c << endl; break;
		case '*':cout << a << " " << b << " " << c << " = " << a * c << endl; break;
		case '/':cout << a << " " << b << " " << c << " = " << a / c << endl; break;
		case '%':cout << a << " " << b << " " << c << " = " << a % c << endl; break;
		}
	}
}