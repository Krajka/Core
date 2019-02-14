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

			

			

			Vector3f operator + (Vector3f const &v);
			Vector3f operator - (Vector3f const &v);
			Vector3f operator * (float s);
			Vector3f operator / (float s);

		

			float Dot(Vector3f v);
			Vector3f Cross(Vector3f v);

			
		};
		
		//------------------------------------------------------------------
		class Matrix3x3f
		{
		public:
			float Data[3][3]= { {0, 0, 0}, { 0, 0, 0 }, { 0, 0, 0 } };
			Matrix3x3f operator * (Vector3f const &v);
			Matrix3x3f Show(Matrix3x3f r);
		};

	}
}