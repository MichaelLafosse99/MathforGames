#pragma once
#include "Vector4.h"
#include <cmath>

//set rotate x,y,z
//matrix x matrix
//matrix x vector

class matrix4
{
public:

	//Vectors used for rotating the matrix
	Vector4 xAxis, yAxis, zAxis, wAxis;
	float data[4][4];

	//constructor to initialize a matrix
	matrix4();

	//The "definitions" for rotating the x, y, and z axes
	void setRotateX(float radians);
	void setRotateY(float radians);
	void setRotateZ(float radians);

	//Functions that rotate the x, y, and z axes
	void rotateX(float radians);
	void rotateY(float radians);
	void rotateZ(float radians);

	//operator for multiplying two matrices
	matrix4 operator * (const matrix4& otherMatrix) const;

	//operator for multiplying a matrix and a vector
	Vector4 operator * (Vector4 vector);

};