#include "Vector2.h"
#include "Vector3.h"

int main()
{
	//Vector2:

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
	vec1.DotProduct(vec2);

	//Vector3:

	Vector3 vec3Test1(1, 3, 2);
	Vector3 vec3Test2(3, 4, 2);

	vec3Test1.DotProduct(vec3Test2);
	vec3Test1.CrossProduct(vec3Test2);
}