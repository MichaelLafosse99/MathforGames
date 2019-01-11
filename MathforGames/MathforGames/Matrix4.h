#pragma once
#include "Vector4.h"
#include <cmath>

//set rotate x,y,z
//matrix x matrix
//matrix x vector

class matrix4
{
public:

	Vector4 axis[4];
	float data[4][4];

	matrix4();

	matrix4 operator * (const matrix4& otherMatrix) const;

	matrix4 operator * (const Vector4 vector) const;

	const Vector4& operator[] (int index) const;
};