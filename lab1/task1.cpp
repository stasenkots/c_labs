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

    //int r don't do
    double r;

    std::cin >> r;
    //don't use pow()

    double area_side = 4 * M_PI * r * r;

    double v = 4.0 / 3 * M_PI * r * r * r;

    double side_outside_cube = 2 * r;

    double  side_inside_cube = r * sqrt(2);

    std::cout<< area_side << std::endl;
    std::cout<< v << std::endl;
    std::cout<< side_outside_cube << std::endl;
    std::cout<< side_inside_cube << std::endl;

}



