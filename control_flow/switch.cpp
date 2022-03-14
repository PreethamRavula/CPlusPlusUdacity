/*Now I would like you to do a switch statement with breaks
**between the cases. Create a program that asks the user for
**two float numbers. Then asks the user if they would like to:
**add the numbers, subtract the numbers, multiply the numbers,
**divide the numbers.
**The program should then print the numbers with the chosen
**operation and the solution.
*/

#include <iostream>

int main()
{
    float in1, in2;
    char operation;
    float answer;

    std::cout << "Enter two numbers:\n";
    std::cin >> in1;
    std::cin >> in2;
    std::cout << "You entered two numbers: " << in1 << " and " << in2 << "\n";
    std::cout << "Enter any of the following operations you would like to perform (+, -, *, /):\n";
    std::cin >> operation;
    std::cout << "You entered " << operation << "\n";

    switch (operation) {

        case ('+'):
            answer = in1 + in2;
            break;

        case ('-'):
            answer = in1 - in2;
            break;

        case ('*'):
            answer = in1 * in2;
            break;

        case ('/'):
            answer = in1 / in2;
            break;

        default:
            std::cout << "Enter a Coreect Operation\n";

    }
    std::cout << in1 << operation << in2 << " = " << answer << "\n";
    return 0;
}
