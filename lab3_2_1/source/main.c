#include<stdio.h>
#include<stdlib.h>

int factorial(int x);

int main() {

	int m, n;
	int ans;
	int a, b, c;

	printf("輸入排列組合C(m,n)\n\n");

	printf("m = ");
	scanf_s("%d", &m);
	printf("n = ");
	scanf_s("%d", &n);

	a = factorial(m);		// m!					 m!					 10!
	b = factorial(n);		// n!			C = ------------	C = ------------
	c = factorial(m - n);	// (m-n)!			  n!(m-n)!				8!*2!

	ans = a / (b * c);

	printf("C(%d,%d) = %d\n\n", m, n, ans);

	system("pause");
	return 0;

}

int factorial(int x) {

	int p = 1;			//product積

	for (int i = 1; i <= x; i++) {

		p = p * i;

	}

	return p;
	
}