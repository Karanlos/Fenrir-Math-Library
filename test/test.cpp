#include "FenrirMath.h"

using fenm::vec2;
using fenm::vec3;
using fenm::vec4;

#include <iostream>
#include <fstream>

using namespace std;


void testVec2Add(vec2 v1, vec2 v2, vec2 result) {
	if((v1 + v2) != result)
		cout << "testVec2Add() Failure" << endl;
}

void testVec2Sub(vec2 v1, vec2 v2, vec2 result) {
	if((v1 - v2) != result)
		cout << "testVec2Sub() Failure" << endl;
}

void testVec2MultConst(vec2 v, float constant, vec2 result) {
	if((v * constant) != result)
		cout << "testVec2MulConst() Failure" << endl;
}

const char* trueFalse(bool tf) {
	return (tf) ? "True" : "False";
}

int main() {

//	ofstream f;
//	f.open("output.txt");
//	cout.rdbuf(f.rdbuf());

	testVec2Add(vec2(1.0f, 2.0f), vec2(2.0f, 5.0f), vec2(3.0f, 7.0f));
	testVec2Sub(vec2(1.0f, 2.0f), vec2(2.0f, 5.0f), vec2(-1.0f, -3.0f));
	testVec2MultConst(vec2(1.0f, 2.0f), 2, vec2(2.0f, 4.0f));

	cout << vec4(1.0f, 2.0f, 3.0f, 4.0f).s() << endl;
	cout << vec4(1.0f, 2.0f, 3.0f, 4.0f).t() << endl;
//	cout << vec3(vec2(2.34f, 35.34f), 3.0f).p() << endl;
	cout << vec4(1.0f, 2.0f, 3.0f, 4.0f).p() << endl;
	cout << vec4(1.0f, 2.0f, 3.0f, 4.0f).xy() << endl;
	cout << vec4(1.0f, 2.0f, 3.0f, 4.0f).sp() << endl;
	cout << vec4(1.0f, 2.0f, 3.0f, 4.0f).sq() << endl;
	cout << vec4(1.0f, 2.0f, 3.0f, 4.0f).tp() << endl;
	cout << vec4(1.0f, 2.0f, 3.0f, 4.0f).tq() << endl;
	cout << vec4(1.0f, 2.0f, 3.0f, 4.0f).pq() << endl;
	cout << vec4(1.0f, 2.0f, 3.0f, 4.220f).stp() << endl;
	cout << vec4(1.0f, 2.0f, 3.32320f, 4.340f).stq() << endl;
	cout << vec4(1.0f, 232.0f, 3.0f, 4.340f).spq() << endl;
	cout << vec4(1.0f, 2.0f, 3.0f, 4.340f).tpq() << endl;
	cout << vec4(1.0f, 2.0f, 3.0f, 4.4330f) << endl;

	const vec3 v(5,6,7);

	(const float)v.x();

//	f.close();

	return 0;
}
