#include <iostream>
#include <math.h>

using namespace std;

class Vector3f
{
public:
	float X;
	float Y;
	float Z;

	// Vector3f Sub 
};

int main()
{
	setlocale(LC_ALL, "");

	Vector3f a { 1, 2, 3 };
	Vector3f b { 4, 5, 6 };

	Vector3f c;

	c.X = b.X - a.X;
	c.Y = b.Y - a.Y;
	c.Z = b.Z - a.Z;

	cout << c.X << c.Y << c.Z << endl;

	float d = sqrtf(c.X*c.X + c.Y*c.Y + c.Z*c.Z);

	cout << d << endl;



	system("pause");
	return 0;
}