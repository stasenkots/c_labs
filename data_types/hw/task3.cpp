//
// Created by kotozavrina on 08/10/2021.
//

#include "iostream"
#include "cmath"

/***
 *
    Дана длина ребра куба. Найти:
    А) объем куба;
    Б) площадь его боковой поверхности;
    В) радиусы вписанной и описанной сфер;
    Г) объем вписанной и описанной сфер;
 *
 */

int main() {

    double a;
    std::cin >> a;

    double volume = a * a * a;
    double area = 6 * a * a;
    double R = a * sqrt(2) / 2;
    double r = a / 2;
    double volume_outscribed_sphere = 4.0 / 3 * M_PI * R * R * R;
    double volume_inscribed_sphere = 4.0 / 3 * M_PI * r * r * r;

}