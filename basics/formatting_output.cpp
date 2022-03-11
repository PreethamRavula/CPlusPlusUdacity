/*Formatting Output
**Goal: practice using cout to format output to console
**Print the variables in three columns:
**Ints, Floats, Doubles
*/

#include <iostream>
#include <iomanip>

int main()
{
    std::cout << "Ints" << std::setw(15) << "Floats" << std::setw(15) << "Doubles" << "\n";
    int a = 45;
    float b = 45.323;
    double c = 45.5468;
    std::cout << std::setw(3) << a << std::setw(16) << b << std::setw(15) << c << "\n";
    int aa = a + 9;
    float bb = b + 9;
    double cc = c + 9;
    std::cout << std::setw(3) << aa << std::setw(16) << bb << std::setw(15) << cc << "\n";
    int aaa = aa + 9;
    float bbb = bb + 9;
    double ccc = cc + 9;
    std::cout << std::setw(3) << aaa << std::setw(16) << bbb << std::setw(15) << ccc << "\n";


    return 0;
}
