#include <iostream>

int main()
{
	//{


	//	bool a{};
	//	bool a = false;

	//	int arr[12]{};


	//	std::cout << arr[0] << '\n';

	//	//...

	//	int begin = 3;
	//	int end = 5;

	//	for (int i = begin - 1; i < end; i++)
	//	{
	//		std::cout << i << '\n';
	//	}
	//}
	/*{
		short arr[4]{ 10, 20, 30, 42 };

		for (int i = 0; i < 4; i++)
		{
			std::cout << (void*)(arr + i) << '\n';
		}
	}*/


	//std::cout << 0x38 - 0x3C;

	///////////////////
	//{
	//	// 
	//	int arr[3][3]
	//	{
	//			  // 0   1   2
	//		/* 0 */ {10, 15, 90},
	//		/* 1 */ {42, 20, 11},
	//		/* 2 */ {16, 22, 30}
	//	};

	//	arr[2][0] *= 2;

	//	std::cout << arr[2][0];
	//}


	//{
	//	int arr[3][3]
	//	{
	//			  // 0   1   2
	//		/* 0 */ {10, 15, 90},
	//		/* 1 */ {42, 20, 11},
	//		/* 2 */ {16, 22, 30}
	//	};

	//	std::cout << arr[0][3] << '\n'; // 0 * 3 + 3
	//	std::cout << arr[0][7] << '\n'; // 0 * 3 + 7

	//	std::cout << arr[1][0] << '\n'; // 1 * 3 + 0
	//	std::cout << arr[2][1] << '\n'; // 2 * 3 + 1
	//}

	{
		srand(time(0));
	

		const int rows = 3;
		const int cols = 3; // columns

		int matrix[rows][cols];
		int min = 33;
		int max = 126;	

		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				matrix[i][j] = (rand() % (max - min + 1) + min);
			}
		}
		
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				std::cout << matrix[i][j] << '\t';
			}

			std::cout << '\n';
		}
	}
	
}