#include <iostream>
using namespace std;

int main() {
	int a=0, b=0, c=0;
	cin >> a >> b >> c; // 3개의 정수 입력 받기

	cout << (a > b && a > c) << " " << (a == b && a == c);
}

