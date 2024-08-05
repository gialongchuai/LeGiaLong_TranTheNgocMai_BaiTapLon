/*
	Bài 11. Nhập vào 1 mảng các chuỗi. Tìm xuất ra màn hình những chuỗi chứa toàn ký tự số.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX_STRINGS 100
#define MAX_LENGTH 100

// Hàm kiểm tra xem một chuỗi có chứa toàn ký tự số hay không
int chuoiToanSo(char *chuoi) {
	for (int i = 0; i < strlen(chuoi); i++) {
		if (!isdigit(chuoi[i])) {
			return 0; // Không phải toàn ký tự số
		}
	}
	return 1; // Toàn ký tự số
}

int main() {
	char mangChuoi[MAX_STRINGS][MAX_LENGTH];
	int soLuongChuoi;

	// Nhập số lượng chuỗi
	printf("Nhap so luong chuoi: ");
	scanf("%d", &soLuongChuoi);
	getchar(); // Đọc ký tự newline còn lại

	// Nhập từng chuỗi
	for (int i = 0; i < soLuongChuoi; i++) {
		printf("Nhap chuoi thu %d: ", i + 1);
		fgets(mangChuoi[i], MAX_LENGTH, stdin);
		// Loại bỏ ký tự newline ở cuối chuỗi nếu có
		mangChuoi[i][strcspn(mangChuoi[i], "\n")] = 0;
	}

	// Tìm và xuất ra màn hình những chuỗi chứa toàn ký tự số
	printf("Nhung chuoi chua toan ky tu so la:\n");
	for (int i = 0; i < soLuongChuoi; i++) {
		if (chuoiToanSo(mangChuoi[i])) {
			printf("%s\n", mangChuoi[i]);
		}
	}

	system("pause");
	return 0;
}
