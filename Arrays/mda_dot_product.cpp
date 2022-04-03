/*Goal: practice using multidimensional arrays.
**Write a program that will accept values for a 4x4 array
**and a vector of size 4.
**Use the dot product to multiply the array by the vector.
**Print the resulting vector.
*/

#include<iostream>
#include<stdio.h>

int main()
{
    //TODO: multiply a 4x4 array with vector of size 4.
    //Print the resultant product vector
    const int row = 4;
    const int col = 4;
    int sum;
    int multi_array[row][col];
    int vector[row], product[row];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            scanf("%d", &multi_array[i][j]);
            std::cout << "multi_array[" << i << "][" << j <<"] = " << multi_array[i][j] << "\n";
        }
    }
    for (int i = 0; i < row; i++)
    {
        scanf("%d", &vector[i]);
        std::cout << "vector[" << i << "] = " << vector[i] << "\n";
    }
    sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum = (multi_array[i][j] * vector[i]) + sum;
        }
        product[i] = sum;
        sum = 0;
    }
    for (int i = 0; i < row; i++)
    {
        std::cout << "product[" << i << "] = " << product[i] << "\n";
    }

    return 0;
}
