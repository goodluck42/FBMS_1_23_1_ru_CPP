#include "Db.h"
#include "User.h"
#include <iostream>

void ShowGlobalValue()
{
    std::cout << &GlobalValue << " = " << GlobalValue << '\n';
}