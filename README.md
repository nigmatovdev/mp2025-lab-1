Mobile Programming - Lab 2

1. Choosen Programming Language:

- C++: main.cpp
- Java: main.java

2. Full name and ID

   // Abdusamad Nigmatov 220063

3. Today's day and time

   // Tuesday 14:00

// Q1
#include <iostream>
using namespace std;

int main(int argc, char \*argv[])
{
cout << "Number of arguments received: " << argc << endl;
cout << "Arguments are:" << endl;

for (int i = 0; i < argc; ++i)
{
cout << "Argument " << i << ": " << argv[i] << endl;
}

return 0;
}

// Q2
// In C++, main is the entry point where execution begins.

// Q3
// In JAVA it returns nothing (void) and always public statis, while in C++ returns an integer exit code

// Q4
// In C++, 0 means success non zero is error. System.exit(code) - used in JAVA to signal exit codes
