#include <iostream>

#define DEBUG
#define DEBUG_LEVEL 3

int main(int argc, char* argv[])
{
#ifndef TEST
    std::cout << "TEST macro is not defined!" << '\n';
#endif

#ifdef DEBUG // #if defined(DEBUG)
    #if DEBUG_LEVEL == 1
        std::cout << "main" << '\n';
    #elif DEBUG_LEVEL == 2
        std::cout << "main(argc, argv)" << '\n';
    #else
        std::cout << "int main(int argc, char* argv[])" << '\n';
    #endif
#endif
    return 0;
}