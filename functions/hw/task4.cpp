#include "iostream"
#include "cmath"

/// Посчитать количество простых цифр в числе

bool isPrimary(const int n) {
    for (int divisor = 2; divisor < n; divisor++) {
        if (n % divisor == 0) {
            return false;
        }
    }
    return true;
}

int getNumberOfPrimaryDigits(int n) {
    int numberOfPrimaryDigits = 0;
    while (n > 0) {
        int digit = n % 10;
        if (isPrimary(digit)) {
            numberOfPrimaryDigits += 1;
        }
        n /= 10;
    }
    return numberOfPrimaryDigits;
}


int main() {

    int n = 1284;
    std::cout << getNumberOfPrimaryDigits(n);

}