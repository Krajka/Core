#pragma once

namespace core
{
	namespace math
	{
		//-------------------------------------------------------------------
		class Vector3f
		{
		public:
			
			//float Coord[3] = { X,Y,Z };
			union
			{
				float Coord[3];
				struct { float X, Y, Z; };
			};

			Vector3f();

			Vector3f operator + (Vector3f const &v);
			Vector3f operator - (Vector3f const &v);
			Vector3f operator * (float s);
			Vector3f operator / (float s);

			//Vector3f Sub(Vector3f v);
			//Vector3f Add(Vector3f v);
			//Vector3f Mul(float s);
			//Vector3f Div(float s);

			float Dot(Vector3f v);
			Vector3f Cross(Vector3f v);

			
		};
		
		//------------------------------------------------------------------
		class Matrix3x3f
		{
		public:
			float Data[3][3];
			Matrix3x3f();
			Matrix3x3f(float d[3][3]);
			Matrix3x3f operator * (Vector3f const &v);
		};

	}
}