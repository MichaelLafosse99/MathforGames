#include "Vector2.h"

//Constructor to intialize x and y postions
Vector2::Vector2(float x, float y)
{
	xPos = x;
	yPos = y;
}

Vector2::Vector2()
{

}

//Function to return y position
float Vector2::Gety()
{
	return yPos;
}

//Function to return x position
float Vector2::Getx()
{
	return xPos;
}

//Returns the lenght of a vector, using pythagorean theorem
float Vector2::magnitude()
{
	float x2 = (xPos * xPos);
	float y2 = (yPos * yPos);
	float c2 = (x2 + y2);

	return sqrtf(c2);
}

//Finds the distance between two vectors
float Vector2::Distance(Vector2 other)
{
	return ((*this - other).magnitude());
}

//Returns a scalar value by multiplying then adding two vector's positions
//Ex: x1*x2 + y1*y2
float Vector2::dot(Vector2 other)
{
	return ((this->xPos*other.xPos) + (this->yPos*other.yPos));
}

//Modifies the vector's magnitude
Vector2 Vector2::normalise()
{
	return Vector2((xPos / magnitude()), (yPos / magnitude()));
}

//Operator that adds two vectors
Vector2 Vector2::operator+(Vector2 & rhs)
{
	return Vector2(this->xPos + rhs.xPos, this->yPos + rhs.yPos);
}

//Operator that subtracts two vectors
Vector2 Vector2::operator-(Vector2 & rhs)
{
	return Vector2(this->xPos - rhs.xPos, this->yPos - rhs.yPos);
}

//Operator that multiplies a vector by scalar
Vector2 Vector2::operator*(float rhs)
{
	return Vector2(this->xPos * rhs, this->yPos * rhs);
}

//Operator to check if two vectors are the same
bool Vector2::operator==(Vector2 & rhs)
{
	return this->xPos == rhs.xPos && this->yPos == rhs.yPos;
}

//Operator to check if two vectors are not the same
bool Vector2::operator!=(Vector2 & rhs)
{
	return this->xPos != rhs.xPos || this->yPos != rhs.yPos;
}

//subscript operator for taking in an index and returning a float
float& Vector2::operator[](int index)
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
	else
	{
		return none;
	}
}

Vector2::operator float*()
{
	float array[2] = { xPos, yPos };

	return &array[0];
}

Vector2 operator*(float lhs, Vector2 rhs)
{
	return Vector2(lhs * rhs);
}
