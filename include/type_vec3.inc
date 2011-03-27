#include "type_vec3.h"
#include "type_vec2.h"

namespace fenm {

	template <typename _T>
	type_vec3<_T>::type_vec3() {
		_x = 0;
		_y = 0;
		_z = 0;
	}

	template <typename _T>
	type_vec3<_T>::type_vec3(_T x, _T y, _T z) {
		_x = x;
		_y = y;
		_z = z;
	}

	template <typename _T>
	type_vec3<_T>::type_vec3(const type_vec2<_T>& v, _T z) {
		_x = v.x();
		_y = v.y();
		_z = z;
	}

	template <typename _T>
	type_vec3<_T>::type_vec3(const type_vec3<_T>& v) {
		_x = v._x;
		_y = v._y;
		_z = v._z;
	}

	template <typename _T>
	type_vec3<_T>::~type_vec3() {

	}

	template <typename _T>
	void type_vec3<_T>::setPosition(_T x, _T y, _T z) {
		_x = x;
		_y = y;
		_z = z;
	}

	template <typename _T>
	void type_vec3<_T>::setPosition(const type_vec3<_T>& v) {
		_x = v._x;
		_y = v._y;
		_z = v._z;
	}
	
	template <typename _T>
	void type_vec3<_T>::setPosition(const type_vec2<_T>& v, _T z) {
		_x = v.x();
		_y = v.y();
		_z = z;
	}

	template <typename _T>
	void type_vec3<_T>::setX(_T x) {
		_x = x;
	}

	template <typename _T>
	void type_vec3<_T>::setY(_T y) {
		_y = y;
	}

	template <typename _T>
	void type_vec3<_T>::setZ(_T z) {
		_z = z;
	}

	template <typename _T>
	type_vec3<_T> type_vec3<_T>::getPosition() {
		return *this;
	}

	template <typename _T>
	_T const type_vec3<_T>::x() {
		return _x;
	}

	template <typename _T>
	_T const type_vec3<_T>::y() {
		return _y;
	}

	template <typename _T>
	_T const type_vec3<_T>::z() {
		return _z;
	}

	template <typename _T>
	type_vec2<_T> type_vec3<_T>::xy() {
		return type_vec2<_T>(_x, _y);
	}

	template <typename _T>
	type_vec2<_T> type_vec3<_T>::xz() {
		return type_vec2<_T>(_x, _z);
	}

	template <typename _T>
	type_vec2<_T> type_vec3<_T>::yz() {
		return type_vec2<_T>(_y, _z);
	}

	template <typename _T>
	type_vec3<_T> type_vec3<_T>::operator +(const type_vec3<_T>& v) {
		this->_x += v._x;
		this->_y += v._y;
		this->_z += v._z;
		return *this;
	}

	template <typename _T>
	type_vec3<_T>& type_vec3<_T>::operator +=(const type_vec3<_T>& v) {
		return type_vec3<_T>(_x + v._x, _y + v._y, _z + v._z);
	}

	template <typename _T>
	type_vec3<_T> type_vec3<_T>::operator -(const type_vec3<_T>& v) {
		return type_vec3<_T>(_x - v._x, _y - v._y, _z - v._z);
	}

	template <typename _T>
	type_vec3<_T>& type_vec3<_T>::operator -=(const type_vec3<_T>& v) {
		this->_x -= v._x;
		this->_y -= v._y;
		this->_z -= v._z;
		return *this;
	}

	template <typename _T>
	_T type_vec3<_T>::operator *(const type_vec3<_T>& v) {
		return _x * v._x + _y * v._y + _z * v._z;
	}

	template <typename _T>
	type_vec3<_T> type_vec3<_T>::operator *(const long& constant) {
		return type_vec3<_T>(_x * constant, _y * constant, _z * constant);
	}

	template <typename _T>
	type_vec3<_T>& type_vec3<_T>::operator *=(const long& constant) {
		_x *= constant;
		_y *= constant;
		_z *= constant;
		*this;
	}

	template <typename _T>
	type_vec3<_T> type_vec3<_T>::operator *(const double& constant) {
		return type_vec3<_T>(_x * constant, _y * constant, _z * constant);
	}

	template <typename _T>
	type_vec3<_T>& type_vec3<_T>::operator *=(const double& constant) {
		_x *= constant;
		_y *= constant;
		_z *= constant;
		*this;
	}

	template <typename _T>
	bool type_vec3<_T>::operator ==(const type_vec3<_T>& v) {
		return (_x == v._x && _y == v._y && _z == v._z);
	}

	template <typename _T>
	bool type_vec3<_T>::operator !=(const type_vec3<_T>& v) {
		return (_x != v._x || _y != v._y || _z != v._z);
	}

	template <typename _T>
	_T length(const type_vec3<_T>& v) {
		return sqrt(v.x() * v.x() + v.y() * v.y() + v.z() * v.z());
	}

	template <typename _T>
	type_vec3<_T> normalize(const type_vec3<_T>& v) {
		_T temp = length(v);
		return type_vec3<_T>(v.x() / temp, v.y() / temp, v.z() / temp);
	}

	template <typename _T>
	_T dot(const type_vec3<_T>& v1, const type_vec3<_T>& v2) {
		return v1.x() * v2.x() + v1.y * v2.y + v1.z * v2.z + v1.w * v2.w;
	}

	template <typename _T>
	type_vec3<_T> crossP(const type_vec3<_T>& v1, const type_vec3<_T>& v2) {
		type_vec3<_T> temp;

		return temp;
	}

	template <typename _T2>
	std::ostream& operator<<(std::ostream& os, const type_vec3<_T2>& v) {
		os << "vec3(" << v._x << ", " << v._y << ", " << v._z << ")";
		return os;
	}

}
