#include "vec2.h"

namespace FenM {

	vec2::vec2() {
		x = 0;
		y = 0;
	}

	vec2::vec2(float x, float y) {
		this->x = x;
		this->y = y;
	}

	vec2::~vec2() {
	}

	void vec2::setPosition(float x, float y) {
		this->x = x;
		this->y = y;
	}

	void vec2::setPosition(vec2 vec) {
		x = vec.x;
		y = vec.y;
	}

	void vec2::setX(float x) {
		this->x = x;
	}

	void vec2::setY(float y) {
		this->y = y;
	}

	vec2 vec2::getPosition() {
		return *this;
	}

	float vec2::getX() {
		return x;
	}

	float vec2::getY() {
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

	float vec2::operator *(const vec2& vec) {
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

	vec2 vec2::operator *(const float& constant) {
		return vec2(x * constant, y * constant);
	}

	vec2& vec2::operator *=(const float& constant) {
		x *= constant;
		y *= constant;
		return *this;
	}

}
