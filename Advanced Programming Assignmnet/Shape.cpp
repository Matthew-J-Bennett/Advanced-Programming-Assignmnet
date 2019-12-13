#include "Shape.h"

Shape::Shape()
{
}

Shape::Shape(int x, int y)
{
	leftTop = Point(x, y);
}

string Shape::toString()
{
	return "";
}

void Shape::calculateArea()
{
}

void Shape::calculatePerimeter()
{
}

ostream& operator <<(ostream& output, Shape* r) {
	output << r->toString();
	return output;
}