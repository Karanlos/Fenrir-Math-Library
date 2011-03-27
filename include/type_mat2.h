#ifndef TYPE_MAT2_H
#define	TYPE_MAT2_H

namespace fenm {

	template <typename _T>
	class type_mat2 {

	public:
		type_mat2();
		type_mat2(_T* data);
		type_mat2(const type_vec2<_T>& v1, const type_vec2<_T>& v2);

		_T& operator [](unsigned int n);
		_T& operator ()(unsigned int col, unsigned int row);
		type_mat2<_T> operator * (const type_mat2<_T>& m);
		type_vec2<_T> operator * (const type_vec2<_T>& m);
		type_vec2<_T> operator * (const _T& constant);

	protected:
		_T data[4];

	};

	template <typename _T> type_mat2<_T> inverse(const type_mat2<_T>& m);
	template <typename _T> type_mat2<_T> transpose(const type_mat2<_T>& m);
	template <typename _T> double determinant(const type_mat2<_T>& m);
	template <typename _T> type_mat2<_T> identityMatrix(const type_mat2<_T>& m);

}

#include "type_mat2.inc"

#endif	/* TYPE_MAT2_H */

