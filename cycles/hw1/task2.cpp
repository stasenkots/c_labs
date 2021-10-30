//
// Created by kotozavrina on 28/10/2021.
//

#include "iostream"

/// 2.Вводяться натуральные M,N.Посчитатайте сколько чисел в интервале (0,M) делиться на N


int main() {

    int N;
    int M;
    std::cin >> M >> N;
    int cnt = 0;
    for (int i = 1; i < M; ++i) {
        if (i % N == 0) {
            cnt++;
        }
    }

    std::cout << cnt;

}