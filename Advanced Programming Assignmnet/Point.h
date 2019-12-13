#pragma once
class Point
{
public:
	Point(int x, int y);
	Point();
	friend class Shape;
	friend class Circle;
	friend class Rectangle;
	friend class Square;

private:
	int x = 0;
	int y = 0;
};

