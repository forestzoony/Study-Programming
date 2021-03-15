#include <iostream>
using namespace std;

int main() {
	int a, b; // 두 수를 받을 변수 선언하기 

	cout << "두 수를 입력하라 >>";
	cin >> a >> b; 

	if (a > b)
		cout << "큰 수 = " << a << endl; // a가 b보다 클 때
	else
		cout << "큰 수 = " << b << endl; // b가 a보다 클 때

}