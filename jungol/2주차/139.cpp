#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	if (a < b) {
		for (int i = 1; i <= 9; i++) {
			for (int j = a; j <= b; j++) {
				cout << j << " * " << i << " =" << setw(3) << j * i << "   ";
			}
			cout << "\n";
		}
	}
	else if (a > b) {
		for (int i = 1; i <= 9; i++) {
			for (int j = a; j >= b; j--) {
				cout << j << " * " << i << " =" << setw(3) << j * i << "   ";
			}
			cout << "\n";
		}
	}
	else if (a = b) {
		for (int i = 1; i <= 9; i++) {
			cout << a << " * " << i << " =" << setw(3) << a * i << "   ";
			cout << "\n";
		}
	}
}