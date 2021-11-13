//
// Created by kotozavrina on 11/11/2021.
//

#include "iostream"

/// Дано число х из отрезок [a,b]. перевести это число в отрезок [c,d]

int main(){
    double startFirstInterval;
    double fEndInt;
    double sStartInt;
    double sEndInt;
    double numF;
    double numS;

    std::cin >> startFirstInterval >> fEndInt >> sStartInt >> sEndInt >> numF;
    //home corner cases
    numS = (numF - startFirstInterval) * (sEndInt - fEndInt) / (sStartInt - startFirstInterval) + sStartInt;
    std::cout << numS << std::endl;
}
