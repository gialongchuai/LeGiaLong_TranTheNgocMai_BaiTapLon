/*
	Bài 12. Cho 2 chuỗi s1 và s2 là 2 từ (chỉ chứa chữ cái hoặc ký số). Tính xem cần thực hiện 
	bao nhiêu phép biến đổi để chuyển chuỗi s1 thành s2. Biết rằng có 3 phép biến đổi
	- Thêm ký tự
	- Xóa ký tự
	- Đổi ký tự
	Ví dụ: xét 2 từ s1= “Kitten” và s2=“Sitting”
	Cần thực hiện 3 phép đổi để chuyển s1 thành s2. Đó là:
	- Đổi ‘K” thành ‘S’
	- Đổi ‘e’ thành ‘i’
	- Thêm ‘g’ vào cuối.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Hàm tìm giá trị nhỏ nhất trong ba số
int min(int a, int b, int c) {
	int min = a;
	if (b < min) {
		min = b;
	}
	if (c < min) {
		min = c;
	}
	return min;
}

// Hàm tính Levenshtein distance giữa hai chuỗi
int levenshteinDistance(char *s1, char *s2) {
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	int **dp = (int **)malloc((len1 + 1) * sizeof(int *));
	for (int i = 0; i <= len1; i++) {
		dp[i] = (int *)malloc((len2 + 1) * sizeof(int));
	}

	for (int i = 0; i <= len1; i++) {
		for (int j = 0; j <= len2; j++) {
			if (i == 0) {
				dp[i][j] = j; // Xóa hết các ký tự của s1 để thành s2
			}
			else if (j == 0) {
				dp[i][j] = i; // Thêm các ký tự của s2 vào s1
			}
			else if (s1[i - 1] == s2[j - 1]) {
				dp[i][j] = dp[i - 1][j - 1]; // Ký tự giống nhau, không cần thay đổi
			}
			else {
				dp[i][j] = 1 + min(dp[i - 1][j], // Xóa
					dp[i][j - 1], // Thêm
					dp[i - 1][j - 1]); // Thay thế
			}
		}
	}

	int distance = dp[len1][len2];

	for (int i = 0; i <= len1; i++) {
		free(dp[i]);
	}
	free(dp);

	return distance;
}

int main() {
	char s1[100], s2[100];

	printf("Nhap chuoi s1: ");
	gets(s1);
	printf("Nhap chuoi s2: ");
	gets(s2);

	int result = levenshteinDistance(s1, s2);
	printf("So phep bien doi can thiet de chuyen '%s' thanh '%s' la: %d\n", s1, s2, result);

	system("pause");
	return 0;
}
