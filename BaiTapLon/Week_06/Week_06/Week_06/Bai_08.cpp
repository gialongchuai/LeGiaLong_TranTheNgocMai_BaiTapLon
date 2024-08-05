/*
	Bài 8. Cho số nguyên dương n . 
	a. Hãy tìm chữ số đầu tiên của n.
	b. Hãy tìm chữ số đảo ngược của số nguyên dương n.
	c. Tìm chữ số lớn nhất của số nguyên dương n.
	d. Tìm chữ số nhỏ nhất của số nguyên dương n.
	e. Hãy kiểm tra số nguyên dương n có toàn chữ số lẻ hay không?
	f. Hãy kiểm tra số nguyên dương n có toàn chữ số chẵn hay không?
*/

#include <stdio.h>
#include <stdlib.h>

// Hàm đệ quy tìm chữ số đầu tiên của n
int timChuSoDauTien(int n) {
	if (n < 10) {
		return n;
	}
	return timChuSoDauTien(n / 10);
}



int main() {
	int n, choice;

	printf("Nhap so nguyen duong n: ");
	scanf("%d", &n);

	do {
		printf("\nMenu:\n");
		printf("1. Tim chu so dau tien cua n\n");
		printf("2. Tim chu so dao nguoc cua n\n");
		printf("3. Tim chu so lon nhat cua n\n");
		printf("4. Tim chu so nho nhat cua n\n");
		printf("5. Kiem tra so n co toan chu so le hay khong\n");
		printf("6. Kiem tra so n co toan chu so chan hay khong\n");
		printf("0. Thoat\n");
		printf("Nhap lua chon: ");
		scanf("%d", &choice);

		switch (choice) {
		case 1:
			printf("Chu so dau tien cua n la: %d\n", timChuSoDauTien(n));
			break;
		
		case 0:
			printf("Thoat chuong trinh.\n");
			break;
		default:
			printf("Lua chon khong hop le. Vui long chon lai.\n");
			break;
		}
	} while (choice != 0);

	return 0;
}
