#include <iostream>
using namespace std;

// 시간 제한 초과 오류?..

int main() {
	char arr[5][3] = {};
	char n;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> n;
			arr[i][j] = n;
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			char N = arr[i][j] + 32;
			cout << N << " ";
		}
		cout << "\n";
	}
}