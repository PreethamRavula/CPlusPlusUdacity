/*Find the min and max and average of 15 numbers that a user will input.
**The numbers range from 0 to 100.
**We will do it now for practice and again later when we learn arrays and
**functions. So you do not have to keep all fifteen numbers stored in memory.
**HINT: you will need to use scanf for input text.
*/
#include <iostream>

int main()
{
    int input;
    int min = 0;
    int max = 0;
    int sum = 0;
    std::cout << "\nEnter any 15 number from range of numbers 0 to 100: \n";
    for (int i = 0; i < 15; i++)
    {
        std::cin >> input;
        if (0 < input < 100)
        {
            std::cout << "Entered " << input << "\n";
            sum += input;

        }
        else
        {
            std::cout << "Enter any number in between 0 and 100: ";
        }

        if (i == 0)
        {
            min = input;
            max = input;
        }

        if (input < min && input > 0)
        {
            min = input;
        }
        else if (input > max && input > 0)
        {
            max = input;
        }

    }
    std::cout << "sum of inputted 15 numbers = " << sum << "\n";
    std::cout << "Average of 15 numbers = " << sum / 15 << "\n";
    return 0;
}
