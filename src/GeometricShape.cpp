#include "GeometricShape.h"

void GeometricShape::set_color(const Color& color) { this->color = color; }

void GeometricShape::set_coor_X(const double& coorX) { this->coorX = coorX; }

void GeometricShape::set_coor_Y(const double& coorY) { this->coorY = coorY; }

Circle::Circle(const Color& color, const double& coorX, const double& coorY, const double& radius)
{
	this->set_color(color);
	this->set_coor_X(coorX);
	this->set_coor_Y(coorY);
	this->radius = radius;
}