#include <iostream>
#include <random>

constexpr int default_rows = 3;
constexpr int default_cols = 4;

void print_array(int array[], int size);
void print_array(double array[], int size);
void print_array(int array[][default_cols], int rows, int cols = default_cols);

// double sum(int a, int b, int c = 10)
// {
//     std::cout << "double sum(int a, int b, int c = 10);\n";
//     
//     return a + b + c;
// }

double sum(int a, int b)
{
    std::cout << "double sum(int a, int b);\n";
    
    return a + b;
}

// int sum(int a, int b)
// {
//     std::cout << "int sum(int a, int b);\n";
//
//     return a + b;
// }

double sum(double a, int b)
{
    std::cout << "double sum(double a, int b);\n";
    
    return a + b;
}

double sum(int a, double b)
{
    std::cout << "double sum(int a, double b);\n";
    
    return a + b;
}

char sum(char a, int b)
{
    std::cout << "char sum(char a, int b);\n";

    return a + b;
}

int main(int argc, char* argv[])
{
    // {
    //     std::default_random_engine engine(time(0));
    //     std::uniform_real_distribution<double> range(1, 9);
    //
    //     constexpr int size = 12;
    //     double arr[size];
    //
    //     for (int i = 0; i < size; ++i)
    //     {
    //         arr[i] = range(engine);
    //     }
    //
    //     print_array(arr, size);
    // }

    /*{
        //std::cout << sum((double)1, 25) << '\n';
        //std::cout << sum(1, 25, 10) << '\n';
        //std::cout << sum('A', 5) << '\n';
    }*/

    {
        constexpr int rows = 3;
        constexpr int cols = 4;
        
        int matrix[rows][cols]
        {
            {51, 32, 23, 15},
            {22, 12, 53, 52},
            {19, 52, 67, 53},
        };

        print_array(matrix, rows);
    }
    
    return 0;
}

void print_array(int array[][default_cols], int rows, int cols)
{
    /*
     * {
     *      { 1, 2, 3, 4 },
     *      { 5, 6, 7, 8 }
     * }
     */
    std::cout << "{\n";
    for (int i = 0; i < rows; ++i)
    {
        std::cout << '\t';
        print_array(array[i], cols);

        if (i != rows - 1)
        {
            std::cout << ',';
        }
        
        std::cout << '\n';
    }
    std::cout << "}";
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

void print_array(double array[], int size)
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