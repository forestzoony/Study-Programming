#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char c[10001];
	int n = 0;
	int count[26] = { 0, }; // 알파벳 26

	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다." << endl;
	cout << "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다." << endl;

	cin.getline(c, 10000, ';');

	for (int a = 0; a < strlen(c); a++)
	{
		count[int(c[a]) - 97] ++;
		n++;
	}
	cout << "총 알파벳 수 " << n << endl;

	for (int a = 0; a < 26; a++)
	{
		cout << char(a+97) <<"("<< count[a] << ")\t: ";
			for (int b = 0; b < count[a]; b++)
			{
				cout << "*";
		}
		cout << endl;
	}
}