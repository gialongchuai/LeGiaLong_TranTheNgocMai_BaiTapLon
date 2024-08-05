/*
	Bài 9. Xét lại bài 3, tính các giá trị tổng, hiệu, tích, thương của 2 số a, b thông qua các con trỏ
	pa, pb. Xuất ra kết quả và địa chỉ các ô nhớ chứa tổng, hiệu, tích thương đó.
*/

#include <stdio.h>
#include <stdlib.h>
// Hàm tính tổng, hiệu, tích, thương của hai số a và b
void tinhToan(int *pa, int *pb, int *tong, int *hieu, int *tich, float *thuong) {
	*tong = *pa + *pb;
	*hieu = *pa - *pb;
	*tich = *pa * *pb;
	*thuong = (float)*pa / *pb;
}

int main() {
	int a, b;
	int tong, hieu, tich;
	float thuong;

	// Nhập hai số a và b từ bàn phím
	printf("Nhap so thu nhat (a): ");
	scanf("%d", &a);
	printf("Nhap so thu hai (b): ");
	scanf("%d", &b);

	// Con trỏ đến a và b
	int *pa = &a;
	int *pb = &b;

	// Gọi hàm để tính toán
	tinhToan(pa, pb, &tong, &hieu, &tich, &thuong);

	// Xuất kết quả và địa chỉ các ô nhớ
	printf("\nKet qua tinh toan:\n");
	printf("Tong: %d, dia chi: %p\n", tong, (void*)&tong);
	printf("Hieu: %d, dia chi: %p\n", hieu, (void*)&hieu);
	printf("Tich: %d, dia chi: %p\n", tich, (void*)&tich);
	printf("Thuong: %.2f, dia chi: %p\n", thuong, (void*)&thuong);

	system("pause");
	return 0;
}
