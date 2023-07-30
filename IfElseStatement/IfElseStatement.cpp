#include <iostream>

using namespace std;

typedef unsigned long long uint64;

int main()
{
	setlocale(0, "ru");

	/* {


		cout << "Hello C++" << 14 << '\n';
		cout << "Goodbye Python" << '\n';

		// char(1), bool(1), short(2), int(2|4), long(4), float(4), double(8), long long(8) 

		cout << 1'972'900 << '\n';

		uint64 s = 20;

		cout << 20.0 << '\n'; // double

		bool b = 90;

		cout << boolalpha;

		cout << b << '\n';

		cout << noboolalpha;

		cout << b << '\n';

		cout << (float)20 / 3 << '\n';

		cout << 50 % '0' << '\n';
	}*/

	// IF-ELSE-STATEMENT

	/*int value = -2;

	if (value > 0)
	{
		auto result = "greater";

		cout << result << '\n';
	}
	else if (value < 0)
	{
		cout << "less" << '\n';
	}
	else
	{
		cout << "zero" << '\n';
	}*/

	// LOGICAL OPERATORS

	// && - and
	// || - or
	// ! - not
	
	//// && (an)
	/* {
		int age;
		bool has_logged_in;

		cin >> age;
		cin >> has_logged_in;

		if (age >= 18 && has_logged_in)
		{
			cout << "Access granted" << '\n';
		}
		else
		{
			cout << "You have no access" << '\n';
		}
	}*/

	//// || (or)
	/* {
		int age;
		bool is_admin;

		cin >> age;
		cin >> is_admin;

		if (age >= 18 || is_admin)
		{
			cout << "Access granted" << '\n';
		}
		else
		{
			cout << "You have no access" << '\n';
		}
	}*/

	//// ! (not)
	/* {
		int age = 20;

		if (!(age > 0 && age <= 65))
		{
			cout << "in range" << '\n';
		}
		else
		{
			cout << "not in range" << '\n';
		}
	}*/

	// >, <, >=, <=, !=, ==

	/*{
		FILE* file;

		fopen_s(&file, "file.txt", "r");

		if (file != nullptr)
		{
			char c;
			while ((c = fgetc(file)) != EOF)
			{
				cout << c;
			}

			fclose(file);
		}
	}*/
	


	// cout << result << '\n'; // error

	/////////////////
	// Task1

	/*{
		int result = 40;

		cout << result << '\n';

		{
			int result = 90;

			cout << result << '\n';
		}
	}

	// Task 2

	{
		int result = 45;

		cout << result << '\n';
	}*/

	return 0;
}