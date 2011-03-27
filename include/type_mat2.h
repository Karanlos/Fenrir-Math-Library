#ifndef TYPE_MAT2_H
#define	TYPE_MAT2_H

namespace fenm {

	template <typename _T> class type_vec2;

	template <typename _T>
	class type_mat2 {

	public:
		type_mat2();
		type_mat2(_T* data);
		~type_mat2();

		type_vec2<_T> operator ()(unsigned int col);
		_T operator ()(unsigned int col, unsigned int row);
		_T operator [](unsigned int n);
		type_mat2<_T> operator +(const type_mat2<_T>& m);
		type_mat2<_T>& operator +=(const type_mat2<_T>& m);
		type_mat2<_T> operator -(const type_mat2<_T>& m);
		type_mat2<_T>& operator -=(const type_mat2<_T>& m);
		type_mat2<_T> operator *(const type_mat2<_T>& m);

	protected:
		_T data[4];

	};

	template <typename _T> _T determinant(type_mat2<_T> m);
	template <typename _T> type_mat2<_T> transpose(type_mat2<_T> m);
	template <typename _T> type_mat2<_T> inverse(type_mat2<_T> m);

}

#endif	/* TYPE_MAT2_H */

