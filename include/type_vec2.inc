#include "FenrirMath.h"

namespace fenm {

	template <typename _T>
	type_vec2<_T>::type_vec2() {

	}

	template <typename _T>
	type_vec2<_T>::type_vec2(_T x, _T y) {
		_x = x;
		_y = y;
	}

	template <typename _T>
	type_vec2<_T>::type_vec2(const type_vec2<_T>& v) {
		_x = v._x;
		_y = v._y;
	}

	template <typename _T>
	type_vec2<_T>::~type_vec2() {

	}

	template <typename _T>
	void type_vec2<_T>::setPosition(_T x, _T y) {
		_x = x;
		_y = y;
	}

	template <typename _T>
	void type_vec2<_T>::setPosition(const type_vec2<_T>& v) {
		_x = v._x;
		_y = v._y;
	}

	template <typename _T>
	void type_vec2<_T>::setX(_T x) {
		_x = x;
	}

	template <typename _T>
	void type_vec2<_T>::setY(_T y) {
		_y = y;
	}

	template <typename _T>
	type_vec2<_T> type_vec2<_T>::getPosition() {
		return *this;
	}

	template <typename _T>
	const _T type_vec2<_T>::x() {
		return _x;
	}

	template <typename _T>
	const _T type_vec2<_T>::y() {
		return _y;
	}

	template <typename _T>
	type_vec2<_T> type_vec2<_T>::operator +(const type_vec2<_T>& v) {
		return type_vec2<_T>(_x + v._x, _y + v._y);
	}
	
	template <typename _T>
	type_vec2<_T>& type_vec2<_T>::operator +=(const type_vec2<_T>& v) {
		this->_x += v._x;
		this->_y += v._y;
		return *this;
	}

	template <typename _T>
	type_vec2<_T> type_vec2<_T>::operator -(const type_vec2<_T>& v) {
		return type_vec2<_T>(_x - v._x, _y - v._y);
	}

	template <typename _T>
	type_vec2<_T>& type_vec2<_T>::operator -=(const type_vec2<_T>& v) {
		this->_x -= v._x;
		this->_y -= v._y;
		return *this;
	}

	template <typename _T>
	_T type_vec2<_T>::operator *(const type_vec2<_T>& v) {
		return _x * v._x + _y * v._y;
	}

	template <typename _T>
	type_vec2<_T> type_vec2<_T>::operator *(const long& constant) {
		return type_vec2<_T>(_x * constant, _y * constant);
	}

	template <typename _T>
	type_vec2<_T>& type_vec2<_T>::operator *=(const long& constant) {
		_x *= constant;
		_y *= constant;
		*this;
	}

	template <typename _T>
	type_vec2<_T> type_vec2<_T>::operator *(const double& constant) {
		return type_vec2<_T>(_x * constant, _y * constant);
	}

	template <typename _T>
	type_vec2<_T>& type_vec2<_T>::operator *=(const double& constant) {
		_x *= constant;
		_y *= constant;
		*this;
	}

	template <typename _T>
	bool type_vec2<_T>::operator ==(const type_vec2<_T>& v) {
		return (_x == v._x && _y == v._y);
	}

	template <typename _T>
	bool type_vec2<_T>::operator !=(const type_vec2<_T>& v) {
		return (_x != v._x || _y != v._y);
	}

	template <typename _T>
	_T length(type_vec2<_T> v) {
		return sqrt(v.x() * v.x() + v.y() * v.y());
	}

	template <typename _T>
	_T dot(type_vec2<_T> v1, type_vec2<_T> v2) {
		return v1.x() * v2.x() + v1.y() * v2.y();
	}

	template <typename _T2>
	std::ostream& operator<<(std::ostream& os, const type_vec2<_T2>& v) {
		os << "vec2("  << v._x << ", " << v._y << ")";
		return os;
	}

}
