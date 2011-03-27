#include "FenrirMath.h"
#include "type_mat4.h"

namespace fenm {

	template <typename _T>
	type_mat4<_T>::type_mat4() {
		*this = identityMatrix(*this);
	}

	template <typename _T>
	type_mat4<_T>::type_mat4(_T* data) {
		for(int i = 0; i < 16; i++)
			this->data[i] = data[i];
	}

	template <typename _T>
	type_mat4<_T>::type_mat4(const type_vec4<_T>& v1, const type_vec4<_T>& v2, const type_vec4<_T>& v3, const type_vec4<_T>& v4) {
		data[0] = v1.x();
		data[1] = v1.y();
		data[2] = v1.z();
		data[3] = v1.w();

		data[4] = v2.x();
		data[5] = v2.y();
		data[6] = v2.z();
		data[7] = v2.w();

		data[8] = v3.x();
		data[9] = v3.y();
		data[10] = v3.z();
		data[11] = v3.w();

		data[12] = v4.x();
		data[13] = v4.y();
		data[14] = v4.z();
		data[15] = v4.w();
	}

	template <typename _T>
	type_mat4<_T>::~type_mat4() {
		
	}

	template <typename _T>
	_T type_mat4<_T>::operator ()(unsigned int col, unsigned int row) const {
		return data[col * 4 + row];
	}

	template <typename _T>
	_T& type_mat4<_T>::operator [](unsigned int n) {
		return data[n];
	}

	template <typename _T>
	type_mat4<_T> type_mat4<_T>::operator *(const type_mat4<_T>& m) {

	}

	template <typename _T>
	type_mat4<_T> type_mat4<_T>::operator *(const _T& constant) {
		type_mat4<_T> temp;

		for(int i = 0; i < 16; i++)
			temp[i] = data[i] * constant;

		return temp;
	}

