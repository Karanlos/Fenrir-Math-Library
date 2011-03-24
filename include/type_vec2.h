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
		bool operator !=(const type_vec2<_T>& vec);

	protected:
		_T _x, _y;

	};

}

#include "type_vec2.inc"

#endif	/* VEC2_H */

