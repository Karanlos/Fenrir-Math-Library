#include "Vector3Df.h"

namespace FenrirMath {

	Vector3Df::Vector3Df() {
		x = 0;
		y = 0;
		z = 0;
	}

	Vector3Df::Vector3Df(float x, float y, float z) {
		this->x = x;
		this->y = y;
		this->z = z;
	}

	Vector3Df::~Vector3Df() {
	}

	void Vector3Df::setPosition(float x, float y, float z) {
		this->x = x;
		this->y = y;
		this->z = z;
	}

	void Vector3Df::setPosition(Vector3Df vec) {
		x = vec.x;
		y = vec.y;
		z = vec.z;
	}

	void Vector3Df::setX(float x) {
		this->x = x;
	}

	void Vector3Df::setY(float y) {
		this->y = y;
	}

	void Vector3Df::setZ(float z) {
		this->z = z;
	}

	Vector3Df Vector3Df::getPosition() {
		return *this;
	}

	float Vector3Df::getX() {
		return x;
	}

	float Vector3Df::getY() {
		return y;
	}

	float Vector3Df::getZ() {
		return z;
	}

	Vector3Df Vector3Df::operator +(const Vector3Df& vec) {
		return Vector3Df(x + vec.x, y + vec.y, z + vec.z);
	}

	Vector3Df& Vector3Df::operator +=(const Vector3Df& vec) {
		this->x += vec.x;
		this->y += vec.y;
		this->z += vec.z;
		return *this;
	}

	Vector3Df Vector3Df::operator -(const Vector3Df& vec) {
		return Vector3Df(x - vec.x, y - vec.y, z - vec.z);
	}

	Vector3Df& Vector3Df::operator -=(const Vector3Df& vec) {
		this->x -= vec.x;
		this->y -= vec.y;
		this->z -= vec.z;
		return *this;
	}

	float Vector3Df::operator *(const Vector3Df& vec) {
		return x * vec.x + y * vec.y + z * vec.z;
	}

	Vector3Df Vector3Df::operator *(const int& constant) {
		return Vector3Df(x * constant, y * constant, z * constant);
	}

	Vector3Df Vector3Df::operator *(const float& constant) {
		return Vector3Df(x * constant, y * constant, z * constant);
	}

}
