#include <iostream>

// Task1: Call all functions
struct Object
{
};

template <typename T>
struct TObject
{
};

void f(Object&) { std::cout << "void f(Object&);"; }
void f(Object*) { std::cout << "void f(Object*);"; }
void f(int*) { std::cout << "void f(int*);"; }
void f(int&) { std::cout << "void f(int&);"; }
void f(int) { std::cout << "void f(int);"; }

template <typename T>
void t() { std::cout << "void t();"; }

template <typename T>
void t(T) { std::cout << "void t(T);"; }

template <typename T>
void t(T&) { std::cout << "void t(T&);"; }

template <typename T>
void t(T*) { std::cout << "void t(T*);"; }

template <typename T>
void s(TObject<T>&) { std::cout << "void s(TObject<T>&);"; }

template <typename T>
void s(TObject<T>*) { std::cout << "s(TObject<T>*);"; }

// Task1 end;

int main(int argc, char* argv[])
{
    // [ ] [O] [X]
    // [ ] [ ] [ ]
    // [ ] [ ] [ ]
    
    return 0;
}
