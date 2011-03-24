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

//	f.close();

	return 0;
}
