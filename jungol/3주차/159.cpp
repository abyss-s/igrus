#include <iostream>
using namespace std;
// ���� ���� �������� ����

int main() {
	int tmp, n;
	int arr[21] = {}; // 20->21�� �ٲٴϱ� ��.
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

// �� ������ �����ΰ���~