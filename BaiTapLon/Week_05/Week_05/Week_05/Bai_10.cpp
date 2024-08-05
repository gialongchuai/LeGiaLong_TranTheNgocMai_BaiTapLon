/*
	Bài 11. Viết hàm tìm số Fibonacci lớn nhất nhưng nhỏ hơn số nguyên dương n cho trước theo 
	2 cách đệ quy và khử đệ quy
*/

#include <stdio.h>

#include <stdlib.h>

// Hàm tính số Fibonacci
int fibonacci(int n) {
	if (n <= 2) {
		return 1;
	}
	return fibonacci(n - 1) + fibonacci(n - 2);
}

// Hàm xuất dãy số Fibonacci thuộc đoạn [m, n]
void xuatDayFibonacci(int m, int n) {
	int i = 1;
	int fib;

	printf("Day so Fibonacci thuoc doan [%d, %d]: ", m, n);
	while (1) {
		fib = fibonacci(i);
		if (fib > n) {
			break;
		}
		if (fib >= m) {
			printf("%d ", fib);
		}
		i++;
	}
	printf("\n");
}

int main() {
	int m, n;

	// Nhap gia tri m va n
	printf("Nhap gia tri m: ");
	scanf("%d", &m);
	printf("Nhap gia tri n: ");
	scanf("%d", &n);

	// Goi ham xuat day Fibonacci
	xuatDayFibonacci(m, n);

	system("pause");

	return 0;
}
