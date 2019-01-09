#include "Matrix3.h"

//This initializes a 3d matrix to have vaules of 0.
matrix3::matrix3()
{
	for (int r = 0; r < 3; r++)
	{
		for(int c = 0; c < 3; c++)
		{
			data[r][c] = 0.0f;
		}
	}
}

//This operator is what allows two matrices to multiply, returning a
//third matrix as a result.
matrix3 matrix3::operator*(const matrix3 & otherMatrix) const
{
	matrix3 result;

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

matrix3 matrix3::operator*(const Vector3 & vector) const
{
	Vector3 result;

	for (int r = 0; r < 3; r++)
	{
		result[r] = data[0][r] * vector[0] +
					data[1][r] * vector[1] +
					data[2][r] * vector[2];
	}
}
