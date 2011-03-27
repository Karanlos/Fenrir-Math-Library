#include "FenrirMath.h"

using namespace fenm;

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

//	testVec2Add(vec2(1.0f, 2.0f), vec2(2.0f, 5.0f), vec2(3.0f, 7.0f));
//	testVec2Sub(vec2(1.0f, 2.0f), vec2(2.0f, 5.0f), vec2(-1.0f, -3.0f));
//	testVec2MultConst(vec2(1.0f, 2.0f), 2, vec2(2.0f, 4.0f));
//
//	vec3 v1(4.0f, 2.0f, 3.0f);
//	vec3 v2(2.6f, 1.5f, 2.2f);
//	float g[] = {2,0,0,0,
//				 2,1,0,0,
//				 2,0,1,0,
//				 2,0,0,1};
	mat4 m1(vec4(2,0,0,0), vec4(2,1,0,0), vec4(2,0,1,0), vec4(2,0,0,1));
	float g2[] = {2.0f,3.0f,3.0f,2.0f,1.0f,3.0f,2.0f,3.0f,1.0f};
	mat3 m2(g2);
//
//	cout << m1[0] << " " << m1[4] << " " << m1[8] << " " << m1[12] << "\n\n" << endl;
//
//	for(int i = 0; i < 4; i++)
//		cout << m1[i] << " " << m1[i + 4] << " " << m1[i + 8] << " " << m1[i + 12] << "\n\n" << endl;
//
//	m1 = inverse(m1);
////	m1 = transpose(m1);
//
//	for(int i = 0; i < 4; i++)
//		cout << m1[i * 4] << " " << m1[i * 4 + 1] << " " << m1[i * 4 + 2] << " " << m1[i * 4 + 3] << "\n\n" << endl;
//
//	m1 = identityMatrix(m1);
//
//	for(int i = 0; i < 4; i++)
//		cout << m1[i * 4] << " " << m1[i * 4 + 1] << " " << m1[i * 4 + 2] << " " << m1[i * 4 + 3] << "\n\n" << endl;
//
//	cout << "dot(v1, v2): " << dot(v1, v2) << "  length(v1): " << length(v1) << "   " << v1 << endl;

	for(int i = 0; i < 3; i++)
		cout << m2[i * 4] << " " << m2[i * 4 + 1] << " " << m2[i * 4 + 2] << endl;

	cout << determinant(m1) << endl;

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
