#include <algorithm>
#include <iostream>

void a(int p1);
void b();
void c();

template<typename T>
int binary_search(T arr[], const int size, T target, int l, int r)
{
    if (l <= r)
    {
        int m = l + (r - l) / 2;

        if (arr[m] == target)
        {
            return m;
        } else if(arr[m] < target)
        {
            return binary_search(arr, size, target, m + 1, r);
        }

        return binary_search(arr, size, target, l, m - 1);
    }

    return -1;
}

template<typename T>
int binary_search_test(T arr[], const int size, T target, int l, int r)
{
    static int cnt = 0;
    cnt++;
    std::cout << cnt << '\n';
        int m = l + (r - l) / 2;

        if (false)
        {
            return m;
        } else if(true)
        {
            return binary_search_test(arr, size, target, m + 1, r);
        }

        return binary_search_test(arr, size, target, l, m - 1);
    

    return -1;
}

void print_stars(int count)
{
    if (count == 0)
    {
        return;
    }
    
    std::cout << "* ";

    print_stars(count - 1);
}

long long factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

int main(int argc, char* argv[])
{
    // int v = 42;
    //
    // a(v);
    //
    // std::cout << "v = " << v << '\n';

    //print_stars(5);

    constexpr int size = 12;
    
    int arr[size];

    srand(time(0));
    
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 100;
    }

    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << '\t';
    }
    std::cout << '\n';

    {
        for (int i = 0; i < size - 1; i++)
        {
            int min = i;

            for (int j = i + 1; j < size; j++)
            {
                if (arr[j] < arr[min])
                {
                    min = j;
                }
            }

            if (min != i)
            {
                int temp = arr[i];

                arr[i] = arr[min];
                arr[min] = temp;
            }
        }

        std::cout << "---------\n";
        for (int i = 0; i < size; i++)
        {
            std::cout << arr[i] << '\t';
        }

        std::cout << '\n';
    }
    

    {
        int target;
        std::cout << "target = ";

        std::cin >> target;

        std::cout << "index = " << binary_search_test<int>(arr, size, target, 0, size - 1);
    }
    
    return 0;
}



// a b1 c b2
void a(int p1)
{
    p1 = 90;
    std::cout << "a" << '\n';
    b();
}

void b()
{
    std::cout << "b1" << '\n';
    c();
    std::cout << "b2" << '\n';
}

void c()
{
    std::cout << "c" << '\n';
}