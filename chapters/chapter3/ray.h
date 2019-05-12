#ifndef RAYH
#define RAYH
#include "vec.h"

class ray
{
    public:
        ray() {}
        ray(const vec3& a, const vec3& b) {A = a; B = b; }
        vec3 origin() const         {return A;}                         //origin of the ray
        vec3 direction() const      {return B;}                         //direction the ray is moving in 
        vec3 point_at_parameter(float t) const {return A + t*B;}        //the actual ray is defined as this function

        vec3 A;
        vec3 B;
};

#endif