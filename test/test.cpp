#include "FenrirMath.hpp"

using namespace fenm;

#include <iostream>
#include <fstream>

using namespace std;

int main() {

	mat3 m1(vec3(2,0,0), vec3(2,1,0), vec3(2,0,1));
	mat3 m2(vec3(1,2,0), vec3(0,2,0), vec3(0,2,1));
	mat3 m3(vec3(1,0,2), vec3(0,1,2), vec3(0,0,2));

	mat2 m4(vec2(2,0),vec2(2,1));
	mat2 m5(vec2(1,2),vec2(0,2));

	m1 = inverse(m1);
	m2 = inverse(m2);
	m3 = inverse(m3);
	m4 = inverse(m4);
	m5 = inverse(m5);

	for(int i = 0; i < 3; i++)
		cout << m1(0,i) << " " << m1(1,i) << " " << m1(2,i) << endl;
	cout << endl;
	for(int i = 0; i < 3; i++)
		cout << m2(0,i) << " " << m2(1,i) << " " << m2(2,i) << endl;
	cout << endl;
	for(int i = 0; i < 3; i++)
		cout << m3(0,i) << " " << m3(1,i) << " " << m3(2,i) << endl;
	cout << endl;
	for(int i = 0; i < 2; i++)
		cout << m4(0,i) << " " << m4(1,i) << endl;
	cout << endl;
	for(int i = 0; i < 2; i++)
		cout << m5(0,i) << " " << m5(1,i) << endl;


	return 0;
}
