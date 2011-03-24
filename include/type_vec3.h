#ifndef VEC3_H
#define	VEC3_H

namespace fenm {

	template <typename _T> class type_vec2;

	template <typename _T>
	class type_vec3 {

	public:
		type_vec3();
		type_vec3(_T x, _T y, _T z);
		type_vec3(const type_vec2<_T>& vec, _T z);
		type_vec3(const type_vec3<_T>& vec);
		virtual ~type_vec3();

		void setPosition(_T x, _T y, _T z);
		void setPosition(const type_vec3<_T>& vec);
		void setPosition(const type_vec2<_T>& vec, _T z);
		void setX(_T x);
		void setY(_T y);
		void setZ(_T z);

		type_vec3<_T> getPosition();
		_T x();
		_T y();
		_T z();

		type_vec2<_T> xy();
		type_vec2<_T> xz();
		type_vec2<_T> yz();

		type_vec3<_T> operator +(const type_vec3<_T>& vec);
		type_vec3<_T>& operator +=(const type_vec3<_T>& vec);
		type_vec3<_T> operator -(const type_vec3<_T>& vec);
		type_vec3<_T>& operator -=(const type_vec3<_T>& vec);
		_T operator *(const type_vec3<_T>& vec);
		type_vec3<_T> operator *(const long& constant);
		type_vec3<_T>& operator *=(const long& constant);
		type_vec3<_T> operator *(const double& constant);
		type_vec3<_T>& operator *=(const double& constant);

	protected:
		_T _x, _y, _z;

	};

}

#include "type_vec3.inc"

#endif	/* VEC3_H */

