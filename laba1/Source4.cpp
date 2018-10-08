#include <math.h>
#include <iostream>
using namespace std;

//4. sin(x−y)/cos x cos y

int main()
{
	double x = 1;
	double y = 2;

	cout << sin(x - y) / cos(x)*cos(y);

	system("pause");
	return 0;
}