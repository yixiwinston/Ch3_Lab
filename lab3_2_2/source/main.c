#include<stdio.h>
#include<stdlib.h>

int recursive_factorial(int x);	//recursive factorial遞回階乘:簡單來說就是在一個函式當中再去呼叫它自己

int main() {

	int m, n;
	int ans;
	int a, b, c;

	printf("輸入排列組合C(m,n)\n\n");

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