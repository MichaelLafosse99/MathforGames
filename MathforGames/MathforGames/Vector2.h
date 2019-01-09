#pragma once
#include <cmath>

class Vector2
{
private:
	//X and Y positions
	float xPos;
	float yPos;

public:
	//Constructor to initialize X and Y
	Vector2(float x, float y);
	Vector2();

	//Getx() and Gety() returns their positions
	float Gety();
	float Getx();

	//Returns the length of a vector
	float Magnitude();

	//Finds the distance between two vectors
	float Distance(Vector2 other);

	float DotProduct(Vector2 other);

	//Modifies the vector's magnitude
	Vector2 Normalize();

	//Operators to add, subtract, multiply, and equality.
	Vector2 operator + (Vector2& rhs);
	Vector2 operator - (Vector2& rhs);
	Vector2 operator * (float& rhs);
	bool operator == (Vector2& rhs);
	bool operator != (Vector2& rhs);
	float operator [] (int index);
};