#include <iostream>
#include <algorithm>

int adigits(int a, int b, int c) {
    int array[3] = {a, b, c};
    int max = std::max({a, b, c});
    int min = std::min({a, b, c});
    int mid = 0;
    int counter = 0;

    if ((a == b) and (a == c)) {
        return (a*100) + (a*10) + a;
    }

    for (int i = 0; i < 3; i++) {
        if (array[i] == max and counter == 0) {
            array[i] = 0;
            counter++;
        } 
    }

    for (int i = 0; i < 3; i++) {
        if (array[i] > min) {
            mid = array[i]; 
            break;
        } 
        if (array[i] == min) {
            mid = min;
        }
    }
    
    int output = (max*100) + (mid*10) + min;
    
    return output;
}

int main() {
    std::cout << adigits(0, 0, 0);
}

