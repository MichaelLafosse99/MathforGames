#include "Vector2.h"
#include "Vector3.h"

int main()
{
	Vector2 vec1(6,9);
	Vector2 vec2(1, 1);
	float vec = 3.0;
	vec1 != vec2;

	vec1.Getx();
	vec2.Gety();

	vec1 + vec2;
	vec1 - vec2;
	
	Vector2 vec3 = vec1 * vec;

	vec1.Magnitude();
	vec1.Normalize();

	vec1.Distance(vec2);
}