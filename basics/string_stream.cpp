/*Goal: practice using stringstream
/*Goal: practice getting string inputs and
 **converting them to numeric variables using
 **stringstream.
 **
 **Prompt the user for the length of a room.
 **Then prompt for the width of the room.
 **Print out the area of the room.
 */
#include <string>
#include <sstream>
#include <iostream>

int main()
{
    std::string length, width;
    float l, w, area;
    std::cout << "Enter the length of the room:\n";
    std::getline(std::cin, length);
    std::stringstream(length) >> l;
    std::cout << "You entered length = " << l << "\n\n";

    std::cout << "Enter the width of the room:\n";
    std::getline(std::cin, width);
    std::stringstream(width) >> w;
    std::cout << "You entered width = " << w << "\n\n";

    area = l * w;

    std::cout << "The area of the room is: " << area << "\n";

    return 0;

}
 
