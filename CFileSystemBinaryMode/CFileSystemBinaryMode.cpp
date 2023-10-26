#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

template <typename T>
T* shift(void* memory, int count = 0)
{
    return (T*)((char*)memory + count);
}

struct Metadata
{
    char type[16];
    int count;
};

int main(int argc, char* argv[])
{
    /*{
        void* memory = ::operator new(16); // malloc(4)

        for (int i = 0; i < 16; ++i)
        {
            std::cout << (void*)((char*)memory + i) << '\n';
        }
    
        {
            int* value = (int*)memory;
    
            *value = 100;
        }

        // intfloat
        {
            float* value = shift<float>(memory, 4);

            *value = 42.5f;
        }

        {
            int** value = shift<int*>(memory, 8);

            *value = (int*)memory;
        
        }

        {
            int* value = shift<int>(memory);
            float* value2 = shift<float>(memory, 4);
            int** value3 = shift<int*>(memory, 8);
        
            std::cout << *value << '\n';
            std::cout << *value2 << '\n';
            std::cout << std::hex << *value3 << '\n';
        }
    
        ::operator delete(memory); // free(memory)
    }*/


    // Write a single int to file
    /*{
        FILE* file = std::fopen("data.bin", "wb");
    
        if (file == nullptr)
        {
            return -1;
        }

        int value = 9123;
    
        (void)std::fwrite(&value, sizeof(int), 1, file);
        (void)std::fclose(file);
    }*/

    // Read a single int to file
    /*{
        FILE* file = std::fopen("data.bin", "rb");
    
        if (file == nullptr)
        {
            return -1;
        }

        int value;
        
        (void)std::fread(&value, sizeof(int), 1, file);

        std::cout << value;
        
        (void)std::fclose(file);
    }*/

    // Write dynamic array to file (4 elements)
    /*{
        FILE* file = std::fopen("data.bin", "wb");
    
        if (file == nullptr)
        {
            return -1;
        }
    
        int size = 4;
        int* arr = new int[size]{11, 23, 42, 99};
    
        (void)std::fwrite(arr, sizeof(int), size, file);
        
        delete[] arr;
        (void)std::fclose(file);
    }*/

    // Read dynamic array from file (4 elements)
    /*{
        FILE* file = std::fopen("data.bin", "rb");
    
        if (file == nullptr)
        {
            return -1;
        }
    
        int size = 4;
        int* arr = new int[size];
    
        (void)std::fread(arr, sizeof(int), size, file);
    
        for (int i = 0; i < size; ++i)
        {
            std::cout << arr[i] << '\n';
        }
        
        delete[] arr;
        (void)std::fclose(file);
    }*/

    // Write dynamic data with metadata
    /*{
        FILE* file = std::fopen("data.bin", "wb");

        if (file == nullptr)
        {
            return -1;
        }

        Metadata metadata{"double", 0};
        int size = metadata.count = 12;
        double* arr = new double[size]
        {
            1.2,
            2.3,
            4.5,
            6.7,
            10.2,
            11.2,
            13.9,
            20.10,
            10.90,
            90.1,
            89.11,
            42.13
        };

        (void)std::fwrite(&metadata, sizeof(Metadata), 1, file);
        (void)std::fwrite(arr, sizeof(double), metadata.count, file);
        (void)std::fclose(file);
        delete[] arr;
    }*/

    // Read dynamic data using metadata
    {
        FILE* file = std::fopen("data.bin", "rb");

        if (file == nullptr)
        {
            return -1;
        }

        Metadata metadata;

        (void)std::fread(&metadata, sizeof(Metadata), 1, file);
        
        std::cout << metadata.type << '\n';
        std::cout << metadata.count << '\n';

        if (std::strcmp(metadata.type, "double") == 0)
        {
            double* arr = new double[metadata.count];

            (void)std::fread(arr, sizeof(double), metadata.count, file);

            for (int i = 0; i < metadata.count; ++i)
            {
                std::cout << arr[i] << '\n';
            }

            delete[] arr;
        }
        
        (void)std::fclose(file);
    }

    return 0;
}
