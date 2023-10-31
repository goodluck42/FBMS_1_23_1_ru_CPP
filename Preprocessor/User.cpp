#include "User.h"

#include <iostream>

int GlobalValue = 42;

User* CreateUser()
{
    return new User;
}

//...

void DestroyUser(User* user)
{
    delete user;
}

void ShowGlobalValue_U()
{
    std::cout << &GlobalValue << " = " << GlobalValue << '\n';
}

void ChangeGlobalValue_U(int ANewValue)
{
    GlobalValue = ANewValue;
}