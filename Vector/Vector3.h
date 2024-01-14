// Vector3.h

#pragma once

#include "Vector.cpp"

// Class for a 3D vector. Inherits Vector template class.
class Vector3 : public Vector<3> {
public:
    Vector3 cross(const Vector3& v);
};