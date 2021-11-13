//
// Created by kotozavrina on 11/11/2021.
//


#include "iostream"
#include <time.h>
#include <cstdlib>


/// Написать программу, которая генерирует три последовательности из 10 случайных
/// чисел (в диапазоне от 1 до N). Для каждой последовательности программа должна
/// вычислить среднее арифметическое. N - натуральное и вводиться пользователем.

double printAverage(const int size, const int N) {
    double avg = 0;
    for (int j = 0; j < size; ++j) {
        int num = 1 + random() % N;
        std::cout << num << " ";
        avg += num;
    }
    std::cout << std::endl;
    avg /= size;
    return avg;
}


void printAverageForSequences(const int size, const int N, const int number_of_sequences) {
    for (int i = 0; i < number_of_sequences; i++) {
        std::cout << printAverage(size, N);
    }
}

int main() {

    srand(time(NULL));

    const int N = 10;
    const int number_of_sequences = 3;
    const int size = 10;
    printAverageForSequences(size, N, number_of_sequences);

}
