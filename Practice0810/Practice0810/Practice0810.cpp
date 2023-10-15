#include <iostream>
#include <random>
#include <Windows.h>


void f(int* ptr)
{
    std::cout << "f(): " << &ptr << '\n';

    // ptr = new int(10);
}

struct my_struct
{
    int a; // 4 of 8 (*)
    char b; // 5 of 8
    long long c; // 8 of 8 (*)
};


void f(int& ref)
{
    ref = 15;
}

int main(int argc, char* argv[])
{
    // {
    //     int a = 5;
    //     int b(5);
    //     int c{5};
    //     int d = {5};
    //     int e = (6);
    //
    //
    //     int x = 10;
    //     int& xref = x;
    //
    //     std::cout << xref;
    // }

    // int* ptr = new int(5);
    //
    // std::cout << "main(): " << &ptr << '\n';
    //
    // f(ptr);
    //
    // std::cout << *ptr << '\n';
    //     
    // delete ptr;


    // int* mem = new int(100);
    //
    // f(*mem);
    //
    // std::cout << *mem;

    std::default_random_engine engine(time(0));
    std::uniform_int_distribution<int> range(1, 8);

    std::cout << "The winner is..." << '\n';

    for (int j = 6 - 1; j > 0; --j)
    {
        std::cout << j << '\n';
        Sleep(1000);
    }
    
    std::cout << "= " << range(engine) << '\n';


    // Task2
    // hello world
    // a = 0
    // b = 0
    // c = 0
    // ...
    // d = 1
    // h = 1
    // e = 1
    // l = 3
    // o = 2
    // r = 1


    char c;

    std::cin >> c;

    c = (char)tolower(c);
    
    if (c >= 65 && c <= 90)
    {
        // 
    }
}
