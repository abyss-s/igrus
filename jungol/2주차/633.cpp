#include <iostream>
using namespace std;

int main() {
	int input;
	while (1) {
		cout << "1. Korea" << endl;
		cout << "2. USA" << endl;
		cout << "3. Japan" << endl;
		cout << "4. China" << endl;
		cout << "number? ";
		cin >> input;
		if (input == 1) {
			cout << "\n""Seoul""\n" << endl;
			continue;
		}
		else if (input == 2) {
			cout << "\n""Washington""\n" << endl;
			continue;
		}
		else if (input == 3) {
			cout << "\n""Tokyo""\n" << endl;
			continue;
		}
		else if (input == 4) {
			cout << "\n""Beijing""\n" << endl;
			continue;
		}
		else {
			cout << "\n""none""\n" << endl;
			break;
		}
	}
}