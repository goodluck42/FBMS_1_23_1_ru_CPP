#include <codecvt>
#include <iostream>
#include <Windows.h>

int main(int argc, char* argv[])
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    
    //Array<Array<Array<wchar_t>>> // wchar_t**

    char* text = new char[32] {};
    
    std::cin.getline(text, 32);

    std::wcout << text << '\n';
    
    for (int i = 0; i < 32; ++i)
    {
        std::cout << (int)text[i] << '\n';
    }
    
    delete[] text;
    //
    // char** languages = new char*[3];
    //
    // languages[0] = new char[64];
    // languages[1] = new char[64];
    // languages[2] = new char[64];
    //
    // strcpy_s(languages[0], 64, "C");
    // strcpy_s(languages[1], 64, "C++");
    // strcpy_s(languages[2], 64, "C#");
    //
    // for (int i = 0; i < 3; ++i)
    // {
    //     std::cout << languages[i] << '\n';
    // }
    //
    // for (int i = 0; i < 3; ++i)
    // {
    //     delete[] languages[i];
    // }
    //
    // delete[] languages;
    //
    //
    std::cout << '\n';
    system("pause");
    return 0;
}
