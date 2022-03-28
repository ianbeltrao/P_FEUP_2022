#include <iostream>
#include <cmath>

using namespace std;

int solve_eq(int a, int b, int c, double& x1, double& x2){
    int delta = (b * b) - (4 * a * c);
    int h;
    if (delta < 0){
            x1 = NAN;
            x2 = NAN;
            h = 0;
    }
    else if (delta == 0){
        x1 = (((-1) * b) - sqrt(delta)) / (2 * a);
        x2 = NAN;
        h = 1;
    }
    else if (delta > 0){
        x1 = (((-1) * b) - sqrt(delta)) / (2 * a);
        x2 = (((-1) * b) + sqrt(delta)) / (2 * a);
        h = 2;
    }
    return h;
    return x1;
    return x2;
}

int main() {
    double x1, x2; 
    int r = solve_eq(1, -2, 1, x1, x2); 
    cout << r << ' ' << x1 << ' ' << x2;
}