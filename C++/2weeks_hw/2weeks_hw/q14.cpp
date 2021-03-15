#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int n;
	int total = 0;
	char c[100];

	cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다.\n";

	while (true) {
		cout << "주문>> ";
		cin >> c >> n;

		if (strcmp(c, "에스프레소") == 0) {
			cout << 2000 * n << "원입니다. 맛있게 드세요\n";
			total += 2000 * n;
		}
		else if (strcmp(c, "아메리카노") == 0) {
			cout << 2300 * n << "원입니다. 맛있게 드세요\n";
			total += 2300 * n;
		}
		else if (strcmp(c, "카푸치노") == 0) {
			cout << 2500 * n << "원입니다. 맛있게 드세요\n";
			total += 2500 * n;
		}
		if (total > 20000) {
			cout << "오늘 " << total << "원을 판매하여 카페를 닫습니다. 내일 봐요~~~";
			break;
		}
	}
	return 0;
}

