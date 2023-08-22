#if 0
#include <iostream>

enum class Color
{
	RED = 'R',
	GREEN = 'G',
	BLUE = 'B',
};

enum Color2
{
	RED
};

using namespace std;

int main()
{
	// :: - scope resolution operator
	int cout = 5;
	
	std::cout << "Hello C++\n";

	char c;

	std::cin >> c;

	if (c != 'R' && c != 'G' && c != 'B')
	{
		std::cout << "Not a color";

		return 1;
	}

	Color color = (Color)c;

	switch (color)
	{
		case Color::RED:
			std::cout << "RED\n";
			break;
		case Color::GREEN:
			std::cout << "GREEN\n";
			break;
		case Color::BLUE:
			std::cout << "BLUE\n";
			break;
		default:
			std::cout << "Not a color\n";
	}

	/*double b = 20.5;

	std::cout << (int)b;*/

	// Арифм:
	// +, -, *, /, %
	// Сравнение:
	// >, <, >=, <=, !=, ==, <=>
	// Логические:
	// &&, ||, !
	// Присваивание:
	// =, +=, -=, *=, /=, %=


	/*setlocale(0, "ru");
	char c = 'X';

	switch (c)
	{
		case '@':
		{
			std::cout << "собачка\n";
		}
		case '!':
		{
			std::cout << "знак\n";
			break;
		}
		default:
		{
			std::cout << "none\n";
		}
	}*/
}
#endif