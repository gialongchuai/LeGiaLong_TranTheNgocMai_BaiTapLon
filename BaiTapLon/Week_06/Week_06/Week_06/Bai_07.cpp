/*
	Bài 7. Lãi suất tiền VNĐ gởi x% mỗi năm, ban đầu người ta gởi n triệu đồng. Viết hàm đệ quy 
	tính sau m năm sẽ có bao nhiêu tiền VNĐ (gồm cả vốn lẫn lãi)?
*/

#include <stdio.h>
#include <stdlib.h>
// Hàm đệ quy tính số tiền sau m năm
double tinhTienLai(double soTienGoc, double laiSuat, int soNam) {
	// Điều kiện dừng của đệ quy
	if (soNam == 0) {
		return soTienGoc;
	}
	// Tính số tiền sau 1 năm và gọi đệ quy cho năm tiếp theo
	return tinhTienLai(soTienGoc * (1 + laiSuat / 100), laiSuat, soNam - 1);
}

int main() {
	double soTienGoc, laiSuat;
	int soNam;

	// Nhập dữ liệu từ bàn phím
	printf("Nhap so tien goc (trieu dong): ");
	scanf("%lf", &soTienGoc);
	printf("Nhap lai suat moi nam (%%): ");
	scanf("%lf", &laiSuat);
	printf("Nhap so nam: ");
	scanf("%d", &soNam);

	// Tính số tiền sau m năm
	double soTienSauMNam = tinhTienLai(soTienGoc, laiSuat, soNam);

	// Hiển thị kết quả
	printf("So tien sau %d nam: %.2lf trieu dong\n", soNam, soTienSauMNam);

	system("pause");
	return 0;
}
