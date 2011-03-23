#ifndef VEC4_H
#define	VEC4_H

namespace fenm {

	template <typename _T> class type_vec2;
	template <typename _T> class type_vec3;


	template <typename _T>
	class type_vec4 {

	public:
		type_vec4();
		type_vec4(_T x, _T y, _T z, _T _w);
		type_vec4(const type_vec2<_T>& vec, _T z, _T _w);
		type_vec4(const type_vec3<_T>& vec, _T _w);
		type_vec4(const type_vec4<_T>& vec);
		virtual ~type_vec4();

		void setPosition(_T x, _T y, _T z, _T _w);
		void setPosition(const type_vec2<_T>& vec, _T z, _T _w);
		void setPosition(const type_vec3<_T>& vec, _T _w);
		void setPosition(const type_vec4<_T>& vec);
		void setX(_T x);
		void setY(_T y);
		void setZ(_T z);
		void setW(_T w);

		type_vec4<_T> getPosition();
		
		_T x();
		_T y();
		_T z();
		_T w();

		type_vec2<_T> xy();
		type_vec2<_T> xz();
		type_vec2<_T> xw();
		type_vec2<_T> yz();
		type_vec2<_T> yw();
		type_vec2<_T> zw();

		type_vec3<_T> xyz();
		type_vec3<_T> xyw();
		type_vec3<_T> xzw();
		type_vec3<_T> yzw();

		type_vec4<_T> operator +(const type_vec4<_T>& vec);
		type_vec4<_T>& operator +=(const type_vec4<_T>& vec);
		type_vec4<_T> operator -(const type_vec4<_T>& vec);
		type_vec4<_T>& operator -=(const type_vec4<_T>& vec);
		_T operator *(const type_vec4<_T>& vec);
		type_vec4<_T> operator *(const long& constant);
		type_vec4<_T>& operator *=(const long& constant);
		type_vec4<_T> operator *(const double& constant);
		type_vec4<_T>& operator *=(const double& constant);

	protected:
		_T _x, _y, _z, _w;

	};

//	class vec4 {
//
//	public:
//		vec4();
//		vec4(FEN_FLOAT_PRECI x, FEN_FLOAT_PRECI y, FEN_FLOAT_PRECI z, FEN_FLOAT_PRECI w);
//		vec4(vec2 vec, FEN_FLOAT_PRECI z, FEN_FLOAT_PRECI w);
//		vec4(vec3 vec, FEN_FLOAT_PRECI w);
//		virtual ~vec4();
//
//		void setPosition(FEN_FLOAT_PRECI x, FEN_FLOAT_PRECI y, FEN_FLOAT_PRECI z, FEN_FLOAT_PRECI w);
//		void setPosition(vec4 vec);
//		void setPosition(vec3 vec, FEN_FLOAT_PRECI w);
//		void setPosition(vec2 vec, FEN_FLOAT_PRECI z, FEN_FLOAT_PRECI w);
//		void setX(FEN_FLOAT_PRECI x);
//		void setY(FEN_FLOAT_PRECI y);
//		void setZ(FEN_FLOAT_PRECI z);
//		void setW(FEN_FLOAT_PRECI w);
//
//		vec4 getPosition();
//		FEN_FLOAT_PRECI x();
//		FEN_FLOAT_PRECI y();
//		FEN_FLOAT_PRECI z();
//		FEN_FLOAT_PRECI w();
//
//		vec2 xy();
//		vec2 xz();
//		vec2 xw();
//		vec2 yz();
//		vec2 yw();
//		vec2 zw();
//
//		vec3 xyz();
//		vec3 xyw();
//		vec3 xzw();
//		vec3 yzw();
//
//		vec4 operator +(const vec4& vec);
//		vec4& operator +=(const vec4& vec);
//		vec4 operator -(const vec4& vec);
//		vec4& operator -=(const vec4& vec);
//		FEN_FLOAT_PRECI operator *(const vec4& vec);
//		vec4 operator *(const int& constant);
//		vec4& operator *=(const int& constant);
//		vec4 operator *(const FEN_FLOAT_PRECI& constant);
//		vec4& operator *=(const FEN_FLOAT_PRECI& constant);
//
//	protected:
//		FEN_FLOAT_PRECI _x,_y,_z,_w;
//
//	};

}

#endif	/* VEC4_H */

