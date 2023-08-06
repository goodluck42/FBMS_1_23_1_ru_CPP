#include <iostream>

//enum FileMode // C version
//{
//	READ = 'r',
//	WRITE = 'w',
//	APPEND = 'a',
//	APPEND_READ = '+' // a+,
//};

enum class FileMode // C++ version
{
	READ = 'r',
	WRITE = 'w',
	APPEND = 'a',
	APPEND_READ = '+' // a+,
};


int main()
{
	//system("color fc");

	std::string s;
	std::cin >> s;
	system(("color " + s).c_str());

	int cout = 42;

	std::cout << cout;

	// :: - scope resolution operator
	/* {
		using enum FileMode; // C++20 only

		FileMode fmod = READ;

		switch (fmod)
		{
			case READ:
				break;
			case WRITE:
				break;
			case APPEND:
				break;
			case APPEND_READ:
				break;
			default:
				break;
		}
	}*/

	

	/*{
		int a = (int)FileMode::READ + 2;

		cout << a;
	}*/

	/*{
		FileMode fmod = (FileMode)43;

		int choice;

		cin >> choice;

		if ((FileMode)choice == fmod)
		{
			cout << "OK\n";
		}
	}*/

	/* {
		char mode;

		cout << "Enter mode: " << '\n';
		cin >> mode;

		if (mode >= 65 && mode <= 90)
		{
			mode += 32;
		}

		FileMode fmod = (FileMode)mode;

		switch (fmod)
		{
			case FileMode::READ:
			{
				cout << "reading file";

				break;
			}
			case FileMode::WRITE:
			{
				cout << "writing to file";
				break;
			}
			case FileMode::APPEND:
			{
				cout << "appending to file";
				break;
			}
			case FileMode::APPEND_READ:
			{
				cout << "Appending or reading file";
				break;
			}
			default:
				cout << "no such mode" << '\n';
		}
	}*/

	
}