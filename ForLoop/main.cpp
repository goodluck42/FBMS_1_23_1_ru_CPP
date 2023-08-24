#include <iostream>
#include <thread>
#include <chrono>
#include <Windows.h>


int main()
{
	//   1*           2    4
	//for (int i = 0; i < 5; i++)
	//// 3
	//{
	//	std::cout << "i = " << i << '\n';
	//}


	// for (int i = 0; i < 5; std::cout << i++ << '\n');

	// For sample 2
	/*{
		int begin;
		int end;

		std::cin >> begin;
		std::cin >> end;

		std::cout << "------\n";

		for (; begin <= end; ++begin)
		{
			std::cout << begin << '\n';
		}
	}*/

	// For sample 3 (endless loop)
	/*{
		for (unsigned char i = 0;; ++i)
		{
			std::cout << (int)i << '\n';

			if (i == 50)
			{
				break;
			}

			Sleep(50);
			
		}
	}*/

	// For sample 4
	/*{
		for (int i = 0; i < 10; ++i)
		{
			if (i >= 3 && i <= 5)
			{
				continue;
			}

			std::cout << i << '\n';
		}
	}*/

	// For sample 5
	{
		for (int i = 0; i < 5; ++i)
		{
			for (int j = 0; j < 5; ++j) // отрисовка строки
			{
				std::cout << "* ";
			}

			std::cout << '\n';
		}
	}



}