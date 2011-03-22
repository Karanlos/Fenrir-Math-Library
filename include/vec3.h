#ifndef VEC3_H
#define	VEC3_H

namespace FenM {

	class vec3 {

	public:
		vec3();
		vec3(float x, float y, float z);
		virtual ~vec3();

		void setPosition(float x, float y, float z);
		void setPosition(vec3 vec);
		void setX(float x);
		void setY(float y);
		void setZ(float z);

		vec3 getPosition();
		float getX();
		float getY();
		float getZ();

		vec3 operator +(const vec3& vec);
		vec3& operator +=(const vec3& vec);
		vec3 operator -(const vec3& vec);
		vec3& operator -=(const vec3& vec);
		float operator *(const vec3& vec);
		vec3 operator *(const int& constant);
		vec3& operator *=(const int& constant);
		vec3 operator *(const float& constant);
		vec3& operator *=(const float& constant);

	protected:
		float x,y,z;

	};

}

#endif	/* VEC3_H */

