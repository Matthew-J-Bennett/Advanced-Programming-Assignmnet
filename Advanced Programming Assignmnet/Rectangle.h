#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Shape.h"
#include "Movable.h"
using namespace std;
class Rectangle : public Shape, public Movable
{
public:
	void calculateArea();
	void calculatePerimeter();
	void calculatePoints();
	Rectangle(int x, int y, int h, int w);
	string toString();
	int height;
	int width;
	void move(int newX, int newY);
	void scale(float scaleX, float scaleY);
};

