#include <iostream>

int a = 5;

int main()
{
	//{
	//	int a = 10;

	//	a++; // increment
	//	a--; // decrement

	//	std::cout << a;
	//}
	//////// increment
	//{
	//	int a = 10;
	//	int c = a++; // postfix increment
	//	int b = ++a; // prefix increment

	//	std::cout << "c = " << c << '\n'; // 10
	//	std::cout << "a = " << a << '\n'; // 12
	//	std::cout << "b = " << b << '\n'; // 12
	//}

	//////// decrement
	//{
	//	int a = 10;
	//	int c = a--; // postfix decrement
	//	int b = --a; // prefix decrement

	//	std::cout << "c = " << c << '\n'; // 10
	//	std::cout << "a = " << a << '\n'; // 8
	//	std::cout << "b = " << b << '\n'; // 8
	//}

	//{
	//	int a = 10; // a = 11
	//	//      10  +  12
	//	int b = a++ + ++a;

	//	std::cout << a << '\n';
	//	std::cout << b << '\n';
	//}

	///// while
	/*{


		int i = 0;

		while (i < 10)
		{
			if (i == 3)
			{
				++i;
				continue;
			}

			if (i == 5)
			{
				break;
			}

			std::cout << ++i << '\n';
		}
	}*/

	///// do while
	/*{
		int i = 0;

		do
		{
			std::cout << i++ << '\n';
		} while (i < 10);
	}*/

	int choice;

	std::cout << "1. Task 1\n";
	std::cout << "2. Task 2\n";
	std::cout << "3. Exit\n";


	bool flag = true;

	while (flag)
	{
		std::cout << "Enter task -> ";
		std::cin >> choice;

		switch (choice)
		{
			case 1:
				std::cout << "Task1" << '\n';
				break;
			case 2:
				std::cout << "Task2" << '\n';
				break;
			case 3:
				flag = false;
				break;
		}
	}
}