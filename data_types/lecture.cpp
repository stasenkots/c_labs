#include <iostream>

int main() {

    char c;
    int a;
    double b;
    long d;

    //default init
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << d << std::endl;
    std::cout << c << std::endl;


    /** init vars*/
    std::cout << std::endl;
    // sizeof

    std::cout << sizeof(c) << std::endl;
    /** char - 1 byte */

    // char and int

    c = 'c';

    int k = c;

    int c5 = 'a';

    std::cout << c << std::endl;

    /**chars is codes*/

    //signed and unsigned
    unsigned int f = 0;
    std::cout << f - 1 << std::endl;
    std::cout << std::endl;
    /** don't used unsigned */

    //bool

    bool b1 =  0 < 1;
    std::cout << b1 << std::endl;

    /**bool is number*/

    //double and float
    std::cout << std::endl;

    double e = 1.0 / 10000001; // 8
    float f1 = 1.0 / 10000001; // 4
    /** use double */

    std::cout.precision(17);
    std::cout << std::fixed << e << std::endl;
    std::cout << std::fixed << f1 << std::endl;
    std::cout << (e == f1) << std::fixed << std::endl;
    /** be careful with double and float */



    int a1 = e;
    std::cout << a1 << std::endl;

    // casts

    /// it's save
    int c3 = 1;
    double a5 = (double)c3;
    ///don't do it
    long long a10 = a5;
    std::cout << a5 << std::endl;

    ///don't do it
    double  b3 = 10000000000000;
    int a4 = b3;


    std::cout << a4 << std::endl;

    return 0;
}
