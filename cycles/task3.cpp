//
// Created by kotozavrina on 30/10/2021.
//


#include "iostream"
///Программа должна в качестве входных данных принимать n числа и
///определять, является ли введенное пятизначное число палиндормом. (Палиндорм – это
///        число или текст (набор символов), который читается одинаково и слева, и справа: 939,
///49094, 11312  ).

int pow(int num, int degree);

int numberOfDigits(double num);

int getNumberOfDigits(int num) {
    int counter = 0;
    while (num > 0)
    {
        num /= 10;
        counter++;
    }

    return counter;
}

int main() {
    int num;

    std::cin >> num;

    int leftDigit;
    int rightDigit;
    bool isPal = true;
    int amount = numberOfDigits(num);
    int divisorLeft = pow(10, amount);
    int divisorRight = 10;


    for (int i = 0; i < (amount / 2); i++) {

        leftDigit = num % divisorLeft / (divisorLeft / 10);
        rightDigit = num % divisorRight / (divisorRight / 10);
        divisorLeft /= 10;
        divisorRight *= 10;

        if (leftDigit != rightDigit) {
            isPal = false;
            break;
        }
    }

    std::cout << isPal << std::endl;
    return 0;
}

int pow(int num, int degree) {
    int ans = 1;

    for (int i = 0; i < degree; ++i) {
        ans *= num;
    }

    return ans;
}

int numberOfDigits(double num) {
    int divisor = 10;
    int counter = 1;
    int numberOfDigits;

    while (num / divisor > 1)
    {
        divisor *= 10;
        counter++;
    }

    numberOfDigits = counter;
    return numberOfDigits;
}
