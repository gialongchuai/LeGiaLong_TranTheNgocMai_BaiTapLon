/*
	Bài 9. Viêìt hàm ğêò quy tiình TôÒ hõòp châòp k cuÒa n phâÌn tıÒ ğıõòc tiình bãÌng công thıìc
*/

#include <stdio.h>

#include <cstdlib>
// Ham de quy tinh to hop chap k cua n phan tu
int binomialCoefficient(int n, int k) {
	// Dieu kien dung: neu k = 0 hoac k = n thi tra ve 1
	if (k == 0 || k == n) {
		return 1;
	}
	// Goi de quy de tinh to hop chap k cua n phan tu
	return binomialCoefficient(n - 1, k - 1) + binomialCoefficient(n - 1, k);
}

int main() {
	int n, k;

	// Nhap gia tri n va k tu ban phim
	printf("Nhap gia tri n: ");
	scanf("%d", &n);
	printf("Nhap gia tri k: ");
	scanf("%d", &k);

	// Kiem tra dieu kien hop le
	if (k > n || k < 0) {
		printf("Gia tri k khong hop le!\n");
		return 1;
	}

	// Tinh to hop chap k cua n phan tu
	int result = binomialCoefficient(n, k);

	// In ket qua ra man hinh
	printf("To hop chap %d cua %d phan tu la: %d\n", k, n, result);

	system("pause");
	return 0;
}
