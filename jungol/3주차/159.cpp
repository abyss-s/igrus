#include <iostream>
using namespace std;
// 삽입 정렬 내림차순 응용

int main() {
	int tmp, n;
	int arr[21] = {}; // 20->21로 바꾸니까 됨.
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i] > arr[j]) {
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << "\n";
	}
}

// 왜 컴파일 에러인것임~