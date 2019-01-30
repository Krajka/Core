#include <iostream>
#include <math.h>

#include "Src/Math/Vector3f.hpp"

using namespace std;
using namespace core::math;

int main()
{
	setlocale(LC_ALL, "");

	Vector3f a { 1, 2, 3 };
	Vector3f b { 4, 5, 6 };

	Vector3f c;

	c = a.Mul(5);

	cout << c.X << ", " << c.Y << ", " << c.Z  << endl;
	
	system("pause");
	return 0;
}