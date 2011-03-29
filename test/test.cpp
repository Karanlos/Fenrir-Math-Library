#include "FenrirMath.hpp"

using namespace fenm;

#include <iostream>
#include <fstream>

using namespace std;

int main() {

	mat4 m1(vec4(2,0,0,0), vec4(2,1,0,0), vec4(2,0,1,0), vec4(2,0,0,1));

	for(int i = 0; i < 4; i++)
		cout << m1(0,i) << " " << m1(1,i) << " " << m1(2,i) << " " << m1(3,i) << endl;

	m1 = inverse(m1);

	for(int i = 0; i < 4; i++)
		cout << m1(0,i) << " " << m1(1,i) << " " << m1(2,i) << " " << m1(3,i) << endl;


	return 0;
}
