#include "vec4.h"

namespace FenM {

	vec4::vec4() {
		x = 0;
		y = 0;
		z = 0;
	}

	vec4::vec4(float x, float y, float z) {
		this->x = x;
		this->y = y;
		this->z = z;
	}

	vec4::~vec4() {
	}

	void vec4::setPosition(float x, float y, float z) {
		this->x = x;
		this->y = y;
		this->z = z;
	}

	void vec4::setPosition(vec4 vec) {
		x = vec.x;
		y = vec.y;
		z = vec.z;
	}

	void vec4::setX(float x) {
		this->x = x;
	}

	void vec4::setY(float y) {
		this->y = y;
	}

	void vec4::setZ(float z) {
		this->z = z;
	}

	vec4 vec4::getPosition() {
		return *this;
	}

	float vec4::getX() {
		return x;
	}

	float vec4::getY() {
		return y;
	}

	float vec4::getZ() {
		return z;
	}

	float vec4::getW() {
		return w;
	}

	vec4 vec4::operator +(const vec4& vec) {
		return vec4(x + vec.x, y + vec.y, z + vec.z, w + vec.w);
	}

	vec4& vec4::operator +=(const vec4& vec) {
		x += vec.x;
		y += vec.y;
		z += vec.z;
		w += vec.w;
		return *this;
	}

	vec4 vec4::operator -(const vec4& vec) {
		return vec4(x - vec.x, y - vec.y, z - vec.z, w - vec.w);
	}

	vec4& vec4::operator -=(const vec4& vec) {
		this->x -= vec.x;
		this->y -= vec.y;
		this->z -= vec.z;
		this->w -= vec.w;
		return *this;
	}

	float vec4::operator *(const vec4& vec) {
		return x * vec.x + y * vec.y + z * vec.z + w * vec.w;
	}

	vec4 vec4::operator *(const int& constant) {
		return vec4(x * constant, y * constant, z * constant, w * constant);
	}

	vec4& vec4::operator *=(const int& constant) {
		x *= constant;
		y *= constant;
		z *= constant;
		w *= constant;
		return *this;
	}

	vec4 vec4::operator *(const float& constant) {
		return vec4(x * constant, y * constant, z * constant, w * constant);
	}

	vec4& Vector3Df::operator *=(const float& constant) {
		x *= constant;
		y *= constant;
		z *= constant;
		w *= constant;
		return *this;
	}

}
