/*
	Bài 1: Viết hàm tính các biểu thức S(n) theo 2 cách đệ quy và khử đệ quy (nếu có thể), với n 
	là số nguyên dương nhập từ bàn phím
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
double sum1(int n);
double sum2(int n);
double sum3(int n);
double sum4(int n);
double sum5(int n);
double sum6(int n);

int main() {
	int n, choice;
	printf("Nhap vao so nguyen duong n: ");
	scanf("%d", &n);

	printf("Chon cong thuc tinh S(n):\n");
	printf("1. S(n) = 1 + 2 + ... + n\n");
	printf("2. S(n) = sqrt(5 + sqrt(5 + ... sqrt(5 + sqrt(5))))\n");
	printf("3. S(n) = 1/2 + 2/3 + ... + n/(n+1)\n");
	printf("4. S(n) = 1 + 1/3 + 1/5 + ... + 1/(2n+1)\n");
	printf("5. S(n) = 1.2 + 2.3 + 3.4 + ... + n.(n+1)\n");
	printf("6. S(n) = 1.2!/2+sqrt(3) + 2.3!/3+sqrt(4) + ... + n.(n+1)!/(n+1)+sqrt(n+2)\n");
	printf("Lua chon cua ban: ");
	scanf("%d", &choice);

	switch (choice) {
	case 1:
		printf("S(%d) = %.2f\n", n, sum1(n));
		break;
	case 2:
		printf("S(%d) = %.2f\n", n, sum2(n));
		break;
	case 3:
		printf("S(%d) = %.2f\n", n, sum3(n));
		break;
	case 4:
		printf("S(%d) = %.2f\n", n, sum4(n));
		break;
	case 5:
		printf("S(%d) = %.2f\n", n, sum5(n));
		break;
	case 6:
		printf("S(%d) = %.2f\n", n, sum6(n));
		break;
	default:
		printf("Lua chon khong hop le.\n");
		break;
	}

	system("pause");
	return 0;
}

double sum1(int n) {
	double sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	return sum;
}

double sum2(int n) {
	double sum = 5;
	for (int i = 1; i < n; i++) {
		sum = sqrt(5 + sum);
	}
	return sum;
}

double sum3(int n) {
	double sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += (double)i / (i + 1);
	}
	return sum;
}

double sum4(int n) {
	double sum = 1;
	for (int i = 1; i <= n; i++) {
		sum += 1.0 / (2 * i + 1);
	}
	return sum;
}

double sum5(int n) {
	double sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i * (i + 1);
	}
	return sum;
}

double factorial(int n) {
	if (n == 0 || n == 1) {
		return 1;
	}
	double result = 1;
	for (int i = 2; i <= n; i++) {
		result *= i;
	}
	return result;
}

double sum6(int n) {
	double sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += (i * factorial(i + 1)) / (i + 1 + sqrt((double)i + 2));
	}
	return sum;
}