	template <typename _T>
	type_mat4<_T> inverse(const type_mat4<_T>& m) {
		double temp = determinant(m);

		std::cout << "det: " << temp << std::endl;

		if((double)temp < 0.0000001d && (double)temp > -0.0000001d)
			return m;

		type_mat4<_T> tempM;

//		tempM[0] = determinant(type_mat3<_T>());

		tempM[0] = m(1, 1) * m(2, 2) * m(3, 3) + m(2, 1) * m(3, 2) * m(0, 3) + m(3, 1) * m(0, 2) * m(1, 3) - m(3, 1) * m(2, 2) * m(1, 3) - m(2, 1) * m(1, 2) * m(0, 3) - m(1, 1) * m(0, 2) * m(3, 3);
		tempM[1] = m(2, 1) * m(3, 2) * m(0, 3) + m(3, 1) * m(0, 2) * m(1, 3) + m(0, 1) * m(1, 2) * m(2, 3) - m(0, 1) * m(3, 2) * m(2, 3) - m(3, 1) * m(2, 2) * m(1, 3) - m(2, 1) * m(1, 2) * m(0, 3);
		tempM[2] = m(3, 1) * m(0, 2) * m(1, 3) + m(0, 1) * m(1, 2) * m(2, 3) + m(1, 1) * m(2, 2) * m(3, 3) - m(1, 1) * m(0, 2) * m(3, 3) - m(0, 1) * m(3, 2) * m(2, 3) - m(3, 1) * m(2, 2) * m(1, 3);
		tempM[3] = m(0, 1) * m(1, 2) * m(2, 3) + m(1, 1) * m(2, 2) * m(3, 3) + m(2, 1) * m(3, 2) * m(0, 3) - m(2, 1) * m(1, 2) * m(0, 3) - m(1, 1) * m(0, 2) * m(3, 3) - m(0, 1) * m(3, 2) * m(2, 3);
		tempM[4] = m(1, 2) * m(2, 3) * m(3, 0) + m(2, 2) * m(3, 3) * m(0, 0) + m(3, 2) * m(0, 3) * m(1, 0) - m(3, 2) * m(2, 3) * m(1, 0) - m(2, 2) * m(1, 3) * m(0, 0) - m(1, 2) * m(0, 3) * m(3, 0);
		tempM[5] = m(2, 2) * m(3, 3) * m(0, 0) + m(3, 2) * m(0, 3) * m(1, 0) + m(0, 2) * m(1, 3) * m(2, 0) - m(0, 2) * m(3, 3) * m(2, 0) - m(3, 2) * m(2, 3) * m(1, 0) - m(2, 2) * m(1, 3) * m(0, 0);
		tempM[6] = m(3, 2) * m(0, 3) * m(1, 0) + m(0, 2) * m(1, 3) * m(2, 0) + m(1, 2) * m(2, 3) * m(3, 0) - m(1, 2) * m(0, 3) * m(3, 0) - m(0, 2) * m(3, 3) * m(2, 0) - m(3, 2) * m(2, 3) * m(1, 0);
		tempM[7] = m(0, 2) * m(1, 3) * m(2, 0) + m(1, 2) * m(2, 3) * m(3, 0) + m(2, 2) * m(3, 3) * m(0, 0) - m(2, 2) * m(1, 3) * m(0, 0) - m(1, 2) * m(0, 3) * m(3, 0) - m(0, 2) * m(3, 3) * m(2, 0);
		tempM[8] = m(1, 3) * m(2, 0) * m(3, 1) + m(2, 3) * m(3, 0) * m(0, 1) + m(3, 3) * m(0, 0) * m(1, 1) - m(3, 3) * m(2, 0) * m(1, 1) - m(2, 3) * m(1, 0) * m(0, 1) - m(1, 3) * m(0, 0) * m(3, 1);
		tempM[9] = m(2, 3) * m(3, 0) * m(0, 1) + m(3, 3) * m(0, 0) * m(1, 1) + m(0, 3) * m(1, 0) * m(2, 1) - m(0, 3) * m(3, 0) * m(2, 1) - m(3, 3) * m(2, 0) * m(1, 1) - m(2, 3) * m(1, 0) * m(0, 1);
		tempM[10] = m(3, 3) * m(0, 0) * m(1, 1) + m(0, 3) * m(1, 0) * m(2, 1) + m(1, 3) * m(2, 0) * m(3, 1) - m(1, 3) * m(0, 0) * m(3, 1) - m(0, 3) * m(3, 0) * m(2, 1) - m(3, 3) * m(2, 0) * m(1, 1);
		tempM[11] = m(0, 3) * m(1, 0) * m(2, 1) + m(1, 3) * m(2, 0) * m(3, 1) + m(2, 3) * m(3, 0) * m(0, 1) - m(2, 3) * m(1, 0) * m(0, 1) - m(1, 3) * m(0, 0) * m(3, 1) - m(0, 3) * m(3, 0) * m(2, 1);
		tempM[12] = m(1, 0) * m(2, 1) * m(3, 2) + m(2, 0) * m(3, 1) * m(0, 2) + m(3, 0) * m(0, 1) * m(1, 2) - m(3, 0) * m(2, 1) * m(1, 2) - m(2, 0) * m(1, 1) * m(0, 2) - m(1, 0) * m(0, 1) * m(3, 2);
		tempM[13] = m(2, 0) * m(3, 1) * m(0, 2) + m(3, 0) * m(0, 1) * m(1, 2) + m(0, 0) * m(1, 1) * m(2, 2) - m(0, 0) * m(3, 1) * m(2, 2) - m(3, 0) * m(2, 1) * m(1, 2) - m(2, 0) * m(1, 1) * m(0, 2);
		tempM[14] = m(3, 0) * m(0, 1) * m(1, 2) + m(0, 0) * m(1, 1) * m(2, 2) + m(1, 0) * m(2, 1) * m(3, 2) - m(1, 0) * m(0, 1) * m(3, 2) - m(0, 0) * m(3, 1) * m(2, 2) - m(3, 0) * m(2, 1) * m(1, 2);
		tempM[15] = m(0, 0) * m(1, 1) * m(2, 2) + m(1, 0) * m(2, 1) * m(3, 2) + m(2, 0) * m(3, 1) * m(0, 2) - m(2, 0) * m(1, 1) * m(0, 2) - m(1, 0) * m(0, 1) * m(3, 2) - m(0, 0) * m(3, 1) * m(2, 2);



//		tempM =
//				transpose(tempM);

		return tempM;

	}

	template <typename _T>
	type_mat4<_T> transpose(const type_mat4<_T>& m) {
		type_mat4<_T> tempM;

		for(int x = 0; x < 4; x++)
			for(int y = 0; y < 4; y++)
				tempM[x*4,y] = m(x,y);

		return tempM;

	}

	template <typename _T>
	double determinant(const type_mat4<_T>& m) {
		return m(0,0) * m(1,1) * m(2,2) * m(3,3)
				+ m(1,0) * m(2,1) * m(3,2) * m(0,3)
				+ m(2,0) * m(3,1) * m(0,2) * m(1,3)
				+ m(3,0) * m(0,1) * m(1,2) * m(2,3)
				- m(3,0) * m(2,1) * m(1,2) * m(0,3)
				- m(2,0) * m(1,1) * m(0,2) * m(3,3)
				- m(1,0) * m(0,1) * m(3,2) * m(2,3)
				- m(0,0) * m(3,1) * m(2,2) * m(1,3);
	}

	template <typename _T>
	type_mat4<_T> identityMatrix(const type_mat4<_T>& m) {
		_T temp[] = {1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1};

		return type_mat4<_T>(temp);
	}

}
