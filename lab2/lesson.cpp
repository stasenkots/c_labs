//
// Created by kotozavrina on 08/10/2021.
//

#include <iostream>
#include <cmath>


int main() {

//    //static cast vs C-style cast
//    int a = static_cast<int>(0.0231); cast -> static_cast,dynamic cast
//    int b = (int) 0.0231;
//    ///Dont't use C-style cast
//    std::cout << a << std::endl;
//    std::cout << b << std::endl;

    //div and mod

////    int a1 = -5 / 2;
//    int a2 = -5 % 2;
//    /// Be careful
//    std::cout << a1 << " " << a2 << std::endl;

//    //pow
//    double b1 = pow(1.0, 0.5);
//    std::cout << b1 << std::endl;
//    /// don't use it

// increment and decrement

//    int x = 0;
//    int b3 = x++;/// t = x;x +=1; b3 = t
//    int b4 = ++x;/// x += 1,b4 = x
//
//    std::cout << b3 << " " << b4 << std::endl;
//
//    x = 5;
//    int y = 5;
//    std::cout << x << " " << y << std::endl; // 5 5
//    std::cout << ++x << " " << --y << std::endl; // 6 4
//    std::cout << x << " " << y << std::endl; // 6 4
//    std::cout << x++ << " " << y-- << std::endl; // 6 4
//    std::cout << x << " " << y << std::endl;// 7 3

//    //side effects
//    int x = 0;
//    if (!(++x))  { // x = 1; x
//        std::cout << "Error" << std::endl;
//    }
//
//    // +, - , *, /, ++, --
//
//    std::cout << x / 1 << std::endl;
//    int a3 = 3;
//    int a4 = 4;
//    int a5 = 5;
//    a5 = a4 = a5; // a4 = a5; a4; a3 = a4, a3
//
//    x = 2;
//    std::cout << pow(x, ++x) << std::endl;

////    //ternar operator
//
//    int a6 = 1;
//           // if (a6 == 1) return a6 + 1 else a6 - 1
//                        //da      net
//    int res = (a6 == 1) ? a6 + 1 : a6 - 1;
//
//
//    std::cout << res << std::endl;
//
//
//    //Logical operators &&(And),||(or), !(not)
//    bool milk = true;
//    bool bread = true;
//    bool b5 = bread || milk;
//    std::cout << b5 << std::endl;

    // if/else
    int a7 = 0;
    if (a7 > 10) {
        std::cout << "a7 greater 10" << std::endl;
    } else if (a7 < 10) {
        std::cout << "a5 less 10" << std::endl;
    } else {
        std::cout << "a7 equal 10" << std::endl;
    }
    if(a7) {
        std::cout << "Ok" << std::endl;
        std::cout<<"Not Ok" <<std::endl;
    }
     //
     if (a7 >= 0 && a7 < 100){

     }

     if (a7 < 0 || a7 > 100);




}