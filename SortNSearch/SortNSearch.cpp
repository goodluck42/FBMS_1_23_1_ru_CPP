#include <iostream>
#include <random>

int main()
{
	std::default_random_engine engine(time(0));
	std::uniform_int_distribution<int> range(10, 99);

	constexpr size_t size = 12;
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
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size - i - 1; j++) // pass
			{
				if (arr[j] < arr[j + 1]) // swap
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
	}

	
}