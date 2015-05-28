#pragma once
#include "Point.h"
#include <iostream>
#include <string>
using namespace std;

class Shape {
public:
	virtual double perimeter() = 0;
	virtual double area() = 0;
};