// CiknayAPI.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Vector2.h"
#include "Vector3.h"



int main()
{
	//vector2
	Vector2f constructor1;
	Vector2f constructor2 = Vector2f(10, 20);
	constructor1 = constructor2;

	constructor1 = constructor1 + constructor2;
	constructor1 += 5;
	constructor1 += constructor2;

	constructor1 = constructor1 - constructor2;
	constructor1 -= 5;
	constructor1 -= constructor2;

	constructor1 = constructor1 / constructor2;
	constructor1 /= 5;
	constructor1 /= constructor2;

	constructor1 = constructor1 * constructor2;
	constructor1 *= 5;
	constructor1 *= constructor2;

	if (constructor2 == constructor1)
		std::cout << "constructor1 is equal to constructor2" << std::endl;

	if (constructor2 != constructor1)
		std::cout << "constructor1 is not equal to constructor2" << std::endl;

	Vector2f magTest = constructor1;
	float mag = magTest.Magnitude();
	mag = magTest.MagnitudeSquared();

	mag = Vector2f::Magnitude(constructor2);
	mag = Vector2f::MagnitudeSquared(constructor2);

	mag = Vector2f::Magnitude(magTest, constructor2);
	mag = Vector2f::MagnitudeSquared(magTest, constructor2);

	Vector2f normTest(1, 1);
	normTest.Normalise();

	Vector2f norm = normTest.Normalised();
	Vector2f::Normalise(norm);

	Vector2f otherNorm = Vector2f::Normalised(constructor1);

	float dot = Vector2f::Dot(constructor1, constructor2);
	float cross = Vector2f::Cross(constructor1, constructor2);

	//Vector3
	Vector3f constructor3;
	Vector3f constructor4 = Vector3f(10, 20,30);
	constructor3 = constructor4;

	constructor3 = constructor3 + constructor4;
	constructor3 += 5;
	constructor3 += constructor4;

	constructor3 = constructor3 - constructor4;
	constructor3 -= 5;
	constructor3 -= constructor4;

	constructor3 = constructor3 / constructor4;
	constructor3 /= 5;
	constructor3 /= constructor4;

	constructor3 = constructor3 * constructor4;
	constructor3 *= 5;
	constructor3 *= constructor4;

	if (constructor4 == constructor3)
		std::cout << "constructor3 is equal to constructor4" << std::endl;

	if (constructor4 != constructor3)
		std::cout << "constructor3 is not equal to constructor4" << std::endl;

	Vector3f magTest1 = constructor3;
	float mag2 = magTest1.Magnitude();
	mag2 = magTest1.MagnitudeSquared();

	mag2 = Vector3f::Magnitude(constructor4);
	mag2 = Vector3f::MagnitudeSquared(constructor4);

	mag2 = Vector3f::Magnitude(magTest1, constructor4);
	mag2 = Vector3f::MagnitudeSquared(magTest1, constructor4);

	Vector3f normTest2(1, 1);
	normTest2.Normalise();

	Vector3f norm2(20, 30, 40);
	Vector3f::Normalise(norm2);

	Vector3f otherNorm2 = Vector3f::Normalised(constructor3);

	float dot2 = Vector3f::Dot(constructor3.Normalised(), constructor4.Normalised());
	Vector3f cross2 = Vector3f::Cross(constructor3, Vector3f(40,30,60));
}

