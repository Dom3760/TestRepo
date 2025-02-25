#include "Test01.h"
#include <iostream>
// #include <header>

using namespace std;

Test::Test()
{
    number01 = 1;
    number02 = 2;
}

Test::Test(int num1, int num2)
{
    number01 = num1;
    number02 = num2;
}

void Test::addNumbers()
{
    total = number01 + number02;
}

void Test::print()
{
    cout<<"Total: "<< total <<endl;
}