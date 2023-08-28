#pragma once
#include <iostream>
#include <math.h>
#include <string>

#define PI 3.14

enum Color { NONE = 1, RED, BLUE, GREEN };

class GeometricShape
{
private:
	Color color;
	double coorX;
	double coorY;

public:
	void set_color(const Color& color);
	void set_coor_X(const double& coorX);
	void set_coor_Y(const double& coorY);
};

class Circle : public GeometricShape
{
	double radius;
public:
	Circle(const Color& color, const double& coorX,
		const double& coorY, const double& radius);

	void area_of_the_figure()
	{
		std::cout << "the area of the circle: " << PI * std::pow(radius, 2) << std::endl;
	}
};

class Square : public GeometricShape
{
	double edgeLength;
};

class EquilateralTriangle : public GeometricShape, public Square
{

};

class rectangle : public GeometricShape
{
	double width;
	double height;
};