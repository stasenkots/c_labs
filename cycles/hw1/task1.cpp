//
// Created by kotozavrina on 28/10/2021.
//

#include "iostream"


///1.Пользователь вводит натуральное число N.
///Построить елочку.
///Пример N = 4
/// *
/// **
/// ***
/// ****

int main() {

    int N;
    std::cin >> N;
    for (int i = 1; i <= N; ++i) {
        for (int j = 0; j < i; ++j) {
            std::cout << '*';
        }
        std::cout << std::endl;
    }


}