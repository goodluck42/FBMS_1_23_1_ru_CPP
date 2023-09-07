#include <iostream>
#include <random>

template <typename T>
T sum(T a, T b)
{
    //T value{};

    // std::cout << typeid(T).name() << '\n';

    T result = a + b;

    return result;
}

template <typename T1, typename T2>
auto sum(T1 a, T2 b)
{
    auto result = a + b;

    return result;
}


template <typename... Args>
auto sum(Args&&... args)
{
    return (args + ...);
}

/*
int sum(int a, int b)
{
    int result = a + b;

    return result;
}

double sum(double a, double b)
{
    double result = a + b;

    return result;
}*/

template <typename T>
void print_array(T array[], int size)
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

int main(int argc, char* argv[])
{
    /*{
        int arr[4]{1, 2, 3, 4};
        double arr2[4]{1.2, 2.7, 3.9, 4.3};

        print_array(arr, 4);
        std::cout << '\n';
        print_array(arr2, 4);

        std::cout << arr[0];
    }*/


    // {
    //     auto result = sum<double>(2.1, 2.5);
    //
    //     std::cout << result << '\n';
    // }

    // {
    //     auto result = sum(2.1, 2.4);
    //
    //     std::cout << result << '\n';
    // }

    /*{
        auto result = sum<int>(7, 2);
        auto result2 = sum<double>(2.1, 2.5);
        auto result3 = sum<double>(2.9, 2.5);

        std::cout << result << '\n';
        std::cout << result2 << '\n';
        std::cout << result3 << '\n';
    }*/

    /*{
        auto result = sum<long, double>(1L, 1.5);

        std::cout << result << '\n';
    }*/


    std::cout << sum(1, 5, 3, 9, 12, 15);

    return 0;
}
