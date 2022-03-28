#include <iostream>
#include <string>

int main() {
    
    std::string output;

    int input;

    std::cin >> input;

    for (int i = 1; i <= input; i++) {

        if (((i % 3) == 0) and ((i % 5) != 0)) {

            output = output + "Fizz";

        } else if (((i % 5) == 0) and ((i % 3) != 0)) {

            output = output + "Buzz";

        } else if ((i % 3) == 0 and ((i % 5) == 0)) {
            output.pop_back();
        } else {
            std::string str_i = std::to_string(i);
            output = output + str_i;
        }
        
        output = output + " ";
    }

    std::cout << output << "\n";

}

//asidiuwqdiun