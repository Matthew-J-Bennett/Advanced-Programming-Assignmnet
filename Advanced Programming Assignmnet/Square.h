#pragma once
#include "Shape.h"
#include "Movable.h"
class Square : public Shape, public Movable
{
public:
	double edge;
	virtual string toString();
	Square(int x, int y, int e);
	void calculatePerimeter();
	void calculateArea();
	void calculatePoints();
	void move(int newX, int newY);
	void scale(float scaleX, float scaleY);
};

