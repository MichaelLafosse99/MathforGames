#pragma once
#include "Vector3.h"

//set rotate x,y,z
//matrix x matrix
//matrix x vector

class matrix3
{

public:

	float data[3][3];

	//constructor to initialize a matrix
	matrix3();

	//operator for multiplying two matrices
	matrix3 operator * (const matrix3& otherMatrix) const;

	//operator for multiplying a matrix and a vector.
	matrix3 operator * (const Vector3& vector) const;
};