#include "GeometricShape.h"

int main()
{
	std::string command;
	double x, y;
	std::string color;
	double parametr;

	while (true)
	{
		std::cout << "Cmmands: \nCircle\nSquare\nTriangle\nRestangle\nExit" << std::endl;
		std::cout << "Enter the command: ";
		std::cin >> command;

		if (command == "Circle" || command == "circle")
		{
			std::cout << "Enter the coordinates of the center of the circle: ";
			std::cin >> x >> y;
			std::cout << "Specify the shape color(red,blue,green,none): ";
			std::cin >> color;
			std::cout << "Enter the radius of the circle: ";
			std::cin >> parametr;

			if (color == "Red" || color == "red") color = 2;
			else if (color == "Blue" || color == "blue") color = 3;
			else if (color == "Green" || color == "green") color = 4;
			else if (color == "None" || color == "none") color = 1;
			else
			{
				std::cout << "Error! There is no such color. Default Installation: None." << std::endl;
				color = 1;
			}
		}
		else if (command == "Square" || command == "square")
		{

		}
		else if (command == "Triangle" || command == "triangle")
		{

		}
		else if (command == "Restangle" || command == "restangle")
		{

		}
		else if (command == "Exit" || command == "exit") return 0;
	}
}
