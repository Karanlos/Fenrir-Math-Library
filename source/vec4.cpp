#include "vec4.h"
#include "vec2.h"
#include "vec3.h"

namespace FenM {

	vec4::vec4() {
		_x = 0;
		_y = 0;
		_z = 0;
		_w = 0;
	}

	vec4::vec4(FEN_FLOAT_PRECI x, FEN_FLOAT_PRECI y, FEN_FLOAT_PRECI z, FEN_FLOAT_PRECI w) {
		this->_x = x;
		this->_y = y;
		this->_z = z;
		this->_w = w;
	}

	vec4::vec4(vec2 vec, FEN_FLOAT_PRECI z, FEN_FLOAT_PRECI w) {
		this->_x = vec.x();
		this->_y = vec.y();
		this->_z = z;
		this->_w = w;
	}

	vec4::vec4(vec3 vec, FEN_FLOAT_PRECI w) {
		this->_x = vec.x();
		this->_y = vec.y();
		this->_z = vec.z();
		this->_w = w;
	}

	vec4::~vec4() {
	}

	void vec4::setPosition(FEN_FLOAT_PRECI x, FEN_FLOAT_PRECI y, FEN_FLOAT_PRECI z, FEN_FLOAT_PRECI w) {
		this->_x = x;
		this->_y = y;
		this->_z = z;
		this->_w = w;
	}


	void vec4::setPosition(vec4 vec) {
		_x = vec._x;
		_y = vec._y;
		_z = vec._z;
		_w = vec._w;
	}


	void vec4::setPosition(vec3 vec, FEN_FLOAT_PRECI w) {
		_x = vec.x();
		_y = vec.y();
		_z = vec.z();
		_w = w;
	}


	void vec4::setPosition(vec2 vec, FEN_FLOAT_PRECI z, FEN_FLOAT_PRECI w) {
		_x = vec.x();
		_y = vec.y();
		_z = z;
		_w = w;
	}

	void vec4::setX(FEN_FLOAT_PRECI z) {
		_x = z;
	}

	void vec4::setY(FEN_FLOAT_PRECI y) {
		_y = y;
	}

	void vec4::setZ(FEN_FLOAT_PRECI z) {
		_z = z;
	}

	void vec4::setW(FEN_FLOAT_PRECI w) {
		_w = w;
	}

	vec4 vec4::getPosition() {
		return *this;
	}



	// Single values getters
	FEN_FLOAT_PRECI vec4::x() {
		return _x;
	}

	FEN_FLOAT_PRECI vec4::y() {
		return _y;
	}

	FEN_FLOAT_PRECI vec4::z() {
		return _z;
	}

	FEN_FLOAT_PRECI vec4::w() {
		return _w;
	}

	// vec2 value getters
	vec2 vec4::xy() {
		return vec2(_x, _y);
	}
	
	vec2 vec4::xz() {
		return vec2(_x, _z);
	}
	
	vec2 vec4::xw() {
		return vec2(_x, _w);
	}
	
	vec2 vec4::yz() {
		return vec2(_y, _z);
	}

	vec2 vec4::yw() {
		return vec2(_x, _y);
	}

	vec2 vec4::zw() {
		return vec2(_z, _w);
	}

	// vec3 value getters
	vec3 vec4::xyz() {
		return vec3(_x, _y, _z);
	}

	vec3 vec4::xyw() {
		return vec3(_x, _y, _w);
	}

	vec3 vec4::yzw() {
		return vec3(_y, _z, _w);
	}

	// Operators
	vec4 vec4::operator +(const vec4& vec) {
		return vec4(_x + vec._x, _y + vec._y, _z + vec._z, _w + vec._w);
	}

	vec4& vec4::operator +=(const vec4& vec) {
		_x += vec._x;
		_y += vec._y;
		_z += vec._z;
		_w += vec._w;
		return *this;
	}

	vec4 vec4::operator -(const vec4& vec) {
		return vec4(_x - vec._x, _y - vec._y, _z - vec._z, _w - vec._w);
	}

	vec4& vec4::operator -=(const vec4& vec) {
		this->_x -= vec._x;
		this->_y -= vec._y;
		this->_z -= vec._z;
		this->_w -= vec._w;
		return *this;
	}

	FEN_FLOAT_PRECI vec4::operator *(const vec4& vec) {
		return _x * vec._x + _y * vec._y + _z * vec._z + _w * vec._w;
	}

	vec4 vec4::operator *(const int& constant) {
		return vec4(_x * constant, _y * constant, _z * constant, _w * constant);
	}

	vec4& vec4::operator *=(const int& constant) {
		_x *= constant;
		_y *= constant;
		_z *= constant;
		_w *= constant;
		return *this;
	}

	vec4 vec4::operator *(const FEN_FLOAT_PRECI& constant) {
		return vec4(_x * constant, _y * constant, _z * constant, _w * constant);
	}

	vec4& vec4::operator *=(const FEN_FLOAT_PRECI& constant) {
		_x *= constant;
		_y *= constant;
		_z *= constant;
		_w *= constant;
		return *this;
	}

}
