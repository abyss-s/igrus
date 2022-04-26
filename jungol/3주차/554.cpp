#include <iostream>
using namespace std;

int main() {
	int n;
	int n1 = 1; // 따로 저장 
	char c = 'A';
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 1; j <= n-i; j++, n1++) {
			cout << n1 << " ";
		}
		for (int j = 1; j <= i+1; j++, c++) {
			cout << char(c) << " ";
		}
		cout << "\n";
	}
	

}
