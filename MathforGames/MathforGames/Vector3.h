#pragma once
#include <cmath>
#include <iostream>

class Vector3
{
private:
	//X, Y, and Z positions
	float xPos;
	float yPos;
	float zPos;

public:
	//Constructor to initialize X, Y, and Z
	Vector3(float x, float y, float z);
	Vector3();

	//Getx(), Gety(), Getz() returns their positions
	float Gety();
	float Getx();
	float Getz();

	//Returns the length of a vector
	float magnitude();

	//Finds the distance between two vectors
	float Distance(Vector3 other);

	//Returns a scalar value by multiplying then adding two vector's positions
	float dot(Vector3 other);
	
	//Modifies the vector's magnitude
	Vector3 normalise();

	//Returns a third vector that is perpendicular to both of
	//the original vectors
	Vector3 cross(Vector3 other);

	//Operators to add, subtract, multiply, and equality.
	Vector3 operator + (Vector3& rhs);
	Vector3 operator - (Vector3& rhs);
	Vector3 operator * (float rhs);
	friend Vector3 operator * (float, Vector3);
	bool operator == (Vector3& rhs);
	bool operator != (Vector3& rhs);

	//subscript operator that takes in an index and returns a reference
	float& operator [] (int index);
};

