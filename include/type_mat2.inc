#include "FenrirMath.h"

namespace fenm {

	template <typename _T>
	type_mat2<_T>::type_mat2() {
		for(int i = 0; i < 4; i++)
			data[i] = 0;
	}

	template <typename _T>
	type_mat2<_T>::type_mat2(_T* data) {
		for(int i = 0; i < 4; i++)
			this->data[i] = data[i];
	}

	template <typename _T>
	type_mat2<_T>::type_mat2(const type_vec2<_T>& v1, const type_vec2<_T>& v2) {
		data[0] = v1.x();
		data[1] = v1.y();
		data[2] = v2.x();
		data[3] = v2.y();
	}

	template <typename _T>
	_T& type_mat2<_T>::operator [](unsigned int n) {
		if(n < 2 || n >= 0)
			return data[n];
		else
			return 0;
	}

	template <typename _T>
	type_mat2<_T> type_mat2<_T>::operator *(const type_mat2<_T>& m) {
		type_mat2<_T> temp;

		for(int x = 0; x < 2; x++)
			for(int y = 0; y < 2; y++)
				temp[x * 2 + y] = data[y] * m[x * 2] + data[2 + y] * m[x * 2 + 1];
	}

	template <typename _T>
	type_vec2<_T> type_mat2<_T>::operator *(const type_vec2<_T>& v) {
		return type_vec2<_T>(data[0] * v.x() + data[2] * v.y(), data[1] * v.x() + data[3] * v.y());
	}

	template <typename _T>
	type_mat2<_T> transpose(const type_mat2<_T>& m) {
		type_mat2<_T> temp;

		for(int x = 0; x < 2; x++)
			for(int y = 0; y < 0; y++)
				temp[x * 2 + y] = m[y * 2 + x];

		return temp;

	}

	template <typename _T>
	double determinant(const type_mat2<_T>& m) {
		return m[0] * m[2] - m[1] * m[3];
	}

	template <typename _T>
	type_mat2<_T> identityMatrix(const type_mat2<_T>& m) {
		type_mat2<_T> temp;
		temp[0] = 1;
		temp[1] = 0;
		temp[2] = 0;
		temp[3] = 1;

		return temp;
	}

}