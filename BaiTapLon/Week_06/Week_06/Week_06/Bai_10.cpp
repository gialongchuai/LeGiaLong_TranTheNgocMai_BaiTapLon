/*
	Bài 10. Viết hàm tìm kiếm phần tử trên mảng đã sắp xếp theo kỹ thuật tìm kiếm nhị phân 
	bằng phương pháp đệ quy.
*/

#include <stdio.h>
#include <stdlib.h> 

// Hàm đệ quy tìm kiếm nhị phân
int binarySearchRecursive(int arr[], int left, int right, int target) {
	// Điều kiện dừng của đệ quy
	if (left > right) {
		return -1; // Không tìm thấy phần tử
	}

	int mid = left + (right - left) / 2;

	// So sánh phần tử giữa với giá trị tìm kiếm
	if (arr[mid] == target) {
		return mid; // Tìm thấy phần tử
	}
	else if (arr[mid] > target) {
		// Tìm kiếm ở nửa bên trái
		return binarySearchRecursive(arr, left, mid - 1, target);
	}
	else {
		// Tìm kiếm ở nửa bên phải
		return binarySearchRecursive(arr, mid + 1, right, target);
	}
}

int main() {
	// Khai báo mảng đã sắp xếp
	int arr[] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int target, result;

	// Nhập giá trị cần tìm
	printf("Nhap gia tri can tim: ");
	scanf("%d", &target);

	// Gọi hàm tìm kiếm nhị phân
	result = binarySearchRecursive(arr, 0, n - 1, target);

	if (result != -1) {
		printf("Gia tri %d duoc tim thay tai vi tri %d.\n", target, result);
	}
	else {
		printf("Gia tri %d khong duoc tim thay trong mang.\n", target);
	}

	// Dừng màn hình trước khi thoát
	system("pause");

	return 0;
}
