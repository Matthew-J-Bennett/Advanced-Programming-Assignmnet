#include "Rectangle.h"


void Rectangle::calculateArea()
{
	area = round((height * width)*10)/10;
}

void Rectangle::calculatePerimeter()
{
	perimeter = round((2 * height) + (2 * width)*10)/10;
}

void Rectangle::calculatePoints()
{
	points.push_back(leftTop); // Top Left
	points.push_back(Point(leftTop.x + width, leftTop.y)); //Top Right Point
	points.push_back(Point(leftTop.x + width, leftTop.y + height)); // Bottom Right
	points.push_back(Point(leftTop.x, leftTop.y + height)); //Bottom Left
	
}

Rectangle::Rectangle(int x, int y, int h, int w)
{
	leftTop.x = x;
	leftTop.y = y;
	height = h;
	width = w;
	calculatePoints();
	calculateArea();
	calculatePerimeter();
}

string Rectangle::toString()
{

	return "Rectangle[w=" + to_string(height) + ",w=" + to_string(width) + "]\nPoints[(" + to_string(points[0].x) + 
		"," + to_string(points[0].y) + ")(" + to_string(points[1].x) + "," + to_string(points[1].y) + ")(" 
		+ to_string(points[2].x) + "," + to_string(points[2].y) + ")(" + to_string(points[3].x) + 
		"," + to_string(points[3].y) + ")]\nArea="+to_string(area)+" Perimeter="+to_string(perimeter);
}

void Rectangle::move(int newX, int newY)
{
	points.clear();
	leftTop.x = newX;
	leftTop.y = newY;
	calculatePoints();
}

void Rectangle::scale(float scaleX, float scaleY)
{
	points.clear();
	width = width * scaleX;
	height = height * scaleY;
	calculatePoints();
	calculateArea();
	calculatePerimeter();
}

