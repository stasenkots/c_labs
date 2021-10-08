//
// Created by kotozavrina on 08/10/2021.
//
#include "iostream"
#include "cmath"

/**
  4.Написать программу для вычисления дохода по вкладу.Сумма ,срок вклада(в месяцах)
   и процентная ставка(в процентах) задаются пользователем.
    Пример:
    Сумма - 25000
    Срок вклада - 6 мес
    Процентная ставка - 10 %
    Результат:
    Доход - 1250
    Сумма на вкладе - 26250
 */

int main() {
    double sum;
    double period;
    double percent;
    std::cin >> sum >> period >> percent;
    percent /= 100;
    sum += sum * period / 12 * percent;
    std::cout << sum << std::endl;
}