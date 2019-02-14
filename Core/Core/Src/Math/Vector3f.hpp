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
			float Coord[3] = { X,Y,Z };
			

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
			//Vector3f Data[3] = { {0, 0, 0}, { 0, 0, 0 }, { 0, 0, 0 } };
			float Data[3][3] = { {0, 0, 0}, { 0, 0, 0 }, { 0, 0, 0 } };
			Matrix3x3f operator * (Vector3f const &v);
		};

	}
}