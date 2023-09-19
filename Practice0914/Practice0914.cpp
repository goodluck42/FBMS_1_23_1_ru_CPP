#include <iostream>

int main(int argc, char* argv[])
{
    int r = rand() % 10;

    std::cout << "r = " << r << '\n';

    int arr[6]{10, 20, 30, 42, 50, 60};

    int* ptr = arr + 4;

    std::cout << ptr[-1];
    
    return 0;
}
