//
// Created by kotozavrina on 01/10/2021.
//

#include <cmath>
#include <iostream>

//Сфера задана своим радиусом. Найти:
//А) площадь боковой поверхности сферы; (4 *pi * r^ 2)
//Б) объем сферы; (4/3 pi r ^ 3)
//В) ребро куба, описанного возле сферы; (2 * r)
//Г) ребро куба, вписанного в сферу; ( r * sqrt(2) )

int main() {

    double r;
    std::cin >> r;

    double area = 4 * M_PI * r * r;
    double V = 4.0/3 * M_PI * r * r * r;
    double A = 2 * r;
    double a = r * sqrt(2)
}



