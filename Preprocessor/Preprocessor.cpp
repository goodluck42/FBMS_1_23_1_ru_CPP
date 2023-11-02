#include <iostream>
#include "Db.h"
#include "User.h"

#define SAY_HELLO(NAME) std::cout << "Hello " << NAME;
#define CREATE_VARIABLE(TYPE, NAME) TYPE G##NAME{};

CREATE_VARIABLE(int, Val)

#define CREATE_SUM_FUNCTION(TYPE) TYPE Sum_##TYPE(TYPE a, TYPE b) \
{ \
    return a + b; \
}

CREATE_SUM_FUNCTION(int)
CREATE_SUM_FUNCTION(double)

#define CALL_SUM(TYPE, ARG1, ARG2) Sum_##TYPE(ARG1, ARG2)

#define BEGIN {
#define END }
#define Термос() int main(int argc, char* argv[])

#define VALUE 42

void Call()
{
    static int StaticValue{};


    std::cout << StaticValue << '\n';

    ++StaticValue;
}

int Sum(int a, int b)
{
    return a + b;
}

int main(int argc, char* argv[])
BEGIN
    /*{
        ChangeGlobalValue_U(100);
        ShowGlobalValue_U();
        ShowGlobalValue();
        std::cout << &GlobalValue << " = " << GlobalValue << '\n';
    }*/
    {
        SAY_HELLO("Alex")
        std::cout << '\n';
        std::cout << Sum_int(5, 20) << '\n';

        std::cout << CALL_SUM(int, 42, 30) << '\n';
    }

    std::cout << VALUE << '\n';

    // VALUE = 90; // error

    return 0;
END
