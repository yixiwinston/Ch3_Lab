#include<stdio.h>
#include<stdlib.h>

int Odd(int x);
int Even(int x);
int TSum(int x);

int main() {

	int n,sum=0;
	char select;

	printf("1+2+3+4+......+n , 請輸入n值: ");
	scanf_s(" %d",&n);
	
	printf("奇數Odd,偶數Even,總和Total TotalAdd,請輸入功能需求(O,E,T):");
	scanf_s(" %c", &select);		// %c前要空一格，WHY?

	switch (select) {

	case 'O':
	case 'o':
		printf("Function:Odd\n");
		sum = Odd(n);
		break;

	case 'E':
	case 'e':
		printf("Function:Even\n");
		sum = Even(n);
		break;

	case 'T':
	case 't':
		printf("Function:TotalSum\n"); 
		sum = TSum(n);
		break;

	default:
		printf("Function error!!!\n");
		break;


	}

	printf("總合為%d\n\n", sum);
	system("pause");
	return 0;

}

int Odd(int x) {

	int TotalAdd = 0;

	for (int i = 1; i <= x; i = i + 2) {
		TotalAdd += i;
	}
	return TotalAdd;
}
int Even(int x) {

	int TotalAdd = 0;

	for (int i = 0; i <= x; i = i + 2) {
		TotalAdd += i;
		printf("%d\n", TotalAdd);
	}
	return TotalAdd;
}
int TSum(int x) {

	int TotalAdd = 0;

	for (int i = 1; i <= x;i++) {
		TotalAdd += i;
	}
	return TotalAdd;
}