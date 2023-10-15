#include "console/console.h"
#include <iostream>
#include <random>

using namespace app::console;

std::default_random_engine engine(time(0));

bool char_to_digit(char c, int& res)
{
    if (c >= 48 && c <= 57)
    {
        res = c - 48;

        return true;
    }

    return false;
}

int main(int argc, char* argv[])
{
    //std::uniform_int_distribution<int> range(10, 99);
    //std::uniform_real_distribution<double> range2(10, 99);

    //std::cout << range(engine);


    char c;

    std::cin >> c;
    int res;

    bool result = char_to_digit(c, res);

    if (result)
    {
        std::cout << res << '\n';
    }
    else
    {
        std::cout << "Fail!" << '\n';
    }

    int* ptr[10];

    ptr[0] = new int[3];
    ptr[1] = new int[4];
    ptr[2] = new int[5];



    *(ptr + 2); // ptr[2]
    /*{
        coord px = -1;
        coord py = -1;
    
        while (true)
        {
            key k = io.readk();

            coord x;
            coord y;

            if (px != -1 && py != -1)
            {
                io.erase(px, py);
            }
        
            io.gcpos(&px, &py);
            io.gcpos(&x, &y);
        
            switch (k)
            {
            case key::w:
            case key::W:
                io.at(x, y, "@");
                io.mvup();
                io.gcpos(&x, &y);
            
                break;
            case key::a:
            case key::A:
                io.at(x, y, "@");
                io.mvleft();
                io.gcpos(&x, &y);
                break;
            case key::s:
            case key::S:
                io.at(x, y, "@");
                io.mvdown();
                io.gcpos(&x, &y);
                break;
            case key::D:
            case key::d:
                io.at(x, y, "@");
                io.mvright();
                io.gcpos(&x, &y);
                break;
            }

        
        }
    }*/
    return 0;
}
