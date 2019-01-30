#include "Matrix4.h"

//This initializes a 3d matrix to have values of 0
Matrix4::Matrix4()
{
	for (int r = 0; r < 4; r++)
	{
		for (int c = 0; c < 4; c++)
		{
			data[r][c] = 0.0f;
			identityMatrix[r][c] = 0.0f;
		}
	}
}

Matrix4::Matrix4(float xx, float xy, float xz, float xw, float yx, float yy, float yz, float yw, float zx, float zy, float zz, float zw, float wx, float wy, float wz, float ww)
{
	float* ptr = &xx;

	for (int r = 0; r < 4; r++)
	{
		for (int c = 0; c < 4; c++)
		{
			data[r][c] = *ptr;
			identityMatrix[r][c] = *ptr++;
		}
	}
}

//The "definitions" for rotating the x, y, and z axes:
void Matrix4::setRotateX(float radians)
{
	xAxis = Vector4(1.0, 0.0, 0.0, 0.0);
	yAxis = Vector4(0.0, cosf(radians), sinf(radians), 0.0);
	zAxis = Vector4(0.0, -sinf(radians), cosf(radians), 0.0);
	wAxis = Vector4(0.0, 0.0, 0.0, 1.0);
}

void Matrix4::setRotateY(float radians)
{
	xAxis = Vector4(cosf(radians), 0.0, -sinf(radians), 0.0);
	yAxis = Vector4(0.0, 1.0, 0.0, 0.0);
	zAxis = Vector4(sinf(radians), 0.0, cosf(radians), 0.0);
	wAxis = Vector4(0.0, 0.0, 0.0, 1.0);
}

void Matrix4::setRotateZ(float radians)
{
	xAxis = Vector4(cosf(radians), sinf(radians), 0.0, 0.0);
	yAxis = Vector4(-sinf(radians), cosf(radians), 0.0, 0.0);
	zAxis = Vector4(0.0, 0.0, 1.0, 0.0);
	wAxis = Vector4(0.0, 0.0, 0.0, 1.0);
}

//Functions that rotate the x, y, and z axes:
void Matrix4::rotateX(float radians)
{
	Matrix4 matrix;
	matrix.setRotateX(radians);

	*this = *this * matrix;
}

void Matrix4::rotateY(float radians)
{
	Matrix4 matrix;
	matrix.setRotateY(radians);

	*this = *this * matrix;
}

void Matrix4::rotateZ(float radians)
{
	Matrix4 matrix;
	matrix.setRotateZ(radians);

	*this = *this * matrix;
}

//Multiplying a vector by a matrix
Matrix4 Matrix4::operator*(const Matrix4 & otherMatrix) const
{
	Matrix4 result;

	//in the case for rows and columns, "r" would be for row,
	//and "c" would be for column.
	for (int r = 0; r < 4; r++)
	{
		for (int c = 0; c < 4; c++)
		{
			result.data[c][r] = data[0][r] * otherMatrix.data[c][0] +
								data[1][r] * otherMatrix.data[c][1] +
								data[2][r] * otherMatrix.data[c][2] +
								data[3][r] * otherMatrix.data[c][3];
		}
	}
	return result;
}

//Multiplying a vector by a matrix
Vector4 Matrix4::operator*(Vector4 vector)
{
	Vector4 result;

	for (int r = 0; r < 3; r++)
	{
		result[r] = data[0][r] * vector[0] +
					data[1][r] * vector[1] +
					data[2][r] * vector[2];
	}
	return  result;
}

Matrix4::operator float*()
{
	return data[0];
}
