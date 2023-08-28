#include "GeometricShape.h"

// Сеттеры для установки параметров фигуры;
void GeometricShape::set_color(const Color& color) { this->color = color; }
void GeometricShape::set_coor_X(const double& coorX) { this->coorX = coorX; }
void GeometricShape::set_coor_Y(const double& coorY) { this->coorY = coorY; }

// Даёт информацию об объекте;
void GeometricShape::information()
{
	std::cout << "Coordinates: " << coorX << ":" << coorY << std::endl;
	switch (color)
	{
	case NONE: std::cout << "Color: " << "None color. " << std::endl; break;
	case RED: std::cout << "Color: " << "Red. " << std::endl; break;
	case BLUE: std::cout << "Color: " << "Blue. " << std::endl; break;
	case GREEN: std::cout << "Color: " << "Green. " << std::endl; break;
	}
}

// Рисует описывающий фигуру прямоугольник;
void GeometricShape::draw_describing_rectangle(double& parametr1, double& parametr2)
{
	std::cout << "Describing rectangle: " << std::endl;
	parametr2 *= 2;
    for (int i = 0; i < parametr1; ++i)
    {
        for (int j = 0; j < parametr2; ++j)
        {
			if (i == 0 || i >= parametr1 - 1)
				std::cout << "#";
			else if (j == 0 || j >= parametr2 - 1)
				std::cout << "#";
			else std::cout << " ";
        }
        std::cout << std::endl;
    }
}

// Конструктор класса Circle устанавливающий параметры родительского класса и свой уникальный параметр;
Circle::Circle(const Color& color, const double& coorX, const double& coorY, const double& radius)
{
	this->set_color(color);
	this->set_coor_X(coorX);
	this->set_coor_Y(coorY);
	this->radius = radius;
}

// Метод рассчёта площади окружности.
void Circle::area_of_the_circle() 
{
	double diametr = radius * radius;
	this->information();
	std::cout << "the area of the circle: " << PI * diametr << std::endl << std::endl;
	draw_describing_rectangle(diametr, diametr);
}
// Конструктор класса Square устанавливающий параметры родительского класса и свой уникальный параметр;
Square::Square(const Color& color, const double& coorX, const double& coorY, const double& length)
{
	this->set_color(color);
	this->set_coor_X(coorX);
	this->set_coor_Y(coorY);
	this->length = length;
}
// Метод рассчёта площади квадрата.
void Square::area_of_the_square()
{
	this->information();
	std::cout << "The area of the square: " << length * length << std::endl;
	draw_describing_rectangle(length, length);
}
// Конструктор класса EquilateralTriangle устанавливающий параметры родительского класса и свой уникальный параметр;
EquilateralTriangle::EquilateralTriangle(const Color& color, const double& coorX, const double& coorY, const double& length)
{
	this->set_color(color);
	this->set_coor_X(coorX);
	this->set_coor_Y(coorY);
	this->length = length;
}
// Метод рассчёта площади треугольника.
void EquilateralTriangle::area_of_the_triangle()
{
	this->information();
	std::cout << "The area of the square: " << (std::sqrt(3) / 4) * (std::pow(length, 2)) << std::endl;
	draw_describing_rectangle(length, length);
}
// Конструктор класса Rectangle устанавливающий параметры родительского класса и свой уникальный параметр;
Rectangle::Rectangle(const Color& color, const double& coorX, const double& coorY, const double& width, const double& height)
{
	this->set_color(color);
	this->set_coor_X(coorX);
	this->set_coor_Y(coorY);
	this->width = width;
	this->height = height;
}
// Метод рассчёта площади прямоугольника.
void Rectangle::area_of_the_rectangle()
{
	this->information();
	std::cout << "Area rectangle: " << width * height << std::endl;
	draw_describing_rectangle(width, height);
}
