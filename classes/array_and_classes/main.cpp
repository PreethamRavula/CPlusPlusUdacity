#include <iostream>
#include "main.hpp"


int main()
{
    //ToDo: assign the dogs to an array called roster
    const int SIZE = 3;
    Dog roster[SIZE];
    //Then assign names to the Dog.
    roster[0].setName("Blue");
    roster[1].setName("King");
    roster[2].setName("Spot");

    //ToDo: declare and define this function
    //in the header file
    printRoster(roster,SIZE);
    return 0;
}
