#ifndef VEC3_H
#define	VEC3_H

namespace FenM {

	class vec2;

	class vec3 {

	public:
		vec3();
		vec3(FEN_FLOAT_PRECI x, FEN_FLOAT_PRECI y, FEN_FLOAT_PRECI z);
		vec3(vec2 vec, FEN_FLOAT_PRECI z);
		virtual ~vec3();

		void setPosition(FEN_FLOAT_PRECI x, FEN_FLOAT_PRECI y, FEN_FLOAT_PRECI z);
		void setPosition(vec3 vec);
		void setPosition(vec2 vec, FEN_FLOAT_PRECI z);
		void setX(FEN_FLOAT_PRECI x);
		void setY(FEN_FLOAT_PRECI y);
		void setZ(FEN_FLOAT_PRECI z);

		vec3 getPosition();

		FEN_FLOAT_PRECI x();
		FEN_FLOAT_PRECI y();
		FEN_FLOAT_PRECI z();

		vec2 xy();
		vec2 xz();
		vec2 yz();

		vec3 operator +(const vec3& vec);
		vec3& operator +=(const vec3& vec);
		vec3 operator -(const vec3& vec);
		vec3& operator -=(const vec3& vec);
		FEN_FLOAT_PRECI operator *(const vec3& vec);
		vec3 operator *(const int& constant);
		vec3& operator *=(const int& constant);
		vec3 operator *(const FEN_FLOAT_PRECI& constant);
		vec3& operator *=(const FEN_FLOAT_PRECI& constant);

	protected:
		FEN_FLOAT_PRECI _x,_y,_z;

	};

}

#endif	/* VEC3_H */

