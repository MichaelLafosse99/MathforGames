#pragma once
#include "Vector3.h"
#include <cmath>

//set rotate x,y,z
//matrix x matrix
//matrix x vector

class Matrix3
{

public:

	//Vectors used for rotating the matrix
	Vector3 xAxis, yAxis, zAxis;
	float data[3][3];
	float identityMatrix[3][3];

	//constructor to initialize a matrix
	Matrix3();
	Matrix3(float, float, float, float, float, float, float, float, float);


	//The "definition" of rotating the z axis
	void setRotateZ(float radians);

	//Function that rotates the z axis
	void rotateZ(float radian);

	//operator for multiplying two matrices
	Matrix3 operator * (const Matrix3& otherMatrix) const;

	//operator for multiplying a matrix and a vector
	Vector3 operator * (Vector3& vector);
};