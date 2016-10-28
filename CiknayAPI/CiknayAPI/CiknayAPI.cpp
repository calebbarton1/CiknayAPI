// CiknayAPI.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Vector2.h"



int main()
{
	Vector2f test;

	test = Vector2f(25, 4);

	test = test.Normalise();

    return 0;
}

