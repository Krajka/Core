#include "Vector3f.hpp"

using namespace core::math;

//-------------------------------------------------------------------
Vector3f Vector3f::Sub(Vector3f v)
{
	Vector3f result;
	result.X = X - v.X;
	result.Y = Y - v.Y;
	result.Z = Z - v.Z;
	return result;
}
