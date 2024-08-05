/*
	Bài 7. Kiểm tra xem chuỗi nhập vào có đối xứng hay không?
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

// Hàm kiểm tra chuỗi đối xứng
bool kiemTraDoiXung(char str[]) {
	int length = strlen(str);
	for (int i = 0; i < length / 2; i++) {
		if (str[i] != str[length - 1 - i]) {
			return false; // Chuỗi không đối xứng
		}
	}
	return true; // Chuỗi đối xứng
}

int main() {
	char str[100];

	// Nhập chuỗi từ người dùng
	printf("Nhap vao chuoi can kiem tra: ");
	gets(str);

	// Kiểm tra chuỗi đối xứng và in kết quả
	if (kiemTraDoiXung(str)) {
		printf("Chuoi '%s' la chuoi doi xung.\n", str);
	}
	else {
		printf("Chuoi '%s' khong phai la chuoi doi xung.\n", str);
	}

	system("pause");
	return 0;
}
