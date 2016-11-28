// CiknayAPI.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Vector2.h"
#include "Vector3.h"



int main()
{
	Vector2f test;

	test = Vector2f(25, 4);
	Vector2f test2 = test;
	test2 = test * 2;

	Vector2f test4(1, 2);
	Vector2f test5(test4);


	if (test2 != test)
		std::cout << "shit son that isnt it" << std::endl;


	if (test2 == test)
		std::cout << "shit son that is totally it" << std::endl;

	test -= 2;
	test2 /= test;
	test2 *= 4;

	test = test + 2;
	test = test2 / test;

	

	float mag1 = test2.Magnitude();
	float mag2 = test.MagnitudeSquared();

	float mag3 = Vector2f::Magnitude(test, test2);
	float mag4 = Vector2f::MagnitudeSquared(test, test2);


	test = Vector2f(0, 2);
	test.Normalise();
	test2 = Vector2f(0, 4);
	test2.Normalise();

	

	float dot = Vector2f::Dot(test, test2);
	float cross = Vector2f::Cross(test, test2);


	Vector3f threeTest(2, 3, 4);
	Vector3f threeTest2(5, 6, 7);

	Vector3f lewl = Vector3f::Cross(threeTest, threeTest2);

	Vector2<double> magtest1 = Vector2d(2.3, 2.5);
	Vector2<double> magtest2 = Vector2d(2.7, 3.5);

	Vector2d::Normalise(magtest1);
	Vector2d magtest3 = Vector2d::Normalised(magtest2);

	//float blah = Vector2f::Magnitude(test, test2);
}

