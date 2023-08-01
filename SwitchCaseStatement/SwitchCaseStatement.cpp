#include <iostream>
#include <Windows.h>

using namespace std;



int main()
{
	int value = -20;
	// [1, 100]

	/*if (value >= 1 && value <= 100)
	{
		cout << "in range\n";
	}
	else if (...)
	{

	}*/

	//cout << "always\n";

	/////////////////
	//{
	//	int expr = 66;
	//	const int first_case = 20;
	//	const char at = '@';

	//	switch (expr)
	//	{
	//		default:
	//		{
	//			cout << "default case" << '\n';

	//			break;
	//		}
	//		case first_case:
	//		{
	//			cout << "expr = 20" << '\n';

	//			break;
	//		}

	//		case 50:
	//		{
	//			cout << "expr = 50" << '\n';

	//			break;
	//		}
	//		case at:
	//		{
	//			cout << "dog" << '\n';
	//			break;
	//		}
	//		// Error
	//		/*case 64:
	//		{
	//			cout << "dog" << '\n';
	//			break;
	//		}*/
	//		case 42:
	//		{
	//			cout << "expr = 42" << '\n';
	//		}
	//	}
	//}

	/* {
		char mode; // r, w, a

		cout << "Enter mode (r, w, a)" << '\n';
		cin >> mode;

		switch (mode)
		{
			case 'r':
				cout << "reading file";
				break;
			case 'w':
				cout << "writing to file";
				break;
			case 'a':
				cout << "appending to file";
				break;
			default:
				cout << "no such mode" << '\n';
		}
	}*/

	/* {
		// 

		char movement = 'w';

		switch (movement)
		{
			case 'W':
			case 'w':
			{
				cout << "moving forward" << '\n';

				break;
			}
			case 'A':
			case 'a':
			{
				cout << "moving left" << '\n';
				break;
			}
			case 'S':
			case 's':
			{
				cout << "moving backward" << '\n';
				break;
			}
			case 'D':
			case 'd':
			{
				cout << "moving right" << '\n';
				break;
			}
		}
	}*/

	// MENU

	int choice;

	cout << "1. New game" << '\n';
	cout << "2. Load game" << '\n';
	cout << "3. Settings" << '\n';
	cout << "4. Exit" << '\n';

	cout << "Enter option -> ";
	cin >> choice;

	switch (choice)
	{
		case 1:
			cout << "Starting new game!" << '\n';
			break;
		case 2:
			cout << "Loading game" << '\n';
			break;
		case 3:
			cout << "Settings opened" << '\n';
			break;
		default:
		case 4:
			cout << "Goodbye" << '\n';
			break;
	}
}