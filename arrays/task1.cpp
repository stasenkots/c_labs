//
// Created by kotozavrina on 19/11/2021.
//

#include "iostream"

///Дан массив чисел.Рализовать сортировку подсчетом
const int N = 100;

int inputIntArray(int array[]);

int getMin(const int size, const int array[]);

int getMax(const int size, const int array[]);

void sortCounted(const int size, const int min, const int src[], int dest[]);

void printArray(const int size, const int min, const int array[]);

//[start,end] -> [0,max - min + 1]

//num - start
int main() {
    int src[N] = {0};
    int dest[N] = {0};
    int srcSize = inputIntArray(src);
    int srcMin = getMin(srcSize, src);
    int srcMax = getMax(srcSize, src);

    sortCounted(srcSize, srcMin, src, dest);
    int destSize = srcMax - srcMin + 1;
    printArray(destSize, srcMin, dest);
    return 0;
}

int inputIntArray(int array[]) {
    int size;
    std::cin >> size;

    while (size <= 0) {
        std::cout << "Wrong size." << std::endl;
        std::cin >> size;
    }

    for (int i = 0; i < size; ++i) {
        std::cin >> array[i];
    }
    return size;
}

int getMin(const int size, const int array[]) {
    int min = array[0];

    for (int i = 1; i < size; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }

    return min;
}

int getMax(const int size, const int array[]) {
    int max = array[0];

    for (int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }

    return max;
}

void sortCounted(const int size, const int min, const int src[], int dest[]) {
    for (int i = 0; i < size; i++) {
        dest[src[i] - min] += 1;
    }
}

void printArray(const int size, const int min, const int array[]) {
    std::cout << "{ ";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < array[i]; j++) {
            std::cout << i + min << " ";
        }
    }
    std::cout << "}";
}

{ 1 2 2 4 7 }
