//
// Created by kotozavrina on 19/11/2021.
//

#include "iostream"

/// Найти максимум в массиве
const int N = 100;
int inputIntArray(int array[N]);
int getMax(const int size, const int array[]);

int main() {

    int array[N] = {0};
    int size = inputIntArray(array);
    std::cout << getMax(size, array);
    return 0;
}

int inputIntArray(int array[])
{
    int size;
    std::cin >> size;

    while (size <= 0)
    {
        std::cout << "Wrong size." << std::endl;
        std::cin >> size;
    }

    for (int i = 0; i < size; ++i) {
        std::cin >> array[i];
    }
    return size;
}


int getMax(const int size, const int array[])
{
    int max = array[0];

    for (int i = 1; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }

    return max;
}





