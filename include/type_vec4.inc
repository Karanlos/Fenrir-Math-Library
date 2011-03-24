#include "type_vec4.h"
#include "type_vec2.h"
#include "type_vec3.h"

namespace fenm {

	template <typename _T>
	type_vec4<_T>::type_vec4() {
		_x = 0;
		_y = 0;
		_z = 0;
		_w = 0;
	}

	template <typename _T>
	type_vec4<_T>::type_vec4(_T x, _T y, _T z, _T w) {
		_x = x;
		_y = y;
		_z = z;
		_w = w;
	}

	template <typename _T>
	type_vec4<_T>::type_vec4(const type_vec2<_T>& vec, _T z, _T w) {
		_x = vec.x();
		_y = vec.y();
		_z = z;
		_w = w;
	}

	template <typename _T>
	type_vec4<_T>::type_vec4(const type_vec3<_T>& vec, _T w) {
		_x = vec.x();
		_y = vec.y();
		_z = vec.z();
		_w = w;
	}

	template <typename _T>
	type_vec4<_T>::type_vec4(const type_vec4<_T>& vec) {
		_x = vec._x;
		_y = vec._y;
		_z = vec._z;
		_w = vec._w;
	}

	template <typename _T>
	type_vec4<_T>::~type_vec4() {
		
	}

	template <typename _T>
	void type_vec4<_T>::setPosition(_T x, _T y, _T z, _T w) {
		_x = x;
		_y = y;
		_z = z;
		_w = w;
	}

	template <typename _T>
	void type_vec4<_T>::setPosition(const type_vec2<_T>& vec, _T z, _T w) {
		_x = vec.x();
		_y = vec.y();
		_z = z;
		_w = w;
	}

	template <typename _T>
	void type_vec4<_T>::setPosition(const type_vec3<_T>& vec, _T w) {
		_x = vec.x();
		_y = vec.y();
		_z = vec.z();
		_w = w;
	}

	template <typename _T>
	void type_vec4<_T>::setPosition(const type_vec4<_T>& vec) {
		_x = vec._x;
		_y = vec._y;
		_z = vec._z;
		_w = vec._w;
	}

	template <typename _T>
	void type_vec4<_T>::setX(_T x) {
		_x = x;
	}

	template <typename _T>
	void type_vec4<_T>::setY(_T y) {
		_y = y;
	}

	template <typename _T>
	void type_vec4<_T>::setZ(_T z) {
		_z = z;
	}

	template <typename _T>
	void type_vec4<_T>::setW(_T w) {
		_w = w;
	}

	template <typename _T>
	type_vec4<_T> type_vec4<_T>::getPosition() {
		return type_vec4<_T>(_x, _y, _z, _w);
	}

	template <typename _T>
	_T type_vec4<_T>::x() {
		return _x;
	}

	template <typename _T>
	_T type_vec4<_T>::y() {
		return _y;
	}

	template <typename _T>
	_T type_vec4<_T>::z() {
		return _z;
	}

	template <typename _T>
	_T type_vec4<_T>::w() {
		return _w;
	}

	template <typename _T>
	type_vec2<_T> type_vec4<_T>::xy() {
		return type_vec2<_T>(_x, _y);
	}

	template <typename _T>
	type_vec2<_T> type_vec4<_T>::xz() {
		return type_vec2<_T>(_x, _z);
	}

	template <typename _T>
	type_vec2<_T> type_vec4<_T>::xw() {
		return type_vec2<_T>(_x, _w);
	}

	template <typename _T>
	type_vec2<_T> type_vec4<_T>::yz() {
		return type_vec2<_T>(_y, _z);
	}

	template <typename _T>
	type_vec2<_T> type_vec4<_T>::yw() {
		return type_vec2<_T>(_y, _w);
	}

	template <typename _T>
	type_vec2<_T> type_vec4<_T>::zw() {
		return type_vec2<_T>(_z, _w);
	}

	template <typename _T>
	type_vec3<_T> type_vec4<_T>::xyz() {
		return type_vec3<_T>(_z, _y, _z);
	}

	template <typename _T>
	type_vec3<_T> type_vec4<_T>::xyw() {
		return type_vec3<_T>(_z, _y, _w);
	}

	template <typename _T>
	type_vec3<_T> type_vec4<_T>::xzw() {
		return type_vec3<_T>(_x, _y, _w);
	}

	template <typename _T>
	type_vec3<_T> type_vec4<_T>::yzw() {
		return type_vec3<_T>(_y, _z, _w);
	}

	template <typename _T>
	type_vec4<_T> type_vec4<_T>::operator +(const type_vec4<_T>& vec) {
		return type_vec4<_T>(_x + vec._x, _y + vec._y, _z + vec._z, _w + vec._w);
	}

	template <typename _T>
	type_vec4<_T>& type_vec4<_T>::operator +=(const type_vec4<_T>& vec) {
		_x += vec._x;
		_y += vec._y;
		_z += vec._z;
		_w += vec._w;
		return *this;
	}

	template <typename _T>
	type_vec4<_T> type_vec4<_T>::operator -(const type_vec4<_T>& vec) {
		return type_vec4<_T>(_x - vec._x, _y - vec._y, _z - vec._z, _w - vec._w);
	}

	template <typename _T>
	type_vec4<_T>& type_vec4<_T>::operator -=(const type_vec4<_T>& vec) {
		_x -= vec._x;
		_y -= vec._y;
		_z -= vec._z;
		_w -= vec._w;
		return *this;
	}

	template <typename _T>
	_T type_vec4<_T>::operator *(const type_vec4<_T>& vec) {
		return _x * vec._x + _y * vec._y + _z * vec._z + _w * vec._w;
	}

	template <typename _T>
	type_vec4<_T> type_vec4<_T>::operator *(const long& constant) {
		return type_vec4(_x * constant, _y * constant+ _z * constant, _w * constant);
	}

	template <typename _T>
	type_vec4<_T>& type_vec4<_T>::operator *=(const long& constant) {
		_x *= constant;
		_y *= constant;
		_z *= constant;
		_w *= constant;
		return *this;
	}

	template <typename _T>
	type_vec4<_T> type_vec4<_T>::operator *(const double& constant) {
		return type_vec4(_x * constant, _y * constant+ _z * constant, _w * constant);
	}

	template <typename _T>
	type_vec4<_T>& type_vec4<_T>::operator *=(const double& constant) {
		_x *= constant;
		_y *= constant;
		_z *= constant;
		_w *= constant;
		return *this;
	}

}
