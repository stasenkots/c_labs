//
// Created by kotozavrina on 28/10/2021.
//

#include "iostream"

///4.Напишите функцию вычисляющую nый член фибоначи (f1 = 0, f2 = 1), n - натуральное

int main() {

    int N;
    std::cin >> N;
    int f1 = 0;
    int f2 = 1;

    if (N == 1){
        std::cout << f1;
        return 0;
    }
    for (int i = 2; i < N; ++i) {
        int f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
    }
    std::cout << f2 << std::endl;


}