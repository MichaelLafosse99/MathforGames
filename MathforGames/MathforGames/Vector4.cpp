#include "Vector4.h"

//Constructor to intialize x, y, z, and w postions
Vector4::Vector4(float x, float y, float z, float w)
{
	xPos = x;
	yPos = y;
	zPos = z;
	wPos = w;
}

Vector4::Vector4()
{

}

//Function to return y position
float Vector4::Gety()
{
	return yPos;
}

//Function to return x position
float Vector4::Getx()
{
	return xPos;
}

//Function to return z position
float Vector4::Getz()
{
	return zPos;
}

//Function to return w position
float Vector4::Getw()
{
	return wPos;
}

//Returns the lenght of a vector, using pythagorean theorem
float Vector4::magnitude()
{
	float x2 = (xPos * xPos);
	float y2 = (yPos * yPos);
	float z2 = (zPos * zPos);
	float w2 = (wPos * wPos);
	float c2 = (x2 + y2 + z2 + w2);

	return sqrtf(c2);
}

//Finds the distance between two vectors
float Vector4::Distance(Vector4 other)
{
	return ((*this - other).magnitude());
}

//Returns a scalar value by multiplying then adding two vector's positions
//Ex: x1*x2 + y1*y2
float Vector4::dot(Vector4 other)
{
	return ((this->xPos*other.xPos) + (this->yPos*other.yPos) + (this->zPos*other.zPos) + (this->wPos*other.wPos));
}

//Modifies the vector's magnitude
Vector4 Vector4::normalise()
{
	return Vector4((xPos / magnitude()), (yPos / magnitude()), (zPos / magnitude()), (wPos / magnitude()));
}

Vector4 Vector4::cross(Vector4 other)
{
	return Vector4((this->yPos*other.zPos) - (this->zPos*other.yPos),
				   (this->zPos*other.xPos) - (this->xPos*other.zPos),
				   (this->xPos*other.yPos) - (this->yPos*other.xPos), 0.0);
}

//Operator that adds two vectors
Vector4 Vector4::operator+(Vector4 & rhs)
{
	return Vector4(this->xPos + rhs.xPos, this->yPos + rhs.yPos, this->zPos + rhs.zPos, this->wPos + rhs.wPos);
}

//Operator that subtracts two vectors
Vector4 Vector4::operator-(Vector4 & rhs)
{
	return Vector4(this->xPos - rhs.xPos, this->yPos - rhs.yPos, this->zPos - rhs.zPos, this->wPos - rhs.wPos);
}

//Operator that multiplies a vector by scalar
Vector4 Vector4::operator*(float rhs)
{
	return Vector4(this->xPos * rhs, this->yPos * rhs, this->zPos * rhs, this->wPos * rhs);
}

//Operator to check if two vectors are the same
bool Vector4::operator==(Vector4 & rhs)
{
	return this->xPos == rhs.xPos && this->yPos == rhs.yPos && this->zPos == rhs.zPos && this->wPos == rhs.wPos;
}

//Operator to check if two vectors are not the same
bool Vector4::operator!=(Vector4 & rhs)
{
	return this->xPos != rhs.xPos || this->yPos != rhs.yPos || this->zPos != rhs.zPos || this->wPos != rhs.wPos;
}

//subscript operator that takes in an index and returns a reference
float& Vector4::operator[](int index)
{

	float none = 0.0f;

	if (index == 0)
	{
		return xPos;
	}
	else if (index == 1)
	{
		return yPos;
	}
	else if (index == 2)
	{
		return zPos;
	}
	else if (index == 3)
	{
		return wPos;
	}
	else
	{
		std::cout << "This is not a correct index" << std::endl;
		return none;
	}
}

Vector4 operator*(float lhs, Vector4 rhs)
{
	return Vector4( lhs * rhs);
}
