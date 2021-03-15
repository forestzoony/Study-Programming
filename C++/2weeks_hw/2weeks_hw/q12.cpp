#include <iostream>
using namespace std;

int sum(); //합을 계산하는 sum함수 선언. 

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

	cout << "끝수를 입력하세요>>";
	cin >> a;
	cout << "1에서" << a << "까지의 합은 " << sum(1, a) << "입니다.\n";
}
