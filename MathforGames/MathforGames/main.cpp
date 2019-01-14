#include "Vector2.h"
#include "Vector3.h"
#include "Vector4.h"
#include "Matrix3.h"
#include "Matrix4.h"

int main()
{

	float pi = 3.14159;

	//Vector2 Test Cases:

	Vector2 vec1(6,9);
	Vector2 vec2(1, 1);
	float vec = 3.0;

	vec1.Getx();
	vec2.Gety();

	vec1.Magnitude();
	vec1.Distance(vec2);

	vec1.DotProduct(vec2);
	vec1.Normalize();

	vec1 + vec2;
	vec1 - vec2;
	
	Vector2 vec3 = vec1 * vec;

	vec1 == vec2;
	vec1 != vec2;

	vec1[0];
	vec1[2];

	//Vector3 Test Cases:

	Vector3 vec3Test1(1, 3, 2);
	Vector3 vec3Test2(3, 4, 2);

	vec3Test1.Getx();
	vec3Test1.Gety();
	vec3Test2.Getz();

	vec3Test1.Magnitude();
	vec3Test1.Distance(vec3Test2);

	vec3Test1.DotProduct(vec3Test2);
	vec3Test1.Normalize();

	vec3Test1.CrossProduct(vec3Test2);

	vec3Test1 + vec3Test2;
	vec3Test1 - vec3Test2;

	Vector3 vec3Test3 = vec3Test1 * vec;

	vec3Test1 == vec3Test2;
	vec3Test1 != vec3Test2;

	vec3Test1[2];
	vec3Test1[3];

	//Vector4 Test Cases:

	Vector4 vec4Test1(1, 2, 3, 4);
	Vector4 vec4Test2(5, 6, 7, 8);

	vec4Test1.Getx();
	vec4Test1.Gety();
	vec4Test2.Getz();
	vec4Test2.Getw();

	vec4Test1.Magnitude();
	vec4Test1.Distance(vec4Test2);

	vec4Test1.DotProduct(vec4Test2);
	vec4Test1.Normalize();

	vec4Test1 + vec4Test2;
	vec4Test1 - vec4Test2;

	Vector4 vec4Test3 = vec4Test1 * vec;

	vec4Test1 == vec4Test2;
	vec4Test1 != vec4Test2;

	vec4Test1[2];
	vec4Test1[3];

	//Matrix3 Test Cases:

	matrix3 mat3Test1;
	matrix3 mat3Test2;

	mat3Test1.rotateZ(pi);

	mat3Test1 * mat3Test2;
	mat3Test1 * vec3Test1;

	//Matrix4 Test Cases:

	matrix4 mat4Test1;
	matrix4 mat4Test2;
	matrix4 mat4Test3;

	mat4Test1.rotateX(pi / 2);
	mat4Test1.rotateY(pi / 4);
	mat4Test1.rotateZ(pi);

	mat4Test1 * mat4Test2;
	mat4Test1 * vec4Test1;
}