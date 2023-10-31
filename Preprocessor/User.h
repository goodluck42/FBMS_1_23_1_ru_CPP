#pragma once

extern int GlobalValue;

struct User
{
    char* login;
    char* password;
    int age;
};

extern User* CreateUser();

//...

extern void DestroyUser(User* user);

extern void ShowGlobalValue_U();

extern void ChangeGlobalValue_U(int ANewValue);
