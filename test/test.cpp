#include "FenrirMath.hpp"

using namespace fenm;

#include <iostream>
#include <fstream>

using namespace std;

int main() {

	mat4 m4(vec4(1,2,3,4),vec4(5,6,7,8),vec4(9,10,11,12),vec4(13,14,15,16));

	vec4 v4(2,4,3,5);

	vec4 mm2 = m4 * v4;

		cout << mm2.x() << " " << mm2.y() <<  " " << mm2.z()<<  " " << mm2.w() << endl;

	return 0;
}
