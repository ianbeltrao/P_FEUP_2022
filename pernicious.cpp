#include <bits/stdc++.h>

using namespace std;

bool isPrime(int number)
{
    if (number == 1)
        return false;
    if (number == 2)
        return true;
    if (number % 2 == 0)
        return false;
    for (int i = 3; i <= sqrt(number); i += 2)
    {
        if (number % i == 0)
            return false;
    }
    return true;
}

string intToBinaryString(int number)
{
    string binaryString = "";
    while (number > 0)
    {
        binaryString = to_string(number % 2) + binaryString;
        number /= 2;
    }
    return binaryString;
}

int countOnes(string binaryRep)
{
    int ones = 0;
    for (unsigned int i = 0; i < binaryRep.length(); i++)
    {
        if (binaryRep[i] == '1')
            ones++;
    }
    return ones;
}

int main()
{
    int minimum;
    int maximum;
    cin >> minimum;
    cin >> maximum;

    for (int i = minimum; i <= maximum; i++)
    {
        if (isPrime(i))
        {
            string binaryRep = intToBinaryString(i);
            if (isPrime(countOnes(binaryRep)))
            {
                cout << i << endl;
            }
        }
    }
}