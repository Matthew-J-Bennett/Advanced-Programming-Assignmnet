#pragma once
class Shape
{
public:
	//int leftTop;
	double area;
	bool isCircular;
	double perimiter;

	double calculateArea();
	void calculatePoints();
	void calculatePerimeter();
	void toString();
	Shape();

};

