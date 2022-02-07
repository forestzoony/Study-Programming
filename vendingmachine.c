//이름: 임지윤
//학번: 20204024
//프로그램명: C언어를 활용하여 자판기 프로그램을 구현하고자 함. 

#include <stdio.h>
#pragma warning (disable:4996) // C언어 코드 구현 시, 비주얼 스튜디오 상에서 fscanf 오류를 해결하기 위하여 경고를 무시하는 문장. 

// 음료 가격 설정하기 
#define COKE 300
#define JUICE 200
#define WATER 100
#define SODA 400
#define MILK 500

// 필요한 변수 설정하기 
int money; // 투입할 금액 
int num; // 음료의 개수 
int choice; // 선택한 품목 
int num1; // 자판기 이용 메뉴 선택 변수 


// 음료 품목, 모든 음료의 개수는 100개로 한정함 
int coke = 100; 
int juice = 100;
int water = 100;
int soda = 100;
int milk = 100;

// 자판기 프로그램 메인 화면
void menuchoice(char* choice, char* amount)
{
	    printf("---------------------------------\n");
		printf("         윤자네 자판기           \n\n");
		printf("1.음료 구입 2.관리자 메뉴 3. 종료\n");
		printf("번호 선택:  ");
		scanf("%d", &num1);

		if (num1 == 1)
		{
			printf("--------------------------------\n");
			printf("           판매 메뉴            \n");
			printf("1.콜라 2.쥬스 3.물 4.사이다 5.우유\n");
			printf("--------------------------------\n");
			printf("메뉴 입력 : ");
			scanf("%s", choice);
			printf("수량 입력 : ");
			scanf("%s", amount);
		}
		else if (num1 == 2)
		{
			printf("--------------------------------\n");
			printf("          관리자 메뉴           \n");
			printf("1.재고 보충 2.수익 확인 3.")
		}
}



int main()
{
	char choice;
	char amount[100];

	menuchoice(&choice, &amount);
}






