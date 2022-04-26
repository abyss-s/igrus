#include <iostream>
using namespace std;

int main() {
	int arr[5][5] = { {1, 1, 1, 1, 1} }; // 첫번째 행에 1만 담겨있는 초기 2차원 배열 생성
	for (int i = 1; i < 5; i++) {
		arr[i][0] = 1;
		for (int j = 1; j < 5; j++) {
			arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << arr[i][j];
			cout << " ";
		}
		cout << "\n";
	}
}

