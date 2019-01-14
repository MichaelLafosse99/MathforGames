#pragma once
#include "Vector3.h"
#include <cmath>

//set rotate x,y,z
//matrix x matrix
//matrix x vector

class matrix3
{

public:

	//Vectors used for rotating the matrix
	Vector3 xAxis, yAxis, zAxis;
	float data[3][3];

	//constructor to initialize a matrix
	matrix3();

	//The "definition" of rotating the z axis
	void setRotateZ(float radians);

	//Function that rotates the z axis
	void rotateZ(float radian);

	//operator for multiplying two matrices
	matrix3 operator * (const matrix3& otherMatrix) const;

	//operator for multiplying a matrix and a vector
	Vector3 operator * (Vector3& vector);
};