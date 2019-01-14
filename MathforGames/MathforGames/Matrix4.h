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

	void rotateX(float radian);
	void rotateY(float radian);
	void rotateZ(float radian);
	void rotateW(float radian);

	matrix4 operator * (const matrix4& otherMatrix) const;

	Vector4 operator * (Vector4 vector);

	const Vector4& operator[] (int index) const;
};