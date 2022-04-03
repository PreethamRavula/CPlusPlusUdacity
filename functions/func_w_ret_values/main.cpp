/*Goal: practice writing functions with parameters and return values.*/

#include <iostream>
#include "main.hpp"

int main()
{
    int m1 = 33;
    int m2 = 6699;
    int add = sum(m1, m2);
    char operation = '+';
    printEquation(m1, m2, add, operation);
    return 0;
}
