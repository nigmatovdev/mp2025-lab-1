Mobile Programming - Lab 2

1. Choosen Programming Language:

- C++: main.cpp
- Java: main.java

2. Full name and ID

   // Abdusamad Nigmatov 220063

3. Today's day and time

   // Tuesday 14:00

// MAIN FUNCTION
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

// VARIABLES
// Q1
#include <iostream>
using namespace std;

int main() {
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
// Short-circuit evaluation stops once result is known: if (x != 0 && (10 / x > 1)) { ... } - Prevents division by zero.

// FUNCTION METHODS

// Q1
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(const string &str)
{
return equal(str.begin(), str.begin() + str.size() / 2, str.rbegin());
}

int main()
{
cout << "madam is palindrome? " << (isPalindrome("madam") ? "true" : "false") << endl;
cout << "hello is palindrome? " << (isPalindrome("hello") ? "true" : "false") << endl;
return 0;
}

// Q2
// C++: by value, by reference, or by pointer. Java: always by value;

// Q3
// Function overloading requires different parameters (number/type). Return type alone not enough.

// Q4
// Recursion is a function calling itself. Base case prevents infinite recursion.

// COMMENTS
// Q1
#include <iostream>
using namespace std;

/\*\*

- Documentation comment using Doxygen/Javadoc style
  \*/
  int main()
  {
  // Single line comment
  int x = 5; // inline comment

/_
Multi-line comment
explaining code
_/
cout << "Comments example" << endl;
return 0;
}

// Q2
// Comments aid maintainability and team collaboration.

// Q3
// Javadoc/Doxygen generate structured documentation.

// Q4
// Good code is self-documenting, but comments explain algorithms, edge cases.

// CLASSES
// Q1
#include <iostream>
using namespace std;

class BankAccount
{
private:
double balance;

public:
BankAccount(double initial)
{
balance = (initial >= 0) ? initial : 0;
}
void deposit(double amount)
{
if (amount > 0)
balance += amount;
}
double getBalance()
{
return balance;
}
};

int main()
{
BankAccount acc(100.5);
cout << "Initial: " << acc.getBalance() << endl;
acc.deposit(50.25);
cout << "After deposit: " << acc.getBalance() << endl;
return 0;
}

// Q2
// Class is blueprint, object is instance.

// Q3
// Public = everywhere, Private = inside class, Protected = class + derived.

// Q4
// Constructor initializes. Default constructor = no args, auto-generated if none provided.

// ENUMS
// Q1
#include <iostream>
#include <string>
using namespace std;

enum class Season
{
SPRING,
SUMMER,
AUTUMN,
WINTER
};

string recommendActivity(Season s)
{
switch (s)
{
case Season::SPRING:
return "Plant flowers";
case Season::SUMMER:
return "Go to the beach";
case Season::AUTUMN:
return "Rake leaves";
case Season::WINTER:
return "Build a snowman";
default:
return "Rest";
}
}

int main()
{
Season now = Season::AUTUMN;
cout << recommendActivity(now) << endl;
return 0;
}

// Q2
// Enums safer than int/string constants.

// Q3
// Improve type safety and readability.

// Q4
// C++11 enums are strongly typed. Java enums can have fields, methods, constructors.
