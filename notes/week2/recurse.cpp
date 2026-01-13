// recurse.cpp

// This code uses recursion to intentionally create a stack overflow. In theory
// it should run forever, but in practice it runs out of call stack memory.

#include <iostream>

using namespace std;

// n < n + 1 is true in math, but not in C++

void recurse(char n) {
  if (n >= 0) {
    cout << "recurse(" << int(n)<< ")\n";
    recurse(n + 1);
    // never reached
  }
}

int main() { 
    recurse(1); 
    // never reached
}
