#include "Vector3.h"

Vector3::Vector3(float x, float y, float z)
{
	xPos = x;
	yPos = y;
	zPos = z;
}

Vector3::Vector3()
{

}

float Vector3::Gety()
{
	return yPos;
}

float Vector3::Getx()
{
	return xPos;
}

float Vector3::Getz()
{
	return zPos;
}

float Vector3::Magnitude()
{
	float x2 = (xPos * xPos);
	float y2 = (yPos * yPos);
	float z2 = (zPos * zPos);
	float c2 = (x2 + y2 + z2);

	return sqrtf(c2);
}

float Vector3::Distance(Vector3 other)
{
	return ((*this - other).Magnitude());
}

Vector3 Vector3::Normalize()
{
	return Vector3((xPos / Magnitude()), (yPos / Magnitude()), (zPos / Magnitude()));
}

Vector3 Vector3::operator+(Vector3 & rhs)
{
	return Vector3(this->xPos + rhs.xPos, this->yPos + rhs.yPos, this->zPos + rhs.zPos);
}

Vector3 Vector3::operator-(Vector3 & rhs)
{
	return Vector3(this->xPos - rhs.xPos, this->yPos - rhs.yPos, this->zPos - rhs.zPos);
}

Vector3 Vector3::operator*(float & rhs)
{
	return Vector3(this->xPos * rhs, this->yPos * rhs, this->zPos * rhs);
}

bool Vector3::operator==(Vector3 & rhs)
{
	return this->xPos == rhs.xPos && this->yPos == rhs.yPos;
}

bool Vector3::operator!=(Vector3 & rhs)
{
	return this->xPos != rhs.xPos || this->yPos != rhs.yPos;
}