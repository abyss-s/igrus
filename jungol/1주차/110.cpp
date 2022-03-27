#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double y;
	cout << "yard? ";
	cin >> y;
	double ans = 91.44 * y;
	ans *= 10;
	ans = round(ans);
	ans /= 10;
	cout << fixed;
	cout.precision(1); // 소수 둘째 자리까지 출력
	cout << y << "yard = " << ans << "cm";
}

// 왱 60점..

