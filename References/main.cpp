#include <iostream>
#include "Array.h"

int& foo()
{
    int* a = new int{42};

    std::cout << "a = " << a << '\n';

    return *a;
}

void foo(int& aref)
{
    aref = 100;
}

void myswap(int& a, int& b)
{
    int temp = a;

    a = b;
    b = temp;
}

int main(int argc, char* argv[])
{
    Array<int> arr = create<int>();

    append(arr, 10);
    append(arr, 20);
    append(arr, 30);
    append(arr, 40);
    append(arr, 50);

    print(arr);

    destroy(arr);


    // {
    //     int& value = foo();
    //
    //     std::cout << &value << '\n';
    //
    //     delete &value;
    // }
    //////////
    // {
    //     int a = 42;
    //     int b = 13;
    //
    //     myswap(a, b);
    //
    //     std::cout << a << '\n';
    //     std::cout << b << '\n';
    // }

    // const int* // pointer to const value
    // {
    //     const int* ptr = new int{90};
    //
    //     // *ptr = 100; // error
    //     
    //     std::cout << *ptr << '\n';
    //
    //     delete ptr;
    //     
    //     ptr = new int{60};
    //
    //     delete ptr;
    //     
    //     std::cout << *ptr << '\n';
    // }

    // int* const / const pointer
    // {
    //     int* const ptr = new int{90};
    //     
    //     std::cout << *ptr << '\n';
    //     
    //     *ptr = 100;
    //     
    //     std::cout << *ptr << '\n';
    //     
    //     delete ptr;
    //     
    //     // ptr = new int{60}; // error
    // }

    // const int* const / const pointer to const value
    // {
    //     const int* const ptr = new int{90};
    //
    //     // *ptr = 100; // error
    //     // ptr = new int{88}; // error
    //     
    //     std::cout << *ptr << '\n';
    //     
    //     delete ptr;
    //     
    //     // ptr = new int{60}; // error
    // }

    // {
    //     int a = 10;
    //     int b = 20;
    //
    //     int& ref = a;
    //
    //     ref = b;
    //     ref = 30;
    //
    //     std::cout << a << '\t' << b << '\n';
    //     std::cout << &a << '\n';
    //     std::cout << &ref << '\n';
    // }

    // {
    //     int a = 10;
    //     int b = 20;
    //
    //     int* ptr = &a;
    //
    //     ptr = &b;
    //     *ptr = 30;
    //
    //     std::cout << a << '\t' << b << '\n';
    //     std::cout << &b << '\n';
    //     std::cout << ptr << '\n';
    // }

    return 0;
}
