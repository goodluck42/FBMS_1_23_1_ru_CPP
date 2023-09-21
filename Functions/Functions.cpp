#include  <iostream>

int sum(int a, int b); // function prototype / function declaration
bool is_negative(int value);

void print_array(int array[], int size);

int main(int argc, char* argv[])
{
    constexpr int size = 6;
    
    int arr[size] {10, 20, 30, 40, 42, 50};
    
    print_array(arr, size);

    //std::cout << sizeof(arr) / sizeof(int);

    // int res = sum(1, 2);
    //
    // std::cout << res;

    // std::cout << is_negative(5);

    return 0;
}

void print_array(int array[], int size)
{
    if (size == 0)
    {
        std::cout << "{}";
        
        return;
    }
    
    std::cout << "{ ";

    for (int i = 0; i < size; ++i)
    {
        std::cout << array[i];

        if (i != size - 1)
        {
            std::cout << ", ";
        }
    }

    std::cout << " }";
}

bool is_negative(int value)
{
    if (value < 0)
    {
        return true;
    }

    return false;
}


int sum(int a, int b) // function definition & function signature
{
    int result = a + b;

    return result;
}
