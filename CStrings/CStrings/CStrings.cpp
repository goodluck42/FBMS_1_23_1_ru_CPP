#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

// template<typename T = double> void foo(T data)
// {
//     std::cout << typeid(data).name();
// }


void print(const char* str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        ++i;
    }

    printf("\n");
}

int main(int argc, char* argv[])
{
    /*{
        const char* str = "C++";
        const char* str2 = "C++";
        
        std::cout << (void*)str << '\n';
        std::cout << (void*)str2 << '\n';
        
        if (str == str2)
        {
            std::cout << "Equals" << '\n';
        }
        else
        {
            std::cout << "Not equals" << '\n';
        }
    }*/

    /*{
        char str[16] = "C++";
        char str2[16] = "C++";

        std::cout << (void*)str << '\n';
        std::cout << (void*)str2 << '\n';

        if (str == str2)
        {
            std::cout << "Equals" << '\n';
        }
        else
        {
            std::cout << "Not equals" << '\n';
        }
    }*/

    /*{
        //std::cout << "Hello\0world";
        
        char str[6];
        
        str[0] = 'C';
        str[1] = '#';
        
        std::cout << str;
    }*/


    // const char* DEFAULT_COLOR = "#00ff00";
    //
    // char* str = new char[6]{};
    //
    // str[0] = 'C';
    // str[1] = '+';
    // str[2] = '+';
    //
    // print("Hello world");
    // print(str);
    //
    // delete[] str;


    /*{
        int value;
    
        char buffer[64]; // = nullptr


        std::cin >> value;
    
        std::cin.ignore();
    
        std::cin.getline(buffer, 64);
    
        std::cout << value << '\n';
        std::cout << buffer << '\n';
    }*/


    // strlen
    /*{
        char buffer[64]; // = nullptr

        std::cout << "Enter string = ";
        
        std::cin.getline(buffer, 64);

        std::cout << "size of string = " << strlen(buffer) << '\n';
    }*/

    // strcpy_s
    /*{
        int size = 64;
        char* buffer = new char[size]{};

        strcpy_s(buffer, size, "Hello C++ Strings!");


        std::cout << buffer;

        delete[] buffer;
    }*/

    // strcpy
    {
        char text[] = "Hello C#";

        int size = strlen(text) + 1;
        
        char* buffer = new char[size]{};

        strcpy(buffer, text);

        std::cout << buffer;

        delete[] buffer;
    }
    
    return 0;
}
