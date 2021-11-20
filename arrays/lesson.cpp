//
// Created by kotozavrina on 17/11/2021.
//

#include "iostream"
int N = 5;

// const !!!!!

void passArray(const int array[N]) // здесь array - это фактический массив
{
    array[0] = 10; // изменения array здесь изменят исходный массив array
    array[1] = 8;
    array[2] = 6;
    array[3] = 4;
    array[4] = 1;
}

int main() {
    int k;
    int array[k];
    int array[] = {1, 2, 3};
    int array[N] = {0};

    std::cout << "The array has: " << sizeof(array) / sizeof(array[0]) << " elements\n";

    // Никак не проверяется!!!!!
    int array[5]; // массив содержит 5 простых чисел
    array[5] = 14;

}