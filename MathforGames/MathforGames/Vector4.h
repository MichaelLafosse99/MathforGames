#pragma once
#include <cmath>
#include <iostream>

class Vector4
{
private:
	//X, Y, Z, and W positions
	float xPos;
	float yPos;
	float zPos;
	float wPos;

public:
	//Constructor to initialize X, Y, and Z
	Vector4(float x, float y, float z, float w);
	Vector4();

	//Getx(), Gety(), Getz(), and Getw() return their positions
	float Gety();
	float Getx();
	float Getz();
	float Getw();

	//Returns the length of a vector
	float Magnitude();

	//Finds the distance between two vectors
	float Distance(Vector4 other);


	float DotProduct(Vector4 other);

	//Modifies the vector's magnitude
	Vector4 Normalize();

	//Operators to add, subtract, multiply, and equality.
	Vector4 operator + (Vector4& rhs);
	Vector4 operator - (Vector4& rhs);
	Vector4 operator * (float& rhs);
	bool operator == (Vector4& rhs);
	bool operator != (Vector4& rhs);
	float& operator [] (int index);
};