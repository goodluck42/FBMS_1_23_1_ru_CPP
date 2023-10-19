#include <iostream>
#include <windows.h>

struct Test
{
    int a; // 4 of 8*
    short b; // 6 of 8
    double c; // 8 of 8*
    short d; // 2 of 8* 
    int x; // 4 of 8* ???
    char x2; // 5 of 8
};

struct Particle
{
    int x; // 4 of 8*
    int y; // 8 of 8
    int z; // 4 of 8*
    double weight; // 8 of 8*
};

struct A
{
    bool* b; // 8 of 8*
    short a; // 2 of 8*
    short c; // 4 of 8
    char x; // 5 of 8
};

struct TestArray
{
    int a; // 4 of 4*
    int b; // 4 of 4*
    short x; // 2 of 4*
    int c; // 4 of 4*
};

struct Inner
{
    double a;
    int b;
    char c;
};

struct N
{
    int a; // 4 of 8*
    char b; // 5 of 8
    Inner x; // 8 of 8* x2 (16)
};

void foo(N* obj)
{
    
}

int main(int argc, char* argv[])
{
    // std::cout << sizeof(A);
    // {
    //     TestArray test {1, 10, 20, 90};
    //     
    //
    //     std::cout << test.a << '\n'; // test + 0b
    //     std::cout << test.b << '\n'; // test + 4b
    //     std::cout << test.x << '\n'; // test + 6b
    //     std::cout << test.c << '\n'; // test + 10b
    //
    //     int* arr = (int*)&test;
    //
    //     std::cout << arr[0] << '\n';
    //     std::cout << arr[1] << '\n';
    //     std::cout << *(short*)(arr + 2) << '\n';
    //     std::cout << arr[3] << '\n';
    //
    //     int* data = new int[100];
    //
    //     std::cout << data + 2 << '\n';
    //     std::cout << *(data + 3) << '\n';
    //
    //     delete[] data;
    //
    //     system("pause");
    // }

    struct LocalStruct
    {
        int data;
    } local;

    local.data = 42;

    LocalStruct another_local;

    another_local.data = 20;
    
    LocalStruct another_local2;

    another_local2.data= 90;
    
    LocalStruct another_local3;

    another_local3.data = 100;
        
    struct
    {
        int value;
        int size;
    } anon_struct;

    // ??? anon_struct2;
    
    return 0;
}
