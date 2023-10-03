#include <iostream>
#include <string>
#include <random>
#include <conio.h>
#include <Windows.h>

void change_ptr(int** ptr)
{
    // std::cout << **ptr << '\n';
    delete *ptr; // delete 0x9ffc;
    *ptr = new int{100}; // // ptr = 0x9cfa
}

int** generate_random_md_array(int rows, int cols)
{
    std::default_random_engine engine(time(0));
    std::uniform_int_distribution<int> range(10, 99);

    int** mdarr = new int*[rows]{};

    for (int i = 0; i < rows; ++i)
    {
        mdarr[i] = new int[cols];
    }

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            *(*(mdarr + i) + j) = range(engine);
            //mdarr[i][j] = range(engine);
        }
    }

    return mdarr;
}

void destroy_md_array(int** mdarray, int rows)
{
    for (int i = 0; i < rows; ++i)
    {
        delete[] mdarray[i];
    }

    delete[] mdarray;
}

void print_array(int* array, int size)
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

void print_array(int** array, int rows, int cols)
{
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


int main(int argc, char* argv[])
{
    /*{
        int* ptr = new int{90}; // ptr = 0x9ffc
    
        change_ptr(&ptr);

        std::cout << *ptr;

        delete ptr;
    }*/

    /*{
        int** mdarr = new int*[3]{};
    
        mdarr[0] = new int[3]{10, 20, 90}; // *md_arr
        mdarr[1] = new int[3]{67, 69, 89}; // *(md_arr + 1)
        mdarr[2] = new int[3]{11, 22, 33}; // *(md_arr + 2)
    }*/

    /*{

        int rows = 3;
        int cols = 5;
        
        int** mdarr = generate_random_md_array(rows, cols);

        print_array(mdarr, rows, cols);

        destroy_md_array(mdarr, rows);
    }*/

    {
        int arr[3][3]
        {
            {1, 2, 3},
            {14, 62, 83},
        };
    }


    std::cout << '\n';
    system("pause");
    return 0;
}

// int main(int argc, char* argv[])
// {
//     int i = 0;
//     while (true)
//     {        
//         if (_kbhit())
//         {
//             char s = _getch();
//             
//             std::cout << s <<'\n';
//         }
//
//         std::cout << i++ << '\n';
//         Sleep(100);
//     }
//     
//     return 0;
// }
