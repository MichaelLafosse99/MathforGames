#pragma once
#include <cmath>

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
	float Magnitude();

	//Finds the distance between two vectors
	float Distance(Vector3 other);


	float DotProduct(Vector3 other);
	
	//Modifies the vector's magnitude
	Vector3 Normalize();

	//Returns a third vector that is perpendicular to both of
	//the original vectors
	Vector3 CrossProduct(Vector3 other);

	//Operators to add, subtract, multiply, and equality.
	Vector3 operator + (Vector3& rhs);
	Vector3 operator - (Vector3& rhs);
	Vector3 operator * (float& rhs);
	bool operator == (Vector3& rhs);
	bool operator != (Vector3& rhs);
	float operator [] (int index) const;
	Vector3* operator [] (float number) const;
};