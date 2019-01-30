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

	c = b.Sub(a);

	Vector3f e;

	e = b.Add(a);

	cout << e.X << e.Y << e.Z << endl;

	cout << c.X << c.Y << c.Z << endl;

	float d = sqrtf(c.X*c.X + c.Y*c.Y + c.Z*c.Z);

	cout << d << endl;



	system("pause");
	return 0;
}