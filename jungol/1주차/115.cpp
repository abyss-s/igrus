#include <iostream>
using namespace std;

int main() {
	int a_h = 0; int a_w = 0;
	int b_h = 0; int b_w = 0;

	cin >> a_h >> a_w;
	cin >> b_h >> b_w;
	cout << (a_h > b_h && a_w > b_w);
}