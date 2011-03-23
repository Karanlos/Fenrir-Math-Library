#ifndef VEC2_H
#define	VEC2_H

namespace fenm {

	template <typename _T>
	class type_vec2 {

	public:
		type_vec2();
		type_vec2(_T x, _T y);
		type_vec2(const type_vec2<_T>& vec);
		virtual ~type_vec2();

		void setPosition(_T x, _T y);
		void setPosition(const type_vec2<_T>& vec2);
		void setX(_T x);
		void setY(_T y);

		type_vec2<_T> getPosition();
		_T x();
		_T y();

		type_vec2<_T> operator +(const type_vec2<_T>& vec);
		type_vec2<_T>& operator +=(const type_vec2<_T>& vec);
		type_vec2<_T> operator -(const type_vec2<_T>& vec);
		type_vec2<_T>& operator -=(const type_vec2<_T>& vec);
		_T operator *(const type_vec2<_T>& vec);
		type_vec2<_T> operator *(const long& constant);
		type_vec2<_T>& operator *=(const long& constant);
		type_vec2<_T> operator *(const double& constant);
		type_vec2<_T>& operator *=(const double& constant);
		bool operator ==(const type_vec2<_T>& vec);

	protected:
		_T _x, _y;

	};

//	class vec2 {
//
//	public:
//		vec2();
//		vec2(FEN_FLOAT_PRECI x, FEN_FLOAT_PRECI y);
//		virtual ~vec2();
//
//		void setPosition(FEN_FLOAT_PRECI x, FEN_FLOAT_PRECI y);
//		void setPosition(vec2 vec);
//		void setX(FEN_FLOAT_PRECI x);
//		void setY(FEN_FLOAT_PRECI y);
//
//		vec2 getPosition();
//		FEN_FLOAT_PRECI x();
//		FEN_FLOAT_PRECI y();
//
//		vec2 operator +(const vec2& vec);
//		vec2& operator +=(const vec2& vec);
//		vec2 operator -(const vec2& vec);
//		vec2& operator -=(const vec2& vec);
//		FEN_FLOAT_PRECI operator *(const vec2& vec);
//		vec2 operator *(const int& constant);
//		vec2& operator *=(const int& constant);
//		vec2 operator *(const FEN_FLOAT_PRECI& constant);
//		vec2& operator *=(const FEN_FLOAT_PRECI& constant);
//
//	protected:
//		FEN_FLOAT_PRECI _x,_y;
//
//	};

}

#endif	/* VEC2_H */

