#include <iostream>

int main() {

    int input;

    std::cin >> input;

    for (int n = 2; n <= input; n++) {
        int flag = 0;
        int m=n/2;  
        
        for(int i = 2; i <= m; i++) {
            if(n % i == 0) {
                flag=1;}}  
            if (flag==0) {
                std::cout << n << "\n";} 
        }
}