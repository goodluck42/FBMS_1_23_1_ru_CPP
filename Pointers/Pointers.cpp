#include <iostream>

int* foo()
{
    int* arr = new int[4] {10, 20, 30, 40};

    return arr;
};


void print(int* arr, int size)
{
    // Variant 1
    int* current = arr;
    int* end = arr + size;
    
    while (current < end)
    {
        std::cout << *current << '\n';

        ++current;
    }

    // Variant 2
    // for (int i = 0; i < size; ++i)
    // {
    //     //std::cout << *(arr + i) << '\n';
    //     // std::cout << arr[i] << '\n';
    // }
    
    // std::cout << *arr << '\n';
    // std::cout << *(arr + 1) << '\n';
    // std::cout << *(arr + 2) << '\n';
    
    // std::cout << 0[arr] << '\n';
    // std::cout << 1[arr] << '\n';
    // std::cout << 2[arr] << '\n';
}

void change(int* ptr)
{
    *ptr *= 2;
}

int main(int argc, char* argv[])
{
   

    ///////////////
    /*{
        int value = 42;
        int* ptr = &value; // int* - pointer type

        *ptr = 10; // *ptr - dereference
    
        std::cout << value << '\n';
    
        // & - address of
        // *ptr - dereference
    

        std::cout << ptr << '\n';
    }*/

    /*{
        int* ptr = nullptr;

        std::cout << ptr << '\n';
    }*/

    /*{
        // Image = 2MB

        short* ptr = new short;
        
        // x64 - 8 bytes
        // x32 - 4 bytes

        std::cout << ptr << '\n';
        std::cout << sizeof(ptr) << '\n';
    }*/

    /*{
        // 8b - stack
        // 4b - heap
        int* ptr = new int; // dynamic memory

        // nullptr = 000000000

        if (ptr == nullptr)
        {
            std::cout << "Not enough memory!\n";
        }
        else
        {
            *ptr = 88;
            
            std::cout << ptr << '\n';
            
            std::cout << *ptr << '\n';
            
            delete ptr;
        }
    }*/

    /*{
        int arr[4] {10, 20, 30, 40};

        std::cout << arr << '\n';
        std::cout << *arr << '\n';
    }*/

    /*{
        srand(time(nullptr));
        
        int size;

        std::cin >> size;
        
        int* arr2 = new int[size];

        std::cout << "addr = " << arr2 << '\n';
        
        for (int i = 0; i < size; ++i)
        {
            arr2[i] = rand() % 100;
        }

        for (int i = 0; i < size; ++i)
        {
            std::cout << arr2[i] << '\n';
        }

        delete[] arr2;
    }*/

    // Kaboom
    /*{
        int value = 32;
        int* stack_ptr = &value;

        delete stack_ptr;
    }*/

    /*{
        int size = 5;
        int* arr = new int[size] {10, 20, 30, 40, 42};
        
        //std::cout << sizeof(arr) << '\n';

        // int* second = arr + 1;
        //
        // std::cout << *second << '\n';

        print(arr, size);
        
        delete[] arr;
    }*/
    

    // int* result = foo();
    //
    // std::cout << result[1] << '\n';
    //
    // delete[] result;


    int v = 40;

    change(&v);

    std::cout << v;
    
    return 0;
}
