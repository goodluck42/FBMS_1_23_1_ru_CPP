#include <iostream>

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

struct PersonalComputer
{
    int ram;
    int vram;
    int ssd;
    float cpu_frequency;
};

void print(PersonalComputer pc)
{
    std::cout << "ram = " << pc.ram << '\n';
    std::cout << "vram = " << pc.vram << '\n';
    std::cout << "ssd = " << pc.ssd << '\n';
    std::cout << "cpu_frequency = " << pc.cpu_frequency << '\n';
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

int main(int argc, char* argv[])
{
    // {
    //     PersonalComputer pc1{16, 8, 500, 3.5};
    //
    //     // pc1.ram = 16;
    //     // pc1.vram = 8;
    //     // pc1.ssd = 500;
    //     // pc1.cpu_frequency = 3.5;
    //
    //     print(pc1);
    //
    //     PersonalComputer* pc2 = new PersonalComputer; // in 
    //
    //     pc2->ram = 32;
    //     pc2->vram = 24;
    //     pc2->ssd = 2000;
    //     pc2->cpu_frequency = 4.5;
    //
    //     print(*pc2);
    // }


    {
        Array<int>* values = create<int>();

        append(values, 5);
        append(values, 12);
        append(values, 15);

        print(values);

        destroy(values);
    }

    // {
    //     PersonalComputer pc{16, 8, 500, 3.5};
    //
    //     int* vram = (int*)&pc + 1;
    //
    //     std::cout << *vram;
    // }


    return 0;
}
