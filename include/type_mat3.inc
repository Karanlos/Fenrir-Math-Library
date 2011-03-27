#include "FenrirMath.h"

namespace fenm {

	template <typename _T>
	type_mat3<_T>::type_mat3() {
		*this = identityMatrix(*this);
	}

	template <typename _T>
	type_mat3<_T>::type_mat3(_T* data) {
		for(int i = 0; i < 9; i++)
			this->data[i] = data[i];
	}

	template <typename _T>
	type_mat3<_T>::~type_mat3() {
		
	}

	template <typename _T>
	_T type_mat3<_T>::operator ()(unsigned int col, unsigned int row) const {
		return data[col * 3 + row];
	}

	template <typename _T>
	_T& type_mat3<_T>::operator [](unsigned int n) {
		return data[n];
	}

	template <typename _T>
	type_mat3<_T> identityMatrix(const type_mat3<_T>& m) {
		type_mat3<_T> temp;

		temp[0] = 1;
		temp[1] = 0;
		temp[2] = 0;
		
		temp[3] = 0;
		temp[4] = 1;
		temp[5] = 0;

		temp[6] = 0;
		temp[7] = 0;
		temp[8] = 1;

		return temp;
	}

	template <typename _T>
	double determinant(const type_mat3<_T>& m) {
		return m(0,0) * m(1,1) * m(2,2)
				+ m(1,0) * m(2,1) * m(0,2)
				+ m(2,0) * m(0,1) * m(1,2)
				- m(2,0) * m(1,1) * m(0,2)
				- m(1,0) * m(0,1) * m(2,2)
				- m(0,0) * m(2,1) * m(1,2);
	}

}