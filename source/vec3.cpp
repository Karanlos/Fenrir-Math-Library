#include "vec3.h"

namespace FenM {

	vec3::vec3() {
		x = 0;
		y = 0;
		z = 0;
	}

	vec3::vec3(FEN_FLOAT_PRECI x, FEN_FLOAT_PRECI y, FEN_FLOAT_PRECI z) {
		this->x = x;
		this->y = y;
		this->z = z;
	}

	vec3::~vec3() {
	}

	void vec3::setPosition(FEN_FLOAT_PRECI x, FEN_FLOAT_PRECI y, FEN_FLOAT_PRECI z) {
		this->x = x;
		this->y = y;
		this->z = z;
	}

	void vec3::setPosition(vec3 vec) {
		x = vec.x;
		y = vec.y;
		z = vec.z;
	}

	void vec3::setX(FEN_FLOAT_PRECI x) {
		this->x = x;
	}

	void vec3::setY(FEN_FLOAT_PRECI y) {
		this->y = y;
	}

	void vec3::setZ(FEN_FLOAT_PRECI z) {
		this->z = z;
	}

	vec3 vec3::getPosition() {
		return *this;
	}

	FEN_FLOAT_PRECI vec3::getX() {
		return x;
	}

	FEN_FLOAT_PRECI vec3::getY() {
		return y;
	}

	FEN_FLOAT_PRECI vec3::getZ() {
		return z;
	}

	vec3 vec3::operator +(const vec3& vec) {
		return vec3(x + vec.x, y + vec.y, z + vec.z);
	}

	vec3& vec3::operator +=(const vec3& vec) {
		this->x += vec.x;
		this->y += vec.y;
		this->z += vec.z;
		return *this;
	}

	vec3 vec3::operator -(const vec3& vec) {
		return vec3(x - vec.x, y - vec.y, z - vec.z);
	}

	vec3& vec3::operator -=(const vec3& vec) {
		this->x -= vec.x;
		this->y -= vec.y;
		this->z -= vec.z;
		return *this;
	}

	FEN_FLOAT_PRECI vec3::operator *(const vec3& vec) {
		return x * vec.x + y * vec.y + z * vec.z;
	}

	vec3 vec3::operator *(const int& constant) {
		return vec3(x * constant, y * constant, z * constant);
	}

	vec3& vec3::operator *=(const int& constant) {
		x *= constant;
		y *= constant;
		z *= constant;
		return *this;
	}

	vec3 vec3::operator *(const FEN_FLOAT_PRECI& constant) {
		return vec3(x * constant, y * constant, z * constant);
	}

	vec3& vec3::operator *=(const FEN_FLOAT_PRECI& constant) {
		x *= constant;
		y *= constant;
		z *= constant;
		return *this;
	}

}
