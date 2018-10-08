#include <iostream>
#include <cmath>
//5. y3 ≥ 2(x2) +|z|


int main() 
{
	int x = 2;
	int y = 3;
	int z = 4;
	double fract1;
	double fract2;
	fract1 = pow(y, 3);
	fract2 = 2 * pow(x, 2) + abs(z);
	if (fract1 >= fract2) 
	{
		std::cout << "true";
	}

	system("pause");
	return 0;
}