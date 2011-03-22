#include "vec2.h"

namespace FenM {

	vec2::vec2() {
		_x = 0;
		_y = 0;
	}

	vec2::vec2(FEN_FLOAT_PRECI x, FEN_FLOAT_PRECI y) {
		this->_x = x;
		this->_y = y;
	}

	vec2::~vec2() {
	}

	void vec2::setPosition(FEN_FLOAT_PRECI x, FEN_FLOAT_PRECI y) {
		this->_x = x;
		this->_y = y;
	}

	void vec2::setPosition(vec2 vec) {
		_x = vec._x;
		_y = vec._y;
	}

	void vec2::setX(FEN_FLOAT_PRECI x) {
		this->_x = x;
	}

	void vec2::setY(FEN_FLOAT_PRECI y) {
		this->_y = y;
	}

	vec2 vec2::getPosition() {
		return *this;
	}

	FEN_FLOAT_PRECI vec2::x() {
		return _x;
	}

	FEN_FLOAT_PRECI vec2::y() {
		return _y;
	}

	vec2 vec2::operator +(const vec2& vec) {
		return vec2(_x + vec._x, _y + vec._y);
	}

	vec2& vec2::operator +=(const vec2& vec) {
		this->_x += vec._x;
		this->_y += vec._y;
		return *this;
	}

	vec2 vec2::operator -(const vec2& vec) {
		return vec2(_x - vec._x, _y - vec._y);
	}

	vec2& vec2::operator -=(const vec2& vec) {
		this->_x -= vec._x;
		this->_y -= vec._y;
		return *this;
	}

	FEN_FLOAT_PRECI vec2::operator *(const vec2& vec) {
		return _x * vec._x + _y * vec._y;
	}

	vec2 vec2::operator *(const int& constant) {
		return vec2(_x * constant, _y * constant);
	}

	vec2& vec2::operator *=(const int& constant) {
		_x *= constant;
		_y *= constant;
		return *this;
	}

	vec2 vec2::operator *(const FEN_FLOAT_PRECI& constant) {
		return vec2(_x * constant, _y * constant);
	}

	vec2& vec2::operator *=(const FEN_FLOAT_PRECI& constant) {
		_x *= constant;
		_y *= constant;
		return *this;
	}

}
