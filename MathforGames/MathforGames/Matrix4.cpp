#include "Matrix4.h"


matrix4::matrix4()
{
	for (int r = 0; r < 4; r++)
	{
		for (int c = 0; c < 4; c++)
		{
			data[r][c] = 0.0f;
		}
	}
}

void matrix4::rotateX(float radian)
{
}

void matrix4::rotateY(float radian)
{
}

void matrix4::rotateZ(float radian)
{
}

void matrix4::rotateW(float radian)
{
}

matrix4 matrix4::operator*(const matrix4 & otherMatrix) const
{
	matrix4 result;

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

Vector4 matrix4::operator*(Vector4 vector)
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

const Vector4 & matrix4::operator[](int index) const
{
	return axis[index];
}
