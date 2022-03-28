#include <iostream>

int main() {
    
    int input, reversed = 0, remainder;

    std::cin >> input;

    while (input != 0) {
        remainder = input % 10;
        reversed = reversed*10 + remainder;
        input /= 10;
    }

    std::cout << reversed;
}



