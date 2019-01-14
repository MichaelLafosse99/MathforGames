#include "Vector3.h"

//Constructor to intialize x, y, and z postions
Vector3::Vector3(float x, float y, float z)
{
	xPos = x;
	yPos = y;
	zPos = z;
}

Vector3::Vector3()
{

}

//Function to return y position
float Vector3::Gety()
{
	return yPos;
}

//Function to return x position
float Vector3::Getx()
{
	return xPos;
}

//Function to return z position
float Vector3::Getz()
{
	return zPos;
}

//Returns the lenght of a vector, using pythagorean theorem
float Vector3::Magnitude()
{
	float x2 = (xPos * xPos);
	float y2 = (yPos * yPos);
	float z2 = (zPos * zPos);
	float c2 = (x2 + y2 + z2);

	return sqrtf(c2);
}

//Finds the distance between two vectors
float Vector3::Distance(Vector3 other)
{
	return ((*this - other).Magnitude());
}

//Returns a scalar value by multiplying then adding two vector's positions
//Ex: x1*x2 + y1*y2
float Vector3::DotProduct(Vector3 other)
{
	return ((this->xPos*other.xPos) + (this->yPos*other.yPos) + (this->zPos*other.zPos));
}

//Modifies the vector's magnitude
Vector3 Vector3::Normalize()
{
	return Vector3((xPos / Magnitude()), (yPos / Magnitude()), (zPos / Magnitude()));
}

//Returns a third vector
Vector3 Vector3::CrossProduct(Vector3 other)
{
	return Vector3((this->yPos*other.zPos) - (this->zPos*other.yPos),
					(this->zPos*other.xPos) - (this->xPos*other.zPos),
					(this->xPos*other.yPos) - (this->yPos*other.xPos));
}

//Operator that adds two vectors
Vector3 Vector3::operator+(Vector3 & rhs)
{
	return Vector3(this->xPos + rhs.xPos, this->yPos + rhs.yPos, this->zPos + rhs.zPos);
}

//Operator that subtracts two vectors
Vector3 Vector3::operator-(Vector3 & rhs)
{
	return Vector3(this->xPos - rhs.xPos, this->yPos - rhs.yPos, this->zPos - rhs.zPos);
}

//Operator that multiplies a vector by scalar
Vector3 Vector3::operator*(float & rhs)
{
	return Vector3(this->xPos * rhs, this->yPos * rhs, this->zPos * rhs);
}

//Operator to check if two vectors are the same
bool Vector3::operator==(Vector3 & rhs)
{
	return this->xPos == rhs.xPos && this->yPos == rhs.yPos && this->zPos == rhs.zPos;
}

//Operator to check if two vectors are not the same
bool Vector3::operator!=(Vector3 & rhs)
{
	return this->xPos != rhs.xPos || this->yPos != rhs.yPos || this->zPos != rhs.zPos;
}

//subscript operator that takes in an index and returns a reference
float& Vector3::operator[](int index)
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
	else
	{
		std::cout << "This is not a correct index" <<  std::endl;
		return none;
	}
}
