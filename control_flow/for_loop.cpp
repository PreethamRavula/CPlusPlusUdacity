/*Write a program that asks a user for five numbers.
**Print out the sum and average of the five numbers.
*/
# include <iostream>

int main()
{
    float num;
    float sum = 0.0, average;
    std::cout << "Input any 5 numbers: \n";
    for (int i = 0; i < 5; i++)
    {
        std::cin >> num;
        std::cout << "you entered " << num << "\n";
        sum += num;
    }
    average = sum/5.0;
    std::cout << "The total sum of 5 numbers is " << sum << "\n";
    std::cout << "The Average of 5 numbers is " << average << "\n";
    return 0;
}
