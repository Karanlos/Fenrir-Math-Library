#include "type_vec3.h"
#include "type_vec2.h"

namespace FenM {

	vec3::vec3() {
		_x = 0;
		_y = 0;
		_z = 0;
	}

	vec3::vec3(FEN_FLOAT_PRECI x, FEN_FLOAT_PRECI y, FEN_FLOAT_PRECI z) {
		this->_x = x;
		this->_y = y;
		this->_z = z;
	}

	vec3::vec3(vec2 vec, FEN_FLOAT_PRECI z) {
		this->_x = vec.x();
		this->_y = vec.y();
		this->_z = z;
	}

	vec3::~vec3() {
	}

	void vec3::setPosition(FEN_FLOAT_PRECI x, FEN_FLOAT_PRECI y, FEN_FLOAT_PRECI z) {
		this->_x = x;
		this->_y = y;
		this->_z = z;
	}

	void vec3::setPosition(vec3 vec) {
		_x = vec._x;
		_y = vec._y;
		_z = vec._z;
	}

	void vec3::setX(FEN_FLOAT_PRECI x) {
		this->_x = x;
	}

	void vec3::setY(FEN_FLOAT_PRECI y) {
		this->_y = y;
	}

	void vec3::setZ(FEN_FLOAT_PRECI z) {
		this->_z = z;
	}

	vec3 vec3::getPosition() {
		return *this;
	}

	FEN_FLOAT_PRECI vec3::x() {
		return _x;
	}

	FEN_FLOAT_PRECI vec3::y() {
		return _y;
	}

	FEN_FLOAT_PRECI vec3::z() {
		return _z;
	}

	vec2 vec3::xy() {
		return vec2(_x, _y);
	}

	vec2 vec3::xz() {
		return vec2(_x, _z);
	}

	vec2 vec3::yz() {
		return vec2(_y, _z);
	}

	vec3 vec3::operator +(const vec3& vec) {
		return vec3(_x + vec._x, _y + vec._y, _z + vec._z);
	}

	vec3& vec3::operator +=(const vec3& vec) {
		this->_x += vec._x;
		this->_y += vec._y;
		this->_z += vec._z;
		return *this;
	}

	vec3 vec3::operator -(const vec3& vec) {
		return vec3(_x - vec._x, _y - vec._y, _z - vec._z);
	}

	vec3& vec3::operator -=(const vec3& vec) {
		this->_x -= vec._x;
		this->_y -= vec._y;
		this->_z -= vec._z;
		return *this;
	}

	FEN_FLOAT_PRECI vec3::operator *(const vec3& vec) {
		return _x * vec._x + _y * vec._y + _z * vec._z;
	}

	vec3 vec3::operator *(const int& constant) {
		return vec3(_x * constant, _y * constant, _z * constant);
	}

	vec3& vec3::operator *=(const int& constant) {
		_x *= constant;
		_y *= constant;
		_z *= constant;
		return *this;
	}

	vec3 vec3::operator *(const FEN_FLOAT_PRECI& constant) {
		return vec3(_x * constant, _y * constant, _z * constant);
	}

	vec3& vec3::operator *=(const FEN_FLOAT_PRECI& constant) {
		_x *= constant;
		_y *= constant;
		_z *= constant;
		return *this;
	}

}
