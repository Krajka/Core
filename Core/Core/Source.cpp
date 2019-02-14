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
	Vector3f u{ 2, 0, 3 };

	Vector3f c, d, e, f;

	c = a + b;
	cout << c.X << ", " << c.Y << ", " << c.Z  << endl;
	"\n";
	d = a - b;
	cout << d.X << ", " << d.Y << ", " << d.Z << endl;
	"\n";
	e = a * 4;
	cout << e.X << ", " << e.Y << ", " << e.Z << endl;
	"\n";
	f = a / 2;
	cout << f.X << ", " << f.Y << ", " << f.Z << endl;

	Matrix3x3f t;
	Matrix3x3f m { {1, 2, 3}, {4, 5, 6}, {1, 2, 3} };
	t = m * u;

	system("pause");
	return 0;
}