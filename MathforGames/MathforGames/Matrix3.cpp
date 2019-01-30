#include "Matrix3.h"

//This initializes a 2d matrix to have values of 0.
Matrix3::Matrix3()
{
	for (int r = 0; r < 3; r++)
	{
		for(int c = 0; c < 3; c++)
		{
			data[r][c] = 0.0f;
			identityMatrix[r][c] = 0.0f;
		}
	}
}

Matrix3::Matrix3(float xx, float xy, float xz, float yx, float yy, float yz, float zx, float zy, float zz)
{
	float* ptr = &xx;

	for (int r = 0; r < 3; r++)
	{
		for (int c = 0; c < 3; c++)
		{
			data[r][c] = *ptr;
			identityMatrix[r][c] = *ptr++;
		}
	}
}

//Matrix3::Matrix3(int xx, int xy, int xz, int yx, int yy, int yz, int zx, int zy, int zz)
//{
//	int* ptr = &xx;
//
//	for (int r = 0; r < 3; r++)
//	{
//		for (int c = 0; c < 3; c++)
//		{
//			data[r][c] = *ptr;
//			identityMatrix[r][c] = *ptr++;
//		}
//	}
//}

//The "definition" of rotating the z axis
void Matrix3::setRotateZ(float radians)
{
	xAxis = Vector3(cosf(radians), sinf(radians), 0.0);
	yAxis = Vector3(-sinf(radians), cosf(radians), 0.0);
	zAxis = Vector3(0.0, 0.0, 1.0);
}

//Function that rotates the z axis
void Matrix3::rotateZ(float radians)
{
	Matrix3 matrix;
	matrix.setRotateZ(radians);

	*this = *this *matrix;
}

//This operator is what allows two matrices to multiply, returning a
//third matrix as a result.
Matrix3 Matrix3::operator*(const Matrix3 & otherMatrix) const
{
	Matrix3 result;

	//in the case for rows and columns, "r" would be for row,
	//and "c" would be for column.
	for (int r = 0; r < 3; r++)
	{
		for (int c = 0; c < 3; c++)
		{
			result.data[c][r] = data[0][r] * otherMatrix.data[c][0] +
								data[1][r] * otherMatrix.data[c][1] +
								data[2][r] * otherMatrix.data[c][2];
		}
	}
	return result;
}

//operator for multiplying a matrix and a vector.
Vector3 Matrix3::operator*(Vector3 & vector)
{
	Vector3 result;

	for (int r = 0; r < 3; r++)
	{
		result[r] = data[0][r] * vector[0] +
					data[1][r] * vector[1] +
					data[2][r] * vector[2];
	}
	return  result;
}

Matrix3::operator float*()
{
	return data[0];
}
