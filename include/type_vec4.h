#ifndef VEC4_H
#define	VEC4_H

#include <iostream>

namespace fenm {

	template <typename _T> class type_vec2;
	template <typename _T> class type_vec3;


	template <typename _T>
	class type_vec4 {

	public:
		type_vec4();
		type_vec4(_T x, _T y, _T z, _T _w);
		type_vec4(const type_vec2<_T>& v, _T z, _T _w);
		type_vec4(const type_vec3<_T>& v, _T _w);
		type_vec4(const type_vec4<_T>& v);
		virtual ~type_vec4();

		void setPosition(_T x, _T y, _T z, _T _w);
		void setPosition(const type_vec2<_T>& v, _T z, _T _w);
		void setPosition(const type_vec3<_T>& v, _T _w);
		void setPosition(const type_vec4<_T>& v);
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

		type_vec4<_T> operator +(const type_vec4<_T>& v);
		type_vec4<_T>& operator +=(const type_vec4<_T>& v);
		type_vec4<_T> operator -(const type_vec4<_T>& v);
		type_vec4<_T>& operator -=(const type_vec4<_T>& v);
		type_vec4<_T> operator *(const type_vec4<_T>& v);
		type_vec4<_T>& operator *=(const type_vec4<_T>& v);
		type_vec4<_T> operator *(const long& constant);
		type_vec4<_T>& operator *=(const long& constant);
		type_vec4<_T> operator *(const double& constant);
		type_vec4<_T>& operator *=(const double& constant);
		bool operator ==(const type_vec4<_T>& v);
		bool operator !=(const type_vec4<_T>& v);

		template <typename _T2> friend std::ostream& operator << (std::ostream&, const type_vec4<_T2>& v);

//		friend type_vec2;
//		friend type_vec3;

	protected:
		union {_T _x, _r, _s;};
		union {_T _y, _g, _t;};
		union {_T _z, _b, _p;};
		union {_T _w, _a, _q;};

	};

	template <typename _T> _T length(type_vec4<_T> v);
	template <typename _T> type_vec4<_T> normalize(const type_vec4<_T>& v);
	template <typename _T> _T dot(const type_vec4<_T>& v1, const type_vec4<_T>& v2);

}

#include "type_vec4.inc"

#endif	/* VEC4_H */

