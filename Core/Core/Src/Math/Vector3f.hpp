#pragma once

namespace core
{
	namespace math
	{
		//-------------------------------------------------------------------
		class Vector3f
		{
		public:

			float X = 0;
			float Y = 0;
			float Z = 0;

			Vector3f operator + (Vector3f const &obj);

			Vector3f Sub(Vector3f v);
			Vector3f Add(Vector3f v);
			Vector3f Mul(float s);
			Vector3f Div(float s);

			float Dot(Vector3f v);
			Vector3f Cross(Vector3f v);
		};
	}
}