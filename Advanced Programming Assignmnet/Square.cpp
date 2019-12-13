#include "Square.h"

string Square::toString()
{
	return "Square[e=" + to_string(edge) + "]\nPoints[(" + to_string(points[0].x) +
		"," + to_string(points[0].y) + ")(" + to_string(points[1].x) + "," + to_string(points[1].y) + ")("
		+ to_string(points[2].x) + "," + to_string(points[2].y) + ")(" + to_string(points[3].x) +
		"," + to_string(points[3].y) + ")]\nArea=" + to_string(area) + " Perimeter=" + to_string(perimeter);
}


Square::Square(int x, int y, int e)
{
	leftTop.x = x;
	leftTop.y = y;
	edge = e;
	calculatePoints();
	calculatePerimeter();
	calculateArea();


}

void Square::calculatePerimeter()
{
	perimeter = round((edge * 4)*10)/10;
}

void Square::calculateArea()
{
	area = round((edge * edge)*10)/10;
}

void Square::calculatePoints()
{
	points.push_back(leftTop);//Top Left
	points.push_back(Point(leftTop.x + edge, leftTop.y));//Top Right
	points.push_back(Point(leftTop.x + edge, leftTop.y + edge));//Bottom Right
	points.push_back(Point(leftTop.x, leftTop.y + edge));//Bottom Left
}

void Square::move(int newX, int newY)
{
	points.clear();
	leftTop.x = newX;
	leftTop.y = newY;
	calculatePoints();
}

void Square::scale(float scaleX, float scaleY)
{
	points.clear();
	edge = edge * scaleX;
	calculatePoints();
	calculateArea();
	calculatePerimeter();

}
