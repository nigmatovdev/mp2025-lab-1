// Abdusamad Nigmatov 220063
// Tuesday 14:00

// Q1
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
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

// VARIABLES
// Q1
#include <iostream>
using namespace std;

int main()
{
  int a = 10, b = 20;

  cout << "Before swap: a = " << a << ", b = " << b << endl;

  a = a + b;
  b = a - b;
  a = a - b;

  cout << "After swap: a = " << a << ", b = " << b << endl;
  return 0;
}

// Q2
// primitive store actual values, reference ones store memory addresses

// Q3
// local scope variable exists only in block or function, classic/static exists across all objects

// Q4
// types checked at compile time

// CONTROL FLOW

// Q1
#include <iostream>
using namespace std;

int main()
{
  int n1 = 0, n2 = 1, nextTerm;
  cout << "First 10 Fibonacci numbers: ";

  for (int i = 1; i <= 10; ++i)
  {
    if (i == 1)
    {
      cout << n1 << " ";
      continue;
    }
    if (i == 2)
    {
      cout << n2 << " ";
      continue;
    }
    nextTerm = n1 + n2;
    n1 = n2;
    n2 = nextTerm;
    cout << nextTerm << " ";
  }
  cout << endl;
  return 0;
}

// Q2
// while checks before loop, may run 0 times. do-while checks after, runs at least once.

// Q3
// switch is a multi-branch decision structure. Uses case, break, and default.

// Q4
// Short-circuit evaluation stops once result is known:  if (x != 0 && (10 / x > 1)) { ... } - Prevents division by zero.