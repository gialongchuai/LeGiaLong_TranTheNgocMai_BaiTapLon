/*
	Bài 10. Nhập một chuỗi bất kì, yêu cầu nhập 1 kí tự muốn xóa. Thực hiện xóa tất cả những kí
	tự đó trong chuỗi. 
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Hàm xóa tất cả các ký tự c trong chuỗi str
void xoaKyTu(char *str, char c) {
	int len = strlen(str);
	int j = 0;

	for (int i = 0; i < len; i++) {
		if (str[i] != c) {
			str[j++] = str[i];
		}
	}
	str[j] = '\0'; // Kết thúc chuỗi sau khi xóa các ký tự
}

int main() {
	char str[100], kyTuXoa;

	// Nhập chuỗi
	printf("Nhap chuoi bat ky: ");
	gets(str);

	// Nhập ký tự muốn xóa
	printf("Nhap ky tu muon xoa: ");
	scanf("%c", &kyTuXoa);

	// Gọi hàm xóa ký tự
	xoaKyTu(str, kyTuXoa);

	// Hiển thị chuỗi sau khi xóa
	printf("Chuoi sau khi xoa ky tu '%c': %s\n", kyTuXoa, str);

	system("pause");
	return 0;
}
