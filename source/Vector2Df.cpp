#include "Vector3Df.h"
#include "Vector2Df.h"

namespace FenrirMath {

	Vector2Df::Vector2Df() {
		x = 0;
		y = 0;
	}

	Vector2Df::Vector2Df(float x, float y) {
		this->x = x;
		this->y = y;
	}

	Vector2Df::~Vector2Df() {
	}

	void Vector2Df::setPosition(float x, float y) {
		this->x = x;
		this->y = y;
	}

	void Vector2Df::setPosition(Vector2Df vec) {
		x = vec.x;
		y = vec.y;
	}

	void Vector2Df::setX(float x) {
		this->x = x;
	}

	void Vector2Df::setY(float y) {
		this->y = y;
	}

	Vector2Df Vector2Df::getPosition() {
		return *this;
	}

	float Vector2Df::getX() {
		return x;
	}

	float Vector2Df::getY() {
		return y;
	}

	Vector2Df Vector2Df::operator +(const Vector2Df& vec) {
		return Vector2Df(x + vec.x, y + vec.y);
	}

	Vector2Df& Vector2Df::operator +=(const Vector2Df& vec) {
		this->x += vec.x;
		this->y += vec.y;
		return *this;
	}

	Vector2Df Vector2Df::operator -(const Vector2Df& vec) {
		return Vector2Df(x - vec.x, y - vec.y);
	}

	Vector2Df& Vector2Df::operator -=(const Vector2Df& vec) {
		this->x -= vec.x;
		this->y -= vec.y;
		return *this;
	}

	float Vector2Df::operator *(const Vector2Df& vec) {
		return x * vec.x + y * vec.y;
	}

	Vector2Df Vector2Df::operator *(const int& constant) {
		return Vector2Df(x * constant, y * constant);
	}

	Vector2Df& Vector2Df::operator *=(const int& constant) {
		x *= constant;
		y *= constant;
		return *this;
	}

	Vector2Df Vector2Df::operator *(const float& constant) {
		return Vector2Df(x * constant, y * constant);
	}

	Vector2Df& Vector2Df::operator *=(const float& constant) {
		x *= constant;
		y *= constant;
		return *this;
	}

}
