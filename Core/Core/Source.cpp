#include <iostream>
#include <math.h>

using namespace std;

class Vector3f
{
public:

	float X = 0;
	float Y = 0;
	float Z = 0;

	Vector3f Sub(Vector3f v)
	{
		Vector3f result;
		result.X = X - v.X;
		result.Y = Y - v.Y;
		result.Z = Z - v.Z;
		return result;
	}
};

int main()
{
	setlocale(LC_ALL, "");

	Vector3f a { 1, 2, 3 };
	Vector3f b { 4, 5, 6 };

	Vector3f c;

	c = b.Sub(a);

	cout << c.X << c.Y << c.Z << endl;

	float d = sqrtf(c.X*c.X + c.Y*c.Y + c.Z*c.Z);

	cout << d << endl;



	system("pause");
	return 0;
}