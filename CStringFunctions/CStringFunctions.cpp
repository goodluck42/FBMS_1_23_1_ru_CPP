#include <iostream>

// SFML C++

int main(int argc, char* argv[])
{

    // strcmp & _stricmp
    /*{
        char str1[16] = "Hello";
        char str2[16] = "hello";

        // 1: str1 > str2
        // -1: str1 < str2
        // 0: str1 == str2
        int result = _stricmp(str1, str2);
        
        std::cout << result << '\n';
    }*/

    // strcat_s
    /*{
        char* str1 = new char[24] {"C# C"};
        char* str2 = new char[] {"C++"};

        //strcpy_s(str1 + 3, 24, str2);
        strcat_s(str1, 24, str2);
        
        std::cout << str1;

        delete[] str1;
        delete[] str2;
    }*/

    // memcpy
    /*{
        int len = 3;
        int* arr = new int[len] {10, 20, 30};
        int* copy = new int[len];
        
        memcpy(copy, arr, len * sizeof(int));

        for (int i = 0; i < len; ++i)
        {
            std::cout << copy[i] << '\n';
        }

        delete[] arr;
        delete[] copy; 
    }*/

    // strlwr & strupr
    /*{
        char* data = new char[6] {"Test"};

        // _strupr_s(data, strlen(data) + 1);
        _strlwr_s(data, strlen(data) + 1);
        
        std::cout << data;
    }*/

    // strchr
    /*{
        char* text = new char[32];

        strcpy_s(text, 32, "Hello from C++ file");

        char* result = strchr(text, 'C');

        if (result != nullptr)
        {
            std::cout << result;
        }

        delete[] text;
    }*/
    
    // strstr
    /*{
        char* text = new char[32];

        strcpy_s(text, 32, "Hello from C++ file");

        char* result = strstr(text, "C++");

        if (result != nullptr)
        {
            std::cout << result;
        }

        delete[] text;
    }*/

    // ato*
    {
        //int result = atoi("100");
        //double result = atof("100.5");
        //long result = atol("105");
        //long long result = atoll("103");

        //std::cout << result * 2;
    }

    // strto*
    {
        
    }
    
    return 0;
}
