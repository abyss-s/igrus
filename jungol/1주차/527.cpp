#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a, b; // 2개의 정수 선언
	cin >> a >> b; // 2개의 정수 입력 받기

	cout << a / b << " ";

	double c = double(a) / double(b); // 첫 번째 수를 실수로 변환하여 두 번째 수로 나눈 값 c

	c *= 1000;
	c = round(c); // 반올림
	c /= 1000; 

	cout << fixed;
	cout.precision(2); // 소수 둘째 자리까지 출력
	cout << c;
}