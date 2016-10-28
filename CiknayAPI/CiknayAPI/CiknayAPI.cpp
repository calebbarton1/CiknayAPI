// CiknayAPI.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Vector2.h"



int main()
{
	Vector2f test;

	test = Vector2f(25, 4);
	Vector2f test2 = test;
	test2 = test * 2;

	if (test2 != test)
	{
		std::cout << "shit son that isnt it" <<  std::endl;
	}

	if (test2 == test)
		std::cout << "shit son that is totally it" << std::endl;

	
	//test.Normalise();

	//float dot = test | Vector2f(10, 1);

	//float testmag = test.MagnitudeSquared();

	test2 -= 2;

	float testmag = test.MagnitudeSquared(test, test2);

    return 0;
}

