#pragma once
#include <iostream>
#include <string>
#include "Point.h"
#include <vector>
#include <iomanip>
#include <sstream>
using namespace std;
class Shape
{
public:
	Shape();//Default Constructor
	Shape(int x, int y);
	Point leftTop;
	virtual string toString();
	vector <Point> points;//Vector of 
	double area;
	double perimeter;
	virtual void calculateArea();
	virtual void calculatePerimeter();
	bool isCircle = false;
	friend ostream& operator<<(ostream& outpus, Shape* r);

};

