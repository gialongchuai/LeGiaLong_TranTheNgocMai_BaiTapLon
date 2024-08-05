/*
	Bài tập 11 -> 19
*/

#include <stdio.h>

// Khai bao ham cho tung bai toan
void bai11();
void bai12();
void bai13();
void bai14();
void bai15();
void bai16();
void bai17();
void bai18();
void bai19();

// Ham de quy tinh Fibonacci
int fibonacciDeQuy(int n) {
	if (n <= 1) return n;
	return fibonacciDeQuy(n - 1) + fibonacciDeQuy(n - 2);
}

// Ham khử de quy tinh Fibonacci
int fibonacciKhuDeQuy(int n) {
	if (n <= 1) return n;
	int fib0 = 0, fib1 = 1, fib = 1;
	while (fib < n) {
		fib0 = fib1;
		fib1 = fib;
		fib = fib0 + fib1;
	}
	return fib1;
}

int main() {
	int choice;

	do {
		printf("\n--- Menu ---\n");
		printf("1. Bai 11\n");
		printf("2. Bai 12\n");
		printf("3. Bai 13\n");
		printf("4. Bai 14\n");
		printf("5. Bai 15\n");
		printf("6. Bai 16\n");
		printf("7. Bai 17\n");
		printf("8. Bai 18\n");
		printf("9. Bai 19\n");
		printf("0. Thoat\n");
		printf("Chon bai toan: ");
		scanf("%d", &choice);

		switch (choice) {
		case 1:
			bai11();
			break;
		case 2:
			bai12();
			break;
		case 3:
			bai13();
			break;
		case 4:
			bai14();
			break;
		case 5:
			bai15();
			break;
		case 6:
			bai16();
			break;
		case 7:
			bai17();
			break;
		case 8:
			bai18();
			break;
		case 9:
			bai19();
			break;
		case 0:
			printf("Thoat chuong trinh.\n");
			break;
		default:
			printf("Lua chon khong hop le. Moi chon lai.\n");
		}
	} while (choice != 0);

	return 0;
}

void bai11() {
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);

	// De quy
	int i = 0, fib;
	do {
		fib = fibonacciDeQuy(i);
		i++;
	} while (fib < n);
	printf("So Fibonacci lon nhat nho hon %d (de quy) la %d\n", n, fibonacciDeQuy(i - 2));

	// Khử de quy
	printf("So Fibonacci lon nhat nho hon %d (khu de quy) la %d\n", n, fibonacciKhuDeQuy(n));
}

void bai12() {
	int x0 = 1, x1 = 0, n;
	printf("Nhap n: ");
	scanf("%d", &n);
	int x = x0, y = x1, temp;
	for (int i = 1; i <= n; i++) {
		temp = x;
		x = x + y;
		y = 3 * temp + 2 * y;
	}
	printf("Gia tri thu %d cua day X la %d\n", n, x);
	printf("Gia tri thu %d cua day Y la %d\n", n, y);
}
void bai13() {
	int a, r, n;
	printf("Nhap a, r va n: ");
	scanf("%d %d %d", &a, &r, &n);
	int q = a;
	for (int i = 2; i <= n; i++) {
		q *= r;
	}
	printf("Gia tri phan tu thu %d cua cap so nhan la %d\n", n, q);
}

void bai14() {
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	int u[100];
	u[0] = 1; // U(1)
	for (int i = 1; i < n; i++) {
		if (i < 5) {
			u[i] = i + 1;
		}
		else {
			u[i] = u[i - 1] + u[i - 2] + u[i - 3] + u[i - 4] + u[i - 5];
		}
	}
	printf("Gia tri cua U(%d) la %d\n", n, u[n - 1]);
}
void bai15() {
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	int a[100];
	a[0] = 1; // A(1)
	for (int i = 1; i < n; i++) {
		a[i] = (i + 1) * (a[i - 1] + i);
	}
	printf("Gia tri cua A(%d) la %d\n", n, a[n - 1]);
}

void bai16() {
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	int y[100];
	y[0] = 1; // Y(1)
	y[1] = 2; // Y(2)
	y[2] = 3; // Y(3)
	for (int i = 3; i < n; i++) {
		y[i] = y[i - 1] + 2 * y[i - 2] + 3 * y[i - 3];
	}
	printf("Gia tri cua Y(%d) la %d\n", n, y[n - 1]);
}

void bai17() {
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	int x[100];
	x[0] = 1; // X(1)
	x[1] = 2; // X(2)
	for (int i = 2; i < n; i++) {
		x[i] = x[i - 1] + (i - 1) * x[i - 2];
	}
	printf("Gia tri cua X(%d) la %d\n", n, x[n - 1]);
}

void bai18() {
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	int x[100];
	x[0] = 1; // X(0)
	for (int i = 1; i <= n; i++) {
		x[i] = i * (i - 1) * x[0];
		for (int j = 1; j < i; j++) {
			x[i] += j * x[j];
		}
	}
	printf("Gia tri cua X(%d) la %d\n", n, x[n]);
}

void bai19() {
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	int a[100];
	a[0] = 1; // A(1)
	for (int i = 1; i < n; i++) {
		if (i % 2 == 1) {
			a[i] = n * a[i - 1] + 1;
		}
		else {
			a[i] = a[i - 1] + 2;
		}
	}
	printf("Gia tri cua A(%d) la %d\n", n, a[n - 1]);
}