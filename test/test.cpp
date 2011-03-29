#include "FenrirMath.hpp"

using namespace fenm;

#include <iostream>
#include <fstream>

using namespace std;

int main() {

	mat4 m1(vec4(2,0,0,0), vec4(2,1,0,0), vec4(2,0,1,0), vec4(2,0,0,1));
	mat4 m2(vec4(1,2,0,0), vec4(0,2,0,0), vec4(0,2,1,0), vec4(0,2,0,1));
	mat4 m3(vec4(1,0,2,0), vec4(0,1,2,0), vec4(0,0,2,0), vec4(0,0,2,1));
	mat4 m4(vec4(1,0,0,2), vec4(0,1,0,2), vec4(0,0,1,2), vec4(0,0,0,2));

	m1 = inverse(m1);
	m2 = inverse(m2);
	m3 = inverse(m3);
	m4 = inverse(m4);

	for(int i = 0; i < 4; i++)
		cout << m1(0,i) << " " << m1(1,i) << " " << m1(2,i) << " " << m1(3,i) << endl;
	cout << endl;
	for(int i = 0; i < 4; i++)
		cout << m2(0,i) << " " << m2(1,i) << " " << m2(2,i) << " " << m2(3,i) << endl;
	cout << endl;
	for(int i = 0; i < 4; i++)
		cout << m3(0,i) << " " << m3(1,i) << " " << m3(2,i) << " " << m3(3,i) << endl;
	cout << endl;
	for(int i = 0; i < 4; i++)
		cout << m4(0,i) << " " << m4(1,i) << " " << m4(2,i) << " " << m4(3,i) << endl;


	return 0;
}
