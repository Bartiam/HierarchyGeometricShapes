#include "GeometricShape.h"

void setup_color(const std::string& command, Color& color)
{
	if (command == "Red" || command == "red") color = RED;
	else if (command == "Blue" || command == "blue") color = BLUE;
	else if (command == "Green" || command == "green") color = GREEN;
	else if (command == "None" || command == "none") color = NONE;
	else
	{
		std::cout << "Error! There is no such color. Default Installation: None." << std::endl;
		color = NONE;
	}
}

int main()
{
	std::string command;
	double parametr;
	double x, y;
	Color color;

	while (true)
	{
		std::cout << "Commands: \nCircle\nSquare\nTriangle\nRestangle\nExit" << std::endl;
		std::cout << "Enter the command: ";
		std::cin >> command;

		if (command == "Circle" || command == "circle")
		{
			std::cout << "Specify the shape color(red,blue,green,none): ";
			std::cin >> command;
			std::cout << "Enter the parametr: ";
			std::cin >> parametr;

			setup_color(command, color);
			
			Circle circle(color, 2.3, 4.8, parametr);
			system("cls");
			circle.area_of_the_circle();
		}
		else if (command == "Square" || command == "square")
		{
			std::cout << "Specify the shape color(red,blue,green,none): ";
			std::cin >> command;
			std::cout << "Enter the parametr: ";
			std::cin >> parametr;

			setup_color(command, color);

			Square square(color, 2.3, 4.8, parametr);
			system("cls");
			square.area_of_the_square();
		}
		else if (command == "Triangle" || command == "triangle")
		{
			std::cout << "Specify the shape color(red,blue,green,none): ";
			std::cin >> command;
			std::cout << "Enter the parametr: ";
			std::cin >> parametr;

			setup_color(command, color);

			EquilateralTriangle triangle(color, 2.3, 4.8, parametr);
			system("cls");
			triangle.area_of_the_triangle();
		}
		else if (command == "Restangle" || command == "restangle")
		{
			int height;
			std::cout << "Specify the shape color(red,blue,green,none): ";
			std::cin >> command;
			std::cout << "Enter the width and height: ";
			std::cin >> parametr >> height;

			setup_color(command, color);

			Rectangle rectangle(color, 2.3, 4.8, parametr, height);
			system("cls");
			rectangle.area_of_the_rectangle();
		}
		else if (command == "Exit" || command == "exit") return 0;
		else std::cerr << "Error! Incorrect input command. Try again. " << std::endl;
	}
}
