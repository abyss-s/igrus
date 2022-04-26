#include <iostream>
using namespace std;

int main() {
	int n;
	int n1 = 1;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << n1 << " ";
			n1 = (n1 + 2) % 10; // 1 3 5 7 9 
		}
		cout << "\n";
	}
}