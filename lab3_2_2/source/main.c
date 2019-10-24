#include<stdio.h>
#include<stdlib.h>

int recursive_factorial(int x);	//recursive factorial���^����:²��ӻ��N�O�b�@�Ө禡���A�h�I�s���ۤv

int main() {

	int m, n;
	int ans;
	int a, b, c;

	printf("��J�ƦC�զXC(m,n)\n\n");

	printf("m = ");
	scanf_s("%d", &m);
	printf("n = ");
	scanf_s("%d", &n);

	a = recursive_factorial(m);		// m!					 m!					 10!
	b = recursive_factorial(n);		// n!			C = ------------	C = ------------
	c = recursive_factorial(m - n);	// (m-n)!			  n!(m-n)!				8!*2!

	ans = a / (b * c);

	printf("C(%d,%d) = %d\n\n", m, n, ans);


	system("pause");
	return 0;

}

int recursive_factorial(int x) {

	int result=0;

	if (x > 1) {
		result = x * recursive_factorial(x - 1);
	}
	else {
		return 1;
	}

}