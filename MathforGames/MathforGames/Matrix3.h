#pragma once
#include "Vector3.h"
#include <cmath>

//set rotate x,y,z
//matrix x matrix
//matrix x vector

class matrix3
{

public:

	//Vector3 xcol, ycol, zcol;
	//Vector3 xrow, yrow, zrow;
	Vector3 axis[3];
	float data[3][3];

	//constructor to initialize a matrix
	matrix3();

	void rotateX(float radian);
	void rotateY(float radian);
	void rotateZ(float radian);

	//operator for multiplying two matrices
	matrix3 operator * (const matrix3& otherMatrix) const;

	//operator for multiplying a matrix and a vector.
	Vector3 operator * (Vector3& vector);

	const Vector3& operator[] (int index) const;
};