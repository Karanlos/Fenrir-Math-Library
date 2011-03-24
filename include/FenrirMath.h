#ifndef FENRIRMATH_H
#define	FENRIRMATH_H

#include "type_vec2.h"
#include "type_vec3.h"
#include "type_vec4.h"

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

