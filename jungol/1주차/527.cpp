#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a, b; // 2���� ���� ����
	cin >> a >> b; // 2���� ���� �Է� �ޱ�

	cout << a / b << " ";

	double c = double(a) / double(b); // ù ��° ���� �Ǽ��� ��ȯ�Ͽ� �� ��° ���� ���� �� c

	c *= 1000;
	c = round(c); // �ݿø�
	c /= 1000; 

	cout << fixed;
	cout.precision(2); // �Ҽ� ��° �ڸ����� ���
	cout << c;
}