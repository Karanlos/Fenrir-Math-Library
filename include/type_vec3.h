#ifndef VEC3_H
#define	VEC3_H

#include <iostream>

namespace fenm {

	template <typename _T> class type_vec2;

	template <typename _T>
	class type_vec3 {

	public:
		type_vec3();
		type_vec3(_T x, _T y, _T z);
		type_vec3(const type_vec2<_T>& v, _T z);
		type_vec3(const type_vec3<_T>& v);
		virtual ~type_vec3();

		void setPosition(_T x, _T y, _T z);
		void setPosition(const type_vec3<_T>& v);
		void setPosition(const type_vec2<_T>& v, _T z);
		void setX(_T x);
		void setY(_T y);
		void setZ(_T z);

		type_vec3<_T> getPosition();
		_T const x();
		_T const y();
		_T const z();

		type_vec2<_T> xy();
		type_vec2<_T> xz();
		type_vec2<_T> yz();

		type_vec3<_T> operator +(const type_vec3<_T>& v);
		type_vec3<_T>& operator +=(const type_vec3<_T>& v);
		type_vec3<_T> operator -(const type_vec3<_T>& v);
		type_vec3<_T>& operator -=(const type_vec3<_T>& v);
		_T operator *(const type_vec3<_T>& vec);
		type_vec3<_T> operator *(const long& constant);
		type_vec3<_T>& operator *=(const long& constant);
		type_vec3<_T> operator *(const double& constant);
		type_vec3<_T>& operator *=(const double& constant);
		bool operator ==(const type_vec3<_T>& vec);
		bool operator !=(const type_vec3<_T>& vec);

		template <typename _T2> friend std::ostream& operator << (std::ostream&, const type_vec3<_T2>& v);

//		friend type_vec2;
//		friend type_vec4;

	protected:
		_T _x, _y, _z;

	};

	template <typename _T> _T length(const type_vec3<_T>& v);
	template <typename _T> type_vec3<_T> normalize(const type_vec3<_T>& v);
	template <typename _T> _T dot(const type_vec3<_T>& v1, const type_vec3<_T>& v2);
	template <typename _T> type_vec3<_T> crossP(const type_vec3<_T>& v1, const type_vec3<_T>& v2);

}

#include "type_vec3.inc"

#endif	/* VEC3_H */

