#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	for (int i = 0; i < 5; i++) {
		cout << 2 << " * " << i + 1 << " =" << setw(3) << 2 * (i + 1) << "   ";
	}
	cout << "\n";
	for (int i = 0; i < 5; i++) {
		cout << 3 << " * " << i + 1 << " =" << setw(3) << 3 * (i + 1) << "   ";
	}
	cout << "\n";
	for (int i = 0; i < 5; i++) {
		cout << 4 << " * " << i + 1 << " =" << setw(3) << 4 * (i + 1) << "   ";
	}
}