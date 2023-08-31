#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <random>

int main()
{
	std::default_random_engine engine(time(0));
	std::uniform_int_distribution<int> range(10, 99000);

	constexpr size_t size = 12000; // 93168
	int arr[size];

	for (int i = 0; i < size; i++)
	{
		arr[i] = range(engine);
	}

	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << '\n';
	}
	
	{
		int a = 42;
		int b = 13;

		int temp = a;

		a = b;
		b = temp;

		std::cout << "a = " << a << '\n';
		std::cout << "b = " << b << '\n';
	}

	// Bubble Sort
	/* {
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size - i - 1; j++) // pass
			{
				if (arr[j] > arr[j + 1]) // swap
				{
					int temp = arr[j];

					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}


		std::cout << "---------\n";
		for (int i = 0; i < size; i++)
		{
			std::cout << arr[i] << '\n';
		}
	}*/

	// Selection Sort
	{
		for (int i = 0; i < size - 1; i++)
		{
			int min = i;

			for (int j = i + 1; j < size; j++)
			{
				if (arr[j] < arr[min])
				{
					min = j;
				}
			}

			if (min != i)
			{
				int temp = arr[i];

				arr[i] = arr[min];
				arr[min] = temp;
			}
		}

		std::cout << "---------\n";
		for (int i = 0; i < size; i++)
		{
			std::cout << arr[i] << '\n';
		}
	}

	// Insertion Sort
	/*{
		for (int i = 1; i < size; i++)
		{
			int value = arr[i];

			int j = i - 1;

			while (arr[j] < value && j >= 0)
			{
				arr[j + 1] = arr[j];
				--j;
			}

			arr[j + 1] = value;
		}

		std::cout << "---------\n";
		for (int i = 0; i < size; i++)
		{
			std::cout << arr[i] << '\n';
		}
	}*/


	// Linear Search
	/* {
		int target;

		std::cout << "Enter value to find -> ";
		std::cin >> target;

		// find
		for (int i = 0; i < size; i++)
		{
			if (arr[i] == target)
			{
				std::cout << target << " found at " << i << " index" << '\n';

				break;
			}
		}

		// reverse find
		// for (int i = size - 1; i >= 0; i--)
		// {
		// 	if (arr[i] == target)
		// 	{
		// 		std::cout << target << " found at " << i << " index" << '\n';
		//
		// 		break;
		// 	}
		// }
	}*/

	// Double Ended Search
	/*{
		int target;

		std::cout << "Enter value to find -> ";
		std::cin >> target;

		for (int i = 0, j = size - 1; i < j; ++i, --j)
		{
			if (arr[i] == target)
			{
				std::cout << target << " found at " << i << " index (left)" << '\n';

				break;
			}

			if (arr[j] == target)
			{
				std::cout << target << " found at " << j << " index (right)" << '\n';

				break;
			}
		}
	}*/

	// Binary Search
	// Temporary dont work
	{
		int target;
		int iterations = 0;

		std::cout << "Enter value to find -> ";
		std::cin >> target;


		int l = 0;
		int r = size - 1;


		while (l <= r)
		{
			iterations++;
			int m = l + (r - l) / 2;

			if (arr[m] == target)
			{
				std::cout << target << " found at " << m << " index" << '\n';

				break;
			}
			else if (arr[m] < target)
			{
				l = m + 1;
			}
			else
			{
				r = m - 1;
			}
		}

		std::cout << "iterations = " << iterations;
	}
	
}