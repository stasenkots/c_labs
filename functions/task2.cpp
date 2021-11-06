//
// Created by kotozavrina on 04/11/2021.
//

#include <iostream>

long long pow(int num, int degree);

void printSquareMatrix(int rows, int columns);

int main()
{

    printSquareMatrix(10,10);

}

long long pow(int num, int degree) {
    long long ans = 1;

    for (int i = 0; i < degree; ++i) {
        ans *= num;
    }

    return ans;
}

void printSquareMatrix(int rows, int columns){

    for (int i = 1; i <= rows; i++)
    {

       for (int j = 1; j <= columns; j++)
        {
            std::cout << pow(j, i) << " ";
        }

        std::cout << std::endl;
    }
}

