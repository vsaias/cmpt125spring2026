// abs_value.cpp

#include <iostream>

using namespace std;

double abs_value(double x)
{
    if (x < 0)
    {
        return -x;
    }
    return x;
}

int main()
{
    double x;
    cout << "Enter a number: ";
    cin >> x;
    cout << "The absolute value of " << x << " is " << abs_value(x) << "\n";
}
