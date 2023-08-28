#pragma once
#include <iostream>
#include <math.h>
#include <string>

#define PI 3.14

enum Color { NONE = 1, RED, BLUE, GREEN };

// Родительский класс фигур;
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

	void draw_describing_rectangle(double& parametr1, double& parametr2);
	void information();
};
// Класс окружности;
class Circle : public GeometricShape
{
	double radius;
public:
	Circle(const Color& color, const double& coorX, const double& coorY, const double& radius);
	void area_of_the_circle();
};
// Класс квадрата;
class Square : public GeometricShape
{
	double length;
public:
	Square(const Color& color, const double& coorX, const double& coorY, const double& length);
	void area_of_the_square();
};
// Класс равностороннего треугольника;
class EquilateralTriangle : public GeometricShape
{
	double length;
public:
	EquilateralTriangle(const Color& color, const double& coorX, const double& coorY, const double& length);
	void area_of_the_triangle();
};
// Класс прямоугольника;
class Rectangle : public GeometricShape
{
	double width;
	double height;
public:
	Rectangle(const Color& color, const double& coorX, const double& coorY,
		const double& width, const double& height);
	void area_of_the_rectangle();
};