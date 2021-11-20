#include "iostream"
#include "cmath"
/// Дано трехзначное число. Если разность первой и последней цифры по модулю равна то поменять их местами

int swapLastAndFirstDigit(const int n,const int firstDigit,const int lastDigit) {
    return n + (100 - 1) * (lastDigit - firstDigit);
}

int getSolution(const int n) {
    int firstDigit = n / 100;
    int lastDigit = n % 10;
    if (std::abs(lastDigit - firstDigit) == 1) {
        return swapLastAndFirstDigit(n, firstDigit, lastDigit);
    }
    return n;
}


int main() {

    int n = 251;
    std::cout << getSolution(n);

}