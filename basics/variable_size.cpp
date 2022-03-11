/*GOAL: Practice writing to the console and learn
**the variables types available in C++
**Print the sizes of each variable to the console.
**Print them in the following order:
**int, short, long, char, float, double, bool
**
**Use the command sizeof(variable type) ie: sizeof(int)
*/
#include <iostream>

int main()
{
    std::cout << "size of short datatype is " << sizeof(short) << "\n";
    std::cout << "size of long datatype is " << sizeof(long) << "\n";
    std::cout << "size of char datatype is " << sizeof(char) << "\n";
    std::cout << "size of float datatype is " << sizeof(float) << "\n";
    std::cout << "size of double datatype is " << sizeof(double) << "\n";
    std::cout << "size of bool datatype is " << sizeof(bool) << "\n";
    return 0;
}
