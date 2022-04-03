/*Goal: create a function that searches an array for
**a given value.
*/

#include<iostream>
float search_array(int *array, int size, float num);
int main()
{
    const int size = 4;
    int array[] = {345,75896,2,543};
    int searchKey = 543;
    std::cout<<"Found at: "<<search_array(array, size, searchKey);
    return 0;
}

float search_array(int *array, int size, float num)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == num)
        {
            return i;
            break;
        }
    }
}
