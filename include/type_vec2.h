#ifndef VEC2_H
#define	VEC2_H

namespace fenm {

	template <typename _T>
	class type_vec2 {

	public:
		type_vec2();
		type_vec2(_T x, _T y);
		type_vec2(const type_vec2<_T>& v);
		virtual ~type_vec2();

		void setPosition(_T x, _T y);
		void setPosition(const type_vec2<_T>& v);
		void setX(_T x);
		void setY(_T y);

		type_vec2<_T> getPosition();
		_T x();
		_T y();

		type_vec2<_T> operator +(const type_vec2<_T>& v);
		type_vec2<_T>& operator +=(const type_vec2<_T>& v);
		type_vec2<_T> operator -(const type_vec2<_T>& v);
		type_vec2<_T>& operator -=(const type_vec2<_T>& v);
		_T operator *(const type_vec2<_T>& v);
		type_vec2<_T> operator *(const long& constant);
		type_vec2<_T>& operator *=(const long& constant);
		type_vec2<_T> operator *(const double& constant);
		type_vec2<_T>& operator *=(const double& constant);
		bool operator ==(const type_vec2<_T>& v);
		bool operator !=(const type_vec2<_T>& v);

		template <typename _T2> friend std::ostream& operator << (std::ostream& os, const type_vec2<_T2> v);

	protected:
		union {_T _x, _r;};
		union {_T _y, _g;};

	};

	template <typename _T> _T length(type_vec2<_T> v);

}

#include "type_vec2.inc"

#endif	/* VEC2_H */

