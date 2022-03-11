/*Goal: practice std::cin for strings
**Write a program that prompts two users for their
**name, address, and phone number.
**Print the information to the console in the following format:
**name
**\/t\/t address
**\/t\/tphone number
*/
#include <iostream>
#include <string>

int main()
{
    std::string user1, u1_address, u1_phone;
    std::string user2, u2_address, u2_phone;

    std::cout << "User 1 enter your name:\n";
    std::getline(std::cin, user1);
    std::cout << "User 1 enter your address:\n";
    std::getline(std::cin, u1_address);
    std::cout << "User 1 enter your phone number:\n";
    std::getline(std::cin, u1_phone);

    std::cout << "User 2 enter your name:\n";
    std::getline(std::cin, user2);
    std::cout << "User 2 enter your address:\n";
    std::getline(std::cin, u2_address);
    std::cout << "User 2 enter your phone number:\n";
    std::getline(std::cin, u2_phone);

    std::cout << "\n\n" << user1 << "\n";
    std::cout << "\t\t" << u1_address << "\n";
    std::cout << "\t\t" << u1_phone << "\n";

    std::cout << "\n\n" << user2 << "\n";
    std::cout << "\t\t" << u2_address << "\n";
    std::cout << "\t\t" << u2_phone << "\n";

    return 0;


}
