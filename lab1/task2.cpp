//
// Created by kotozavrina on 01/10/2021.
//

#include "iostream"
#include <cmath>


//Найти угол  в градусах (меньше 180°) между положением минутной и часовой стрелок в h часов, m минут, s секунд. (h, m, s вводится пользователем).


int main() {

    double h;
    double m;
    double s;

    std::cout << "Enter h,m,s" << std::endl;
    std::cin>> h >> m >> s;

    double h_total = h + m / 60 + s / 3600;
    double m_total = m + s / 60;

    double angle_per_hour = 360.0 / 12;
    double angle_per_minute = angle_per_hour / 60;

    double angle_hour = angle_per_hour * h_total;
    double angle_minute = angle_per_minute * m_total;
    double  res = std::abs(angle_hour - angle_minute);

    if(res > 180){
        std::cout << 360 - res << std::endl;
    } else{
        std::cout << res << std::endl;
    }

    double angle_per_seconds = angle_per_minute / 60;

    double angle_hour1 = angle_per_hour * h + angle_per_minute * m + angle_per_seconds * s;
    double angle_minute1 =  angle_per_minute * m + angle_per_seconds * s;
    double  res1 = std::abs(angle_hour - angle_minute);

    if(res > 180){
        std::cout << 360 - res1 << std::endl;
    } else {
        std::cout << res1 << std::endl;
    }

}