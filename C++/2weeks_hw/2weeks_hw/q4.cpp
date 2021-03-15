#include <iostream>
using namespace std;

int main() {
	double n[5] = { 0 }, max= 0;

	cout << "5 개의 실수를 입력하라>>";

	for (int i = 0; i < 5; i++) // 5개의 실수를 입력받도록 for반복문 사용
	{
		cin >> n[i];
		n[i] > max ? max = n[i] : max; // 최댓값 출력하도록 비교
	}

	cout << "제일 큰 수 = " << max;
}