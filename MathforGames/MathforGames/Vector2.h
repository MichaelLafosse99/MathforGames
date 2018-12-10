#pragma once
#include <cmath>

class Vector2
{
private:
	float xPos;
	float yPos;

public:
	Vector2(float x, float y);
	Vector2();

	float Gety();
	float Getx();
	float Magnitude();
	Vector2 Normalize();

	Vector2 operator + (Vector2& rhs);
	Vector2 operator - (Vector2& rhs);
	Vector2 operator * (float& rhs);
	bool operator == (Vector2& rhs);
	bool operator != (Vector2& rhs);
};