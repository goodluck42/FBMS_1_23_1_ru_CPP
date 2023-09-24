#include <iostream>
#include <functional>

void print(int a)
{
    std::cout << "(int) a = " << a << '\n';
}

void print(double a)
{
    std::cout << "(double) a = " << a << '\n';
}

template <typename T>
T add(T a, T b)
{
    return a + b;
}

int mult(int a, int b)
{
    return a * b;
}

int subtract(int a, int b)
{
    return a - b;
}

template <typename T>
struct Array
{
    T* data;
    int capacity;
    int size;
};

template <typename T>
void reallocate(Array<T>* array)
{
    if (array->capacity == array->size)
    {
        array->capacity *= 2;

        T* new_data = new T[array->capacity]{};

        for (int i = 0; i < array->size; ++i)
        {
            new_data[i] = array->data[i];
        }

        delete[] array->data;

        array->data = new_data;
    }
}

template <typename T>
void append(Array<T>* array, T value)
{
    reallocate(array);
    array->data[array->size] = value;
    ++array->size;
}

template <typename T>
Array<T>* create()
{
    Array<T>* arr = new Array<T>;

    arr->capacity = 16;
    arr->data = new T[arr->capacity];
    arr->size = 0;

    return arr;
}

template <typename T>
void destroy(Array<T>* array)
{
    delete[] array->data;
    delete array;
}

template <typename T>
void create(Array<T>* arr)
{
    arr->capacity = 16;
    arr->data = new T[arr.capacity];
    arr->size = 0;
}

template <typename T>
void bubble_sort(Array<T>* arr, bool (*compare)(T, T))
{
    for (int i = 0; i < arr->size; i++)
    {
        for (int j = 0; j < arr->size - i - 1; j++)
        {
            if (compare(arr->data[j], arr->data[j + 1]))
            {
                T temp = arr->data[j];

                arr->data[j] = arr->data[j + 1];
                arr->data[j + 1] = temp;
            }
        }
    }
}

template <typename T>
void print(Array<T>* arr)
{
    if (arr->size == 0)
    {
        std::cout << "{}";

        return;
    }

    std::cout << "{ ";

    for (int i = 0; i < arr->size; ++i)
    {
        std::cout << arr->data[i];

        if (i != arr->size - 1)
        {
            std::cout << ", ";
        }
    }

    std::cout << " }";
}

template <typename T>
bool less(T a, T b)
{
    return a < b;
}

template <typename T>
bool greater(T a, T b)
{
    return a > b;
}

// typedef int (*operation)(int, int);
// typedef long long int64;

template <typename T>
using operation = T (*)(T, T);
using int64 = long long;

int main()
{
    // int64 s = 102030;
    // operation func{}; // = nullptr;
    //
    // int op;
    // std::cin >> op;
    //
    // switch (op)
    // {
    // case 1:
    //     func = &add<int>;
    //     break;
    // case 2:
    //     func = &mult;
    //     break;
    // case 3:
    //     func = &subtract;
    // }
    //
    // if (func != nullptr)
    // {
    //     std::cout << func(10, 20);
    // }

    std::cout << greater(10, 20) << '\n';

    // {
    //     Array<int>* arr = create<int>();
    //
    //     append(arr, 11);
    //     append(arr, 20);
    //     append(arr, 15);
    //     append(arr, 16);
    //     append(arr, 13);
    //
    //     bubble_sort(arr, &less);
    //
    //     print(arr);
    //
    //     destroy(arr);
    // }

    {
        //int(*funcs[3])(int, int) {mult, add, subtract};
        operation<int> funcs[3]{&mult, &add, &subtract};

        //funcs[0] = mult;

        for (int i = 0; i < 3; ++i)
        {
            std::cout << funcs[i](10, 20) << '\n';
        }
    }
    return 0;
}
