/*
	Bài 11. Tính số cách chia m phần thưởng cho n học sinh đã xếp theo thứ tự hạng tăng dần, 
	phân chia sao cho học sinh đứng trước có số phần thưởng lớn hơn học sinh đứng sau, biết 
	bằng:
	a. m>=2n
	b. m = n
	c. m>2n và mỗi học sinh đều có quà.
*/

#include <stdio.h>
#include <stdlib.h>
// Hàm đệ quy tính số cách phân chia phần thưởng sao cho mỗi học sinh đều có ít nhất một phần thưởng
unsigned long long countWays(int m, int n) {
	// Nếu số phần thưởng bằng số học sinh
	if (m == n) {
		return 1;
	}
	// Nếu số phần thưởng nhỏ hơn số học sinh
	if (m < n) {
		return 0;
	}
	// Nếu số phần thưởng lớn hơn số học sinh và cần phân chia sao cho mỗi học sinh đều có ít nhất một phần thưởng
	// Cách đệ quy phân chia phần thưởng sao cho mỗi học sinh đều có ít nhất một phần thưởng
	// Tính số cách phân chia bằng cách phân phối m - 1 phần thưởng cho n học sinh, mỗi học sinh có ít nhất một phần thưởng
	return countWays(m - 1, n - 1) + countWays(m - 1, n);
}

int main() {
	int m, n;
	printf("Nhap so phan thuong (m): ");
	scanf("%d", &m);
	printf("Nhap so hoc sinh (n): ");
	scanf("%d", &n);

	unsigned long long ways = countWays(m, n);
	printf("So cach chia phan thuong: %llu\n", ways);

	system("pause");
	return 0;
}
