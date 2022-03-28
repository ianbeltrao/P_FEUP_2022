#include <iostream>
#include <iomanip>
#include <math.h>

int main() {
    int k;
    int d;

    std::cin >> k;
    std::cin >> d;

    double output;

    for (int i = 0; i <= k; i++) {
        output += 4*((std::pow(-1, i))/(2*i+1));
    }

    std::cout << std::fixed;
    std::cout << std::setprecision(d);
    std::cout << output;
}