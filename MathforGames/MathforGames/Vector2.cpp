#include "Vector2.h"

Vector2::Vector2(float x, float y)
{
	xPos = x;
	yPos = y;
}

Vector2::Vector2()
{

}

float Vector2::Gety()
{
	return yPos;
}

float Vector2::Getx()
{
	return xPos;
}

float Vector2::Magnitude()
{
	float x2 = (xPos * xPos);
	float y2 = (yPos * yPos);
	float c2 = (x2 + y2);

	return sqrtf(c2);
}

Vector2 Vector2::Normalize()
{
	return Vector2((xPos / Magnitude()), (yPos / Magnitude()));
}

Vector2 Vector2::operator+(Vector2 & rhs)
{
	return Vector2(this->xPos + rhs.xPos, this->yPos + rhs.yPos);
}

Vector2 Vector2::operator-(Vector2 & rhs)
{
	return Vector2(this->xPos - rhs.xPos, this->yPos - rhs.yPos);
}

Vector2 Vector2::operator*(float & rhs)
{
	return Vector2(this->xPos * rhs, this->yPos * rhs);
}

bool Vector2::operator==(Vector2 & rhs)
{
	return this->xPos == rhs.xPos && this->yPos == rhs.yPos;
}

bool Vector2::operator!=(Vector2 & rhs)
{
	return this->xPos != rhs.xPos || this->yPos != rhs.yPos;
}