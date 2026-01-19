// freestore.cpp

#include <iostream>

using namespace std;

int main()
{
    // allocate memory on the free store to hold a double, and initialize it to
    // 6.4
    double* p = new double(6.4);

    // p points to the double, so *p is the double
    cout << *p << "\n"; // 6.4
    *p += 2;
    cout << *p << "\n"; // 8.4

    // de-allocate the memory: every call to new must be matched with a call to
    // delete
    delete p;

    // at this point p is a dangling pointer, i.e. it is pointing to
    // de-allocated memory, and should not be used in any way for anything

    // if you do use p here, the results are undefined
}
