#include <iostream>
#include <cmath>

int main()
{
	std::cout << "THE FIRST EXAMPLE MATH DISPLAY!\n";
	std::cout << "Hi, please enter two whole numbers: ";

	int x,y;

	std::cin >> x >> y;
	std::cout << "Addition: " << x + y << endl;
	std::cout << "Subtraction: " << x - y << endl;
	std::cout << "Multiplication: " << x * y << endl;
	if(y != 0)
	{
		std::cout << "Division: " << x / y << endl;
		std::cout << "Remainder: " << x % y << endl;
	}
	else
	{
		std::cout << "Dividing by zero is not a number." << endl;
	}
	std::cout << "Square Root: " << sqrt(x) << endl;
	std::cout << "Square: " << pow(x, y) << endl;

	return 0;
}
