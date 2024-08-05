/*
	Bài 8. Nhập vào chuỗi s1 và s2, cho biết vị trí xuất hiện của chuỗi s2 trong s1 (nếu có). Nếu 
	s2 không có trong s1, thực hiện nối s2 vào cuối s1.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// Hàm tìm vị trí xuất hiện đầu tiên của chuỗi s2 trong s1
int timViTriChuoi(char s1[], char s2[]) {
	char *pos = strstr(s1, s2); // Tìm con trỏ đầu tiên của s2 trong s1
	if (pos != NULL) {
		return pos - s1; // Trả về vị trí đầu tiên của s2 trong s1
	}
	return -1; // Không tìm thấy s2 trong s1
}

int main() {
	char s1[200], s2[100];

	// Nhập chuỗi s1
	printf("Nhap vao chuoi s1: ");
	gets(s1);

	// Nhập chuỗi s2
	printf("Nhap vao chuoi s2: ");
	gets(s2);

	// Tìm vị trí xuất hiện của s2 trong s1
	int viTri = timViTriChuoi(s1, s2);

	if (viTri != -1) {
		printf("Chuoi s2 xuat hien tai vi tri %d trong chuoi s1.\n", viTri);
	}
	else {
		printf("Chuoi s2 khong xuat hien trong chuoi s1.\n");
		// Nối s2 vào cuối s1 nếu s2 không có trong s1
		strcat(s1, s2);
		printf("Chuoi s1 sau khi noi s2 vao cuoi: %s\n", s1);
	}

	system("pause");
	return 0;
}
