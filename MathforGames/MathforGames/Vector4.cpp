#include "Vector4.h"

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

float Vector4::Gety()
{
	return yPos;
}

float Vector4::Getx()
{
	return xPos;
}

float Vector4::Getz()
{
	return zPos;
}

float Vector4::Getw()
{
	return wPos;
}

float Vector4::Magnitude()
{
	float x2 = (xPos * xPos);
	float y2 = (yPos * yPos);
	float z2 = (zPos * zPos);
	float w2 = (wPos * wPos);
	float c2 = (x2 + y2 + z2 + w2);

	return sqrtf(c2);
}

float Vector4::Distance(Vector4 other)
{
	return ((*this - other).Magnitude());
}

float Vector4::DotProduct(Vector4 other)
{
	return ((this->xPos*other.xPos) + (this->yPos*other.yPos) + (this->zPos*other.zPos) + (this->wPos*other.wPos));
}

Vector4 Vector4::Normalize()
{
	return Vector4((xPos / Magnitude()), (yPos / Magnitude()), (zPos / Magnitude()), (wPos / Magnitude()));
}

Vector4 Vector4::operator+(Vector4 & rhs)
{
	return Vector4(this->xPos + rhs.xPos, this->yPos + rhs.yPos, this->zPos + rhs.zPos, this->wPos + rhs.wPos);
}

Vector4 Vector4::operator-(Vector4 & rhs)
{
	return Vector4(this->xPos - rhs.xPos, this->yPos - rhs.yPos, this->zPos - rhs.zPos, this->wPos - rhs.wPos);
}

Vector4 Vector4::operator*(float & rhs)
{
	return Vector4(this->xPos * rhs, this->yPos * rhs, this->zPos * rhs, this->wPos * rhs);
}

bool Vector4::operator==(Vector4 & rhs)
{
	return this->xPos == rhs.xPos && this->yPos == rhs.yPos && this->zPos == rhs.zPos && this->wPos == rhs.wPos;
}

bool Vector4::operator!=(Vector4 & rhs)
{
	return this->xPos != rhs.xPos || this->yPos != rhs.yPos || this->zPos != rhs.zPos || this->wPos != rhs.wPos;
}

float Vector4::operator[](int index)
{
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
		return 0;
	}
}