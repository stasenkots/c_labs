//
// Created by kotozavrina on 30/10/2021.
//

#include "iostream"
#include "cstdlib"
#include "time.h"

///Написать программу, которая генерирует последовательность из 10 случайных чисел (в диапазоне от 1 до 10).
///Выводит эти числа на экран и вычисляет их среднее арифметическое.
///Рекомендуемый вид экрана приведен ниже. Для генерации случайных чисел от 1 до 10
///использовать оператор rand() % 10 + 1, (функция rand() из библиотеки cstdlib).


int main() {
    int randNum;
    int amount = 10;
    int startInterval = 1;
    int endInterval = 100;
    double sum = 0;
    double average;

    srand(time(NULL));

    std::cout << "Случайные числа" << std::endl;

    for (int counter = 1; counter < amount; counter++)
    {
        randNum = rand() % endInterval + startInterval;
        std::cout << randNum << std::endl;
        sum += randNum;
    }

    average = sum / amount;
    std::cout << "Среднее арифметическое равно: " << average;
    return 0;
}