/*
	Bài 09: Nhập vào chuỗi str, chuỗi cần chèn strInsert và vị trí cần chèn vt. Hãy chèn chuỗi 
	strInser vào chuỗi str tại vị trí vt.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Hàm chèn chuỗi strInsert vào chuỗi str tại vị trí vt
void chenChuoi(char *str, char *strInsert, int vt) {
	int lenStr = strlen(str);
	int lenStrInsert = strlen(strInsert);

	// Tạo một chuỗi mới để lưu kết quả sau khi chèn
	char strKetQua[100];

	// Sao chép phần đầu của chuỗi str vào chuỗi kết quả
	strncpy(strKetQua, str, vt);
	strKetQua[vt] = '\0';  // Kết thúc phần đầu bằng ký tự null

	// Nối chuỗi strInsert vào chuỗi kết quả
	strcat(strKetQua, strInsert);

	// Nối phần còn lại của chuỗi str vào chuỗi kết quả
	strcat(strKetQua, str + vt);

	// Sao chép chuỗi kết quả trở lại chuỗi str
	strcpy(str, strKetQua);
}

int main() {
	char str[100], strInsert[100];
	int vt;

	// Nhập chuỗi str
	printf("Nhap chuoi str: ");
	gets(str);

	// Nhập chuỗi cần chèn strInsert
	printf("Nhap chuoi can chen strInsert: ");
	gets(strInsert);

	// Nhập vị trí cần chèn vt
	printf("Nhap vi tri can chen vt: ");
	scanf("%d", &vt);

	// Kiểm tra nếu vị trí chèn không hợp lệ
	if (vt < 0 || vt > strlen(str)) {
		printf("Vi tri can chen khong hop le.\n");
	}
	else {
		// Gọi hàm chèn chuỗi
		chenChuoi(str, strInsert, vt);
		// Hiển thị kết quả sau khi chèn
		printf("Chuoi sau khi chen: %s\n", str);
	}

	system("pause");
	return 0;
}
