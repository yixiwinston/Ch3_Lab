#include<stdio.h>
#include<stdlib.h>

int Odd(int x);
int Even(int x);
int TSum(int x);

int main() {

	int n,sum=0;
	char select;

	printf("1+2+3+4+......+n , �п�Jn��: ");
	scanf_s(" %d",&n);
	
	printf("�_��Odd,����Even,�`�MTotal TotalAdd,�п�J�\��ݨD(O,E,T):");
	scanf_s(" %c", &select);		// %c�e�n�Ť@��AWHY?

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

	printf("�`�X��%d\n\n", sum);
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