#include <cmath>
#include <iostream>
using namespace std;

//2. ���� ��� ��������� �����.����� �����, ��������, ������������ � ������� �� ���������.

int main()
{
	double a = 4;
	a = pow(a, 2);
	double b = 3;
	b = pow(b, 2);

	cout << a + b << " ";
	cout << a - b << " ";
	cout << a * b << " ";
	cout << a / b << " ";

	system("pause");
	return 0;
}