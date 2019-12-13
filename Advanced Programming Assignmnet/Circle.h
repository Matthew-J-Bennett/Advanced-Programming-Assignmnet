#pragma once
#include "Shape.h"
#include "Movable.h"
class Circle: public Shape, public Movable
{
public:
	Circle(int x, int y, int r);
	float radius;
	void calculatePoints();
	void calculateArea();
	void calculatePerimeter();
	double pi = 3.14159265359;
	string toString();
	void move(int newX, int newY);
	void scale(float scaleX, float scaleY);
};

