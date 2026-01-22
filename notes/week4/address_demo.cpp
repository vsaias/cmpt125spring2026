// address_demo.cpp

#include <iostream>
#include <string>

using namespace std;

void f(const string& msg)
{
    int n  = 25;
    int* p = &n; // p points to n, i.e. p stores the address
                 // of n

    cout << p   // Careful! This prints an unpredictable value
         << msg // because there is no guarantee where in
         << "\n";
    // memory n is stored.
}

void different_address_demo2()
{
    f(" (third call))");
    f(" (fourth call)");
}

void different_address_demo()
{
    cout << "different_address_demo ...\n";

    //
    // There is no guarantee what the calls to f print. The address of n inside
    // f may be different on different runs.
    //
    // The first two calls print the same thing on my machine, but that is not
    // guaranteed.
    //

    // The third and fourth calls (called within different_address_demo2) print
    // the same thing, but the address is different than the first two calls.

    f(" (first call)");
    f(" (second call)");
    cout << "\n";
    different_address_demo2();
}

int main()
{
    different_address_demo();
}
