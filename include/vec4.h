#ifndef VEC4_H
#define	VEC4_H

namespace FenM {

	class vec4 {

	public:
		vec4();
		vec4(float x, float y, float z, float w);
		virtual ~vec4();

		void setPosition(float x, float y, float z, float w);
		void setPosition(vec4 vec);
		void setX(float x);
		void setY(float y);
		void setZ(float z);
		void setW(float w);

		vec4 getPosition();
		float getX();
		float getY();
		float getZ();
		float getW();

		vec4 operator +(const vec4& vec);
		vec4& operator +=(const vec4& vec);
		vec4 operator -(const vec4& vec);
		vec4& operator -=(const vec4& vec);
		float operator *(const vec4& vec);
		vec4 operator *(const int& constant);
		vec4& operator *=(const int& constant);
		vec4 operator *(const float& constant);
		vec4& operator *=(const float& constant);

	protected:
		float x,y,z,w;

	};

}

#endif	/* VEC4_H */

