#include <iostream>

int* reallocate(int* data, int size, int* capacity)
{
    if (*capacity == size)
    {
        *capacity *= 2;

        int* new_data = new int[*capacity]{};

        for (int i = 0; i < size; ++i)
        {
            new_data[i] = data[i];
        }

        delete[] data;

        data = new_data;
    }

    return data;
}

int* append(int* data, int* capacity, int* size, int value)
{
    data = reallocate(data, *size, capacity);

    data[*size] = value;

    ++(*size);

    return data;
}

void print(int* arr, int size)
{
    std::cout << "{ ";

    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i];

        if (i != size - 1)
        {
            std::cout << ", ";
        }
    }

    std::cout << " }";
}

int main(int argc, char* argv[])
{
    // {
    //     int* arr1 = new int[3]{10, 20, 30};
    //     int* arr2 = new int[3]{40, 42, 50};
    //     int arr3[3]{90, 41, 50};
    //
    //     int* current_arr = nullptr;
    //
    //     int choice;
    //     std::cin >> choice;
    //
    //     if (choice == 1)
    //     {
    //         current_arr = arr1;
    //     }
    //     else if (choice == 2)
    //     {
    //         current_arr = arr2;
    //     }
    //     else if (choice == 3)
    //     {
    //         current_arr = arr3;
    //     }
    //
    //     print(current_arr, 3);
    //
    //     delete[] arr1;
    //     delete[] arr2;
    // }

    int capacity = 4;
    int size = 0;


    // &arr = 0xffccc2
    // arr = 0xffa5
    int* arr = new int[capacity]{};

    arr = append(arr, &capacity, &size, 10);
    arr = append(arr, &capacity, &size, 12);
    arr = append(arr, &capacity, &size, 40);
    arr = append(arr, &capacity, &size, 90);
    arr = append(arr, &capacity, &size, 256);
    arr = append(arr, &capacity, &size, 12);
    arr = append(arr, &capacity, &size, 144);
    arr = append(arr, &capacity, &size, 166);
    arr = append(arr, &capacity, &size, 244);
    arr = append(arr, &capacity, &size, 0);


    std::cout << "capacity = " << capacity << '\n';
    std::cout << "size = " << size << '\n';

    print(arr, size);
    std::cout << '\n';
    print(arr, capacity);

    delete[] arr;

    return 0;
}
