#ifndef VEC4_H
#define	VEC4_H

namespace FenM {

	class vec2;
	class vec3;

	class vec4 {

	public:
		vec4();
		vec4(FEN_FLOAT_PRECI x, FEN_FLOAT_PRECI y, FEN_FLOAT_PRECI z, FEN_FLOAT_PRECI w);
		vec4(vec2 vec, FEN_FLOAT_PRECI z, FEN_FLOAT_PRECI w);
		vec4(vec3 vec, FEN_FLOAT_PRECI w);
		virtual ~vec4();

		void setPosition(FEN_FLOAT_PRECI x, FEN_FLOAT_PRECI y, FEN_FLOAT_PRECI z, FEN_FLOAT_PRECI w);
		void setPosition(vec4 vec);
		void setPosition(vec3 vec, FEN_FLOAT_PRECI w);
		void setPosition(vec2 vec, FEN_FLOAT_PRECI z, FEN_FLOAT_PRECI w);
		void setX(FEN_FLOAT_PRECI x);
		void setY(FEN_FLOAT_PRECI y);
		void setZ(FEN_FLOAT_PRECI z);
		void setW(FEN_FLOAT_PRECI w);

		vec4 getPosition();
		FEN_FLOAT_PRECI x();
		FEN_FLOAT_PRECI y();
		FEN_FLOAT_PRECI z();
		FEN_FLOAT_PRECI w();

		vec2 xy();
		vec2 xz();
		vec2 xw();
		vec2 yz();
		vec2 yw();
		vec2 zw();

		vec3 xyz();
		vec3 xyw();
		vec3 xzw();
		vec3 yzw();

		vec4 operator +(const vec4& vec);
		vec4& operator +=(const vec4& vec);
		vec4 operator -(const vec4& vec);
		vec4& operator -=(const vec4& vec);
		FEN_FLOAT_PRECI operator *(const vec4& vec);
		vec4 operator *(const int& constant);
		vec4& operator *=(const int& constant);
		vec4 operator *(const FEN_FLOAT_PRECI& constant);
		vec4& operator *=(const FEN_FLOAT_PRECI& constant);

	protected:
		FEN_FLOAT_PRECI _x,_y,_z,_w;

	};

}

#endif	/* VEC4_H */

