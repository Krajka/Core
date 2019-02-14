#include "Vector3f.hpp"

using namespace core::math;

Vector3f core::math::Vector3f::operator+(Vector3f const & v)
{
	Vector3f result;
	result.X = X + v.X;
	result.Y = Y + v.Y;
	result.Z = Z + v.Z;
	return result;
}

Vector3f core::math::Vector3f::operator-(Vector3f const & v)
{
	Vector3f result;
	result.X = X - v.X;
	result.Y = Y - v.Y;
	result.Z = Z - v.Z;
	return result;
}

Vector3f core::math::Vector3f::operator*(float s)
{
	Vector3f result;
	result.X = X * s;
	result.Y = Y * s;
	result.Z = Z * s;
	return result;
}

Vector3f core::math::Vector3f::operator/(float s)
{
	Vector3f result;
	result.X = X / s;
	result.Y = Y / s;
	result.Z = Z / s;
	return result;
}

//-------------------------------------------------------------------
//Vector3f Vector3f::Sub(Vector3f v)
//{
//	Vector3f result;
//	result.X = X - v.X;
//	result.Y = Y - v.Y;
//	result.Z = Z - v.Z;
//	return result;
//}

//-------------------------------------------------------------------
//Vector3f core::math::Vector3f::Add(Vector3f v)
//{
//	Vector3f result;
//	result.X = X + v.X;
//	result.Y = Y + v.Y;
//	result.Z = Z + v.Z;
//	return result;
//}

//-------------------------------------------------------------------
//Vector3f core::math::Vector3f::Mul(float s)
//{
//	Vector3f result;
//	result.X = X * s;
//	result.Y = Y * s;
//	result.Z = Z * s;
//	return result;
//}
//
////-------------------------------------------------------------------
//Vector3f core::math::Vector3f::Div(float s)
//{
//	Vector3f result;
//	result.X = X / s;
//	result.Y = Y / s;
//	result.Z = Z / s;
//	return result;
//}
//
//-------------------------------------------------------------------
float core::math::Vector3f::Dot(Vector3f v)
{
	return X*v.X + Y * v.Y + Z * v.Z ;
}

//-------------------------------------------------------------------
Vector3f core::math::Vector3f::Cross(Vector3f v)
{
	Vector3f result;
	result.X = Y * v.Z - Z * v.Y;
	result.Y = Z * v.X - X * v.Z;
	result.Z = X * v.Y - Y * v.X;
	return result;
}
