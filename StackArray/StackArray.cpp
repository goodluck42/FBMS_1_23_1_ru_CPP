#include <iostream>
#include <random>
#include <iomanip>

int main()
{
	/*{
		bool a{};

		std::cout << std::boolalpha;

		std::cout << a << '\n';
	}*/

	// Stack arrays

	/*{
		int arr[3]{};

		arr[0] = 42;
		arr[1] = 10;

		std::cout << arr[0] << '\n';
		std::cout << arr[1] << '\n';
		std::cout << arr[2] << '\n';
	}*/

	/* {
		constexpr int size = 4;

		int arr[size]{ 10, 75, 87 };

		std::cout << arr[0] << '\n';
		std::cout << arr[1] << '\n';
		std::cout << arr[2] << '\n';
		std::cout << arr[3] << '\n';

		std::cout << *arr;
	}*/

	/* {
		constexpr int size = 4;

		int arr[size];

		for (size_t i = 0; i < size; i++)
		{
			std::cout << '[' << i << ']' << " = ";

			// 0 1 2 3
			std::cin >> arr[i];
		}

		std::cout << "------------\n";

		for (size_t i = 0; i < size; i++)
		{
			std::cout << arr[i] << '\n';
		}
	}*/

	// Random int array
	/* {
		std::default_random_engine engine(time(0));
		std::uniform_int_distribution<int> my_range(10, 99);

		constexpr int size = 10;

		int arr[size];

		for (size_t i = 0; i < size; i++)
		{
			arr[i] = my_range(engine);
		}

		for (size_t i = 0; i < size; i++)
		{
			std::cout << arr[i] << '\n';
		}
	}*/

	// Random float/double array
	/* {
		std::default_random_engine engine(time(0));
		std::uniform_real_distribution<double> my_range(1, 9);

		constexpr int size = 10;

		double arr[size];

		for (size_t i = 0; i < size; i++)
		{
			arr[i] = my_range(engine);
		}

		std::cout << std::setprecision(16);

		for (size_t i = 0; i < size; i++)
		{
			std::cout << arr[i] << '\n';
		}
	}*/

	// C style random
	/*{
		srand(time(0));

		constexpr int size = 10;
		double arr[size];

		int min = 10;
		int max = 100;

		for (size_t i = 0; i < size; i++)
		{
			arr[i] = rand() % (max - min + 1) + min;
		}

		for (size_t i = 0; i < size; i++)
		{
			std::cout << arr[i] << '\n';
		}
	}*/

	{
		int arr[4]{ 10, 20, 30, 40 };
	}
}