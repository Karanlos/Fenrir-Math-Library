#ifndef FENRIRMATH_H
#define	FENRIRMATH_H

#include "type_vec2.h"
#include "type_vec3.h"
#include "type_vec4.h"

namespace fenm {

//	typedef type_vec2<DEFAULT_PRECI> vec2;
//	typedef type_vec3<DEFAULT_PRECI> vec3;
//	typedef type_vec4<DEFAULT_PRECI> vec4;

#define fenm::vec2 fenm::type_vec2<DEFAULT_PRECI>;

}

#endif	/* FENRIRMATH_H */

