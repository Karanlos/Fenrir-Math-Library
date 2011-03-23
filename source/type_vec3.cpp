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
	type_vec3<_T>::type_vec3(type_vec2<_T> vec, _T z) {
		_x = vec.x();
		_y = vec.y();
		_z = z;
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
	void type_vec3<_T>::setPosition(type_vec3<_T> vec3) {
		_x = vec3._x;
		_y = vec3._y;
		_z = vec3._z;
	}
	
	template <typename _T>
	void type_vec3<_T>::setPosition(type_vec2<_T> vec, _T z) {
		_x = vec.x();
		_y = vec.y();
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
	_T type_vec3<_T>::x() {
		return _x;
	}

	template <typename _T>
	_T type_vec3<_T>::y() {
		return _y;
	}

	template <typename _T>
	_T type_vec3<_T>::z() {
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
	type_vec3<_T> type_vec3<_T>::operator +(const type_vec3<_T>& vec) {
		this->_x += vec._x;
		this->_y += vec._y;
		this->_z += vec._z;
		return *this;
	}

	template <typename _T>
	type_vec3<_T>& type_vec3<_T>::operator +=(const type_vec3<_T>& vec) {
		return type_vec3<_T>(_x + vec._x, _y + vec._y, _z + vec._z);
	}

	template <typename _T>
	type_vec3<_T> type_vec3<_T>::operator -(const type_vec3<_T>& vec) {
		return type_vec3<_T>(_x - vec._x, _y - vec._y, _z - vec._z);
	}

	template <typename _T>
	type_vec3<_T>& type_vec3<_T>::operator -=(const type_vec3<_T>& vec) {
		this->_x -= vec._x;
		this->_y -= vec._y;
		this->_z -= vec._z;
		return *this;
	}

	template <typename _T>
	_T type_vec3<_T>::operator *(const type_vec3<_T>& vec) {
		return _x * vec._x + _y * vec._y + _z * vec._z;
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

//	vec3::vec3() {
//		_x = 0;
//		_y = 0;
//		_z = 0;
//	}
//
//	vec3::vec3(FEN_FLOAT_PRECI x, FEN_FLOAT_PRECI y, FEN_FLOAT_PRECI z) {
//		this->_x = x;
//		this->_y = y;
//		this->_z = z;
//	}
//
//	vec3::vec3(vec2 vec, FEN_FLOAT_PRECI z) {
//		this->_x = vec.x();
//		this->_y = vec.y();
//		this->_z = z;
//	}
//
//	vec3::~vec3() {
//	}
//
//	void vec3::setPosition(FEN_FLOAT_PRECI x, FEN_FLOAT_PRECI y, FEN_FLOAT_PRECI z) {
//		this->_x = x;
//		this->_y = y;
//		this->_z = z;
//	}
//
//	void vec3::setPosition(vec3 vec) {
//		_x = vec._x;
//		_y = vec._y;
//		_z = vec._z;
//	}
//
//	void vec3::setX(FEN_FLOAT_PRECI x) {
//		this->_x = x;
//	}
//
//	void vec3::setY(FEN_FLOAT_PRECI y) {
//		this->_y = y;
//	}
//
//	void vec3::setZ(FEN_FLOAT_PRECI z) {
//		this->_z = z;
//	}
//
//	vec3 vec3::getPosition() {
//		return *this;
//	}
//
//	FEN_FLOAT_PRECI vec3::x() {
//		return _x;
//	}
//
//	FEN_FLOAT_PRECI vec3::y() {
//		return _y;
//	}
//
//	FEN_FLOAT_PRECI vec3::z() {
//		return _z;
//	}
//
//	vec2 vec3::xy() {
//		return vec2(_x, _y);
//	}
//
//	vec2 vec3::xz() {
//		return vec2(_x, _z);
//	}
//
//	vec2 vec3::yz() {
//		return vec2(_y, _z);
//	}
//
//	vec3 vec3::operator +(const vec3& vec) {
//		return vec3(_x + vec._x, _y + vec._y, _z + vec._z);
//	}
//
//	vec3& vec3::operator +=(const vec3& vec) {
//		this->_x += vec._x;
//		this->_y += vec._y;
//		this->_z += vec._z;
//		return *this;
//	}
//
//	vec3 vec3::operator -(const vec3& vec) {
//		return vec3(_x - vec._x, _y - vec._y, _z - vec._z);
//	}
//
//	vec3& vec3::operator -=(const vec3& vec) {
//		this->_x -= vec._x;
//		this->_y -= vec._y;
//		this->_z -= vec._z;
//		return *this;
//	}
//
//	FEN_FLOAT_PRECI vec3::operator *(const vec3& vec) {
//		return _x * vec._x + _y * vec._y + _z * vec._z;
//	}
//
//	vec3 vec3::operator *(const int& constant) {
//		return vec3(_x * constant, _y * constant, _z * constant);
//	}
//
//	vec3& vec3::operator *=(const int& constant) {
//		_x *= constant;
//		_y *= constant;
//		_z *= constant;
//		return *this;
//	}
//
//	vec3 vec3::operator *(const FEN_FLOAT_PRECI& constant) {
//		return vec3(_x * constant, _y * constant, _z * constant);
//	}
//
//	vec3& vec3::operator *=(const FEN_FLOAT_PRECI& constant) {
//		_x *= constant;
//		_y *= constant;
//		_z *= constant;
//		return *this;
//	}

}
