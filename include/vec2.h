#ifndef VEC2_H
#define	VEC2_H

namespace FenM {

	class vec2 {

	public:
		vec2();
		vec2(FEN_FLOAT_PRECI x, FEN_FLOAT_PRECI y);
		virtual ~vec2();

		void setPosition(FEN_FLOAT_PRECI x, FEN_FLOAT_PRECI y);
		void setPosition(vec2 vec);
		void setX(FEN_FLOAT_PRECI x);
		void setY(FEN_FLOAT_PRECI y);

		vec2 getPosition();
		FEN_FLOAT_PRECI getX();
		FEN_FLOAT_PRECI getY();

		vec2 operator +(const vec2& vec);
		vec2& operator +=(const vec2& vec);
		vec2 operator -(const vec2& vec);
		vec2& operator -=(const vec2& vec);
		FEN_FLOAT_PRECI operator *(const vec2& vec);
		vec2 operator *(const int& constant);
		vec2& operator *=(const int& constant);
		vec2 operator *(const FEN_FLOAT_PRECI& constant);
		vec2& operator *=(const FEN_FLOAT_PRECI& constant);

	protected:
		FEN_FLOAT_PRECI x,y;

	};

}

#endif	/* VEC2_H */

