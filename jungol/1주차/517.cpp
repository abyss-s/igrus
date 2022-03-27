#include <iostream>
using namespace std;

int main() {
	double n;
	for (int i = 0; i < 3; i++) {
		cin >> n;
		cout << fixed;
		cout.precision(3);
		cout << n << endl;
	}
}