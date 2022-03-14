/*For this program print for each variable
**print the value of the variable,
**then print the address where it is stored.
*/
#include<iostream>
#include<string>
#include<sstream>

int main()
{
    int givenInt;
    float givenFloat;
    double givenDouble ;
    std::string givenString;
    char givenChar;

    int * pointertoInt = &givenInt;
    int ** pointerpointertoInt = &pointertoInt;
    float * pointertoFloat = &givenFloat;
    double * pointertoDouble = &givenDouble;
    void * pointertoChar = &givenChar;
    std::string * pointertoString = &givenString;


    // Printing vales:
    std::cout << "Enter a int Value:\n";
    std::cin >> givenInt;
    std::cout << "Enter a float Value:\n";
    std::cin >> givenFloat;
    std::cout << "Enter a Double Value:\n";
    std::cin >> givenDouble;
    std::cin.ignore();
    std::cout << "Enter a char\n";
    std::cin >> givenChar;
    std::cout << "Enter a String:\n";
    std::cin.ignore();
    std::getline(std::cin, givenString);

    std::cout << "Interger Value: " << givenInt << "\n";
    std::cout << "Float Value: " << givenFloat << "\n";
    std::cout << "Double Value: " << givenDouble << "\n";
    std::cout << "Character Value: " << givenChar << "\n";
    std::cout << "String: " << givenString << "\n";



    std::cout << "This is the pointer to givenInt which point to address: " << pointertoInt << "\n";
    std::cout << "This is the pointer to givenFloat which point to address: " << pointertoFloat << "\n";
    std::cout << "This is the pointer to givenDouble which point to address: " << pointertoDouble << "\n";
    std::cout << "This is the pointer to givenChar which point to address: " << pointertoChar << "\n";
    std::cout << "This is the pointer to givenString which point to address: " << pointertoString << "\n";
    std::cout << * pointertoInt << "\n";
    std::cout << ** pointerpointertoInt << "\n";
    return 0;
}
