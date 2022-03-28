#include <iostream>

int length(const char str[]) {
    int l = 0;
    while (str[l] != '\0')
    {l++;}
    return l;
}


unsigned long hstr_to_integer(const char hstr[])
{
    int len = length(hstr);
    unsigned long int decimal = 0;
    unsigned long int base = 1;
    for (int i = len-1; i>=0; i--)
    {
        if (hstr[i]>='0' and hstr[i] <= '9')
        {
            decimal += (hstr[i]-48)*base;
        }
        else if (hstr[i]>='A' and hstr[i] <= 'F')
        {
            decimal += ((hstr[i])-55)*base;
        }
        else if (hstr[i]>='a' and hstr[i] <= 'f')
        {
            decimal += ((hstr[i])-87)*base;
        }
        base = base * 16;
        std::cout << base << "\n";
    }
    return decimal;
}

int main() {
    std::cout << hstr_to_integer("cafebabe2022") << "\n";   
}