#include "FenrirMath.h"

using fenm::vec2;
using fenm::vec3;
using fenm::vec4;

#include <iostream>

using namespace std;

bool testVec2Add() {
	vec2 v1(1.0f, 2.0f), v2(3.0f, 5.0f);

	return vec2(4.0f, 7.0f) == (v1 + v2);
}



int main() {

	cout << testVec2Add() << endl;

	return 0;
}
