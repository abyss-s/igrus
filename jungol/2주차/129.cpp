#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int input_base, input_height;
	double width;
	char q;
	while (true) {
		cout << "Base = ";
		cin >> input_base;
		cout << "Height = ";
		cin >> input_height;
		double width = 0.5* input_base* input_height;
		width *= 10;
		width = round(width);
		width /= 10;
		cout << fixed;
		cout.precision(1);
		cout << "Triangle width = " << width << endl;
		cout << "Continue? ";
		cin >> q;
		if (q != 'Y' && q != 'y') { // ¿¬»êÀÚ 
			break;
		}
	}
	return 0;
}