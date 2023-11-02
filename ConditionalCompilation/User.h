#ifndef USER_H
#define USER_H
namespace ConditionalCompilation
{
    struct User
    {
        int age;
        char name[16];
    };

    User* CreateUser();
    void DestroyUser(User* user);
}
#endif

// C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.36.32532\bin\HostX64\x64