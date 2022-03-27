#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	int min;

	cin >> a >> b >> c;

	if (a > b) {
		min = b;
		if (min > c) {
			cout << c;
		}
		else if (min < c) {
			cout << min;
		}
	}
	else if (a < b) {
		min = a;
		if (min > c) {
			cout << c;
		}
		else if (min < c) {
			cout << min;
		}
	}
}