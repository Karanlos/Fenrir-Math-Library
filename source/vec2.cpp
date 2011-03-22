#include "vec2.h"

namespace FenM {

	vec2::vec2() {
		x = 0;
		y = 0;
	}

	vec2::vec2(FEN_FLOAT_PRECI x, FEN_FLOAT_PRECI y) {
		this->x = x;
		this->y = y;
	}

	vec2::~vec2() {
	}

	void vec2::setPosition(FEN_FLOAT_PRECI x, FEN_FLOAT_PRECI y) {
		this->x = x;
		this->y = y;
	}

	void vec2::setPosition(vec2 vec) {
		x = vec.x;
		y = vec.y;
	}

	void vec2::setX(FEN_FLOAT_PRECI x) {
		this->x = x;
	}

	void vec2::setY(FEN_FLOAT_PRECI y) {
		this->y = y;
	}

	vec2 vec2::getPosition() {
		return *this;
	}

	FEN_FLOAT_PRECI vec2::getX() {
		return x;
	}

	FEN_FLOAT_PRECI vec2::getY() {
		return y;
	}

	vec2 vec2::operator +(const vec2& vec) {
		return vec2(x + vec.x, y + vec.y);
	}

	vec2& vec2::operator +=(const vec2& vec) {
		this->x += vec.x;
		this->y += vec.y;
		return *this;
	}

	vec2 vec2::operator -(const vec2& vec) {
		return vec2(x - vec.x, y - vec.y);
	}

	vec2& vec2::operator -=(const vec2& vec) {
		this->x -= vec.x;
		this->y -= vec.y;
		return *this;
	}

	FEN_FLOAT_PRECI vec2::operator *(const vec2& vec) {
		return x * vec.x + y * vec.y;
	}

	vec2 vec2::operator *(const int& constant) {
		return vec2(x * constant, y * constant);
	}

	vec2& vec2::operator *=(const int& constant) {
		x *= constant;
		y *= constant;
		return *this;
	}

	vec2 vec2::operator *(const FEN_FLOAT_PRECI& constant) {
		return vec2(x * constant, y * constant);
	}

	vec2& vec2::operator *=(const FEN_FLOAT_PRECI& constant) {
		x *= constant;
		y *= constant;
		return *this;
	}

}
