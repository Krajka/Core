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

//-------------------------------------------------------------------
Vector3f core::math::Vector3f::Add(Vector3f v)
{
	Vector3f result;
	result.X = X + v.X;
	result.Y = Y + v.Y;
	result.Z = Z + v.Z;
	return result;
}

Vector3f core::math::Vector3f::Mul(float s)
{
	Vector3f result;
	result.X = X * s;
	result.Y = Y * s;
	result.Z = Z * s;
	return result;
}
