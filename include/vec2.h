#ifndef VEC2_H
#define	VEC2_H

namespace FenM {

	class vec2 {

	public:
		vec2();
		vec2(float x, float y);
		virtual ~vec2();

		void setPosition(float x, float y);
		void setPosition(vec2 vec);
		void setX(float x);
		void setY(float y);

		vec2 getPosition();
		float getX();
		float getY();

		vec2 operator +(const vec2& vec);
		vec2& operator +=(const vec2& vec);
		vec2 operator -(const vec2& vec);
		vec2& operator -=(const vec2& vec);
		float operator *(const vec2& vec);
		vec2 operator *(const int& constant);
		vec2& operator *=(const int& constant);
		vec2 operator *(const float& constant);
		vec2& operator *=(const float& constant);

	protected:
		float x,y;

	};

}

#endif	/* VEC2_H */

