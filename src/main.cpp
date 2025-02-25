#include "Test01.h"
#include <string>
#include <iostream>

using namespace std;

int main(){
	
    Test* test = new Test(2,3);
    test->addNumbers();
    test->print();


    // g++ main.cpp Test.cpp -o test
    // ./test

    return 0;
}