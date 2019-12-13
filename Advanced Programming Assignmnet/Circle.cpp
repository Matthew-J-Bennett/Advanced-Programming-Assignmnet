#include "Circle.h"
#include <math.h>

Circle::Circle(int x, int y, int r)
{
	leftTop.x = x;
	leftTop.y = y;
	radius = r;
	calculatePoints();
	calculateArea();
	calculatePerimeter();
	isCircle = true;
}

void Circle::calculatePoints()
{
	points.push_back(leftTop);
	points.push_back(Point(leftTop.x + (2 * radius), leftTop.y + (2 * radius)));
}

void Circle::calculateArea()
{
	area = round(pi * (radius * radius)*10)/10;
}

void Circle::calculatePerimeter()
{
	perimeter = round((pi * radius * 2)*10)/10;
}

string Circle::toString()
{
	return "Circle[r=" + to_string(radius) + "]\nPoints[(" + to_string(points[0].x) +
		"," + to_string(points[0].y) + ")(" + to_string(points[1].x) + "," + to_string(points[1].y) + ")]\nArea=" + to_string(area) + " Perimeter=" + to_string(perimeter);
}

void Circle::move(int newX, int newY)
{
	points.clear();
	leftTop.x = newX;
	leftTop.y = newY;
	calculatePoints();
}

void Circle::scale(float scaleX, float scaleY)
{
	points.clear();
	radius = radius * scaleX;
	calculatePoints();
	calculateArea();
	calculatePerimeter();
}
