#include "User.h"

// Solution1

using namespace ConditionalCompilation;

User* CreateUser()
{
    return new User;
}

void DestroyUser(User* user)
{
    delete user;
}

// Solution2

/*namespace ConditionalCompilation
{
    User* CreateUser()
    {
        return new User;
    }
    void DestroyUser(User* user)
    {
        delete user;
    }
}*/


// Solution3

/*ConditionalCompilation::User* ConditionalCompilation::CreateUser()
{
    return new User;
}
void ConditionalCompilation::DestroyUser(User* user)
{
    delete user;
}*/
