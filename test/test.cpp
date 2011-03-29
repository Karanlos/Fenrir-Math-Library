#include "FenrirMath.hpp"

using namespace fenm;

#include <iostream>
#include <fstream>

using namespace std;

int main() {

	vec3 v1(1,2,3);
//	mat3 m1(vec3(1,4,7),vec3(2,5,8),vec3(3,6,9));

	mat3 m1(vec3(1,2,3),vec3(4,5,6),vec3(7,8,9));
	mat3 m2 = m1;

	mat4 m4(vec4(1,2,3,4),vec4(5,6,7,8),vec4(9,10,11,12),vec4(13,14,15,16));
	mat4 m5 = m4;

	mat3 m3 = m1 * m2;
	mat4 m6 = m4 * m5;

	mat2 mm = mat2(vec2(1,2),vec2(3,4));

	mat2 mm2 = mm * mm;


	for(int i = 0; i < 3; i++)
		cout << m3(i,0) << " " << m3(i,1) << " " << m3(i,2) << endl;

	cout << endl;

	for(int i = 0; i < 4; i++)
		cout << m6(i,0) << " " << m6(i,1) << " " << m6(i,2) <<  " " << m6(i,3) << endl;

	cout << endl;

	for(int i = 0; i < 2; i++)
		cout << mm2(i,0) << " " << mm2(i,1) << endl;

	return 0;
}
