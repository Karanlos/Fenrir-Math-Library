#ifndef FENRIRMATH_H
#define	FENRIRMATH_H

#include <cmath>

#include "type_vec2.h"
#include "type_vec3.h"
#include "type_vec4.h"

#define r() x()
#define g() y()
#define b() z()
#define a() w()

#define s() x()
#define t() y()
#define p() z()
#define q() w()

#define rg() xy()
#define rb() xz()
#define ra() xw()
#define gb() yz()
#define ga() yw()
#define ba() zw()

#define st() xy()
#define sp() xz()
#define sq() xw()
#define tp() yz()
#define tq() yw()
#define pq() zw()

#define rgb() xyz()
#define rga() xyw()
#define rba() xzw()
#define gba() yzw()

#define stp() xyz()
#define stq() xyw()
#define spq() xzw()
#define tpq() yzw()


namespace fenm {
	typedef type_vec2<float> vec2;
	typedef type_vec3<float> vec3;
	typedef type_vec4<float> vec4;

	typedef type_vec2<double> dvec2;
	typedef type_vec3<double> dvec3;
	typedef type_vec4<double> dvec4;

	typedef type_vec2<int> ivec2;
	typedef type_vec3<int> ivec3;
	typedef type_vec4<int> ivec4;
}

#endif	/* FENRIRMATH_H */

