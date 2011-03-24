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

}

#include "type_vec4.inc"

#endif	/* VEC4_H */

