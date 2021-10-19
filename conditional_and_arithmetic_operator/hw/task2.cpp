//
// Created by kotozavrina on 08/10/2021.
//

/// ВВодится число и интервал(2 числа).Проверить попадает ли число в интервал

#include <iostream>

int main() {
    double a;
    double start;
    double end;

    std::cin >> a;
    std::cin >> start >> end;

    bool isInInterval = start =< a && a <= end;
    std::cout << isInInterval;

}