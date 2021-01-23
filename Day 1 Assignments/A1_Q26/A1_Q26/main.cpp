//
//  main.cpp
//  A1_Q26
//
//  Created by Dhruv Tyagi on 23/01/21.
//

#include <iostream>
#include <cmath>

using namespace std;

int convertBinarytoOctal(long long);
int main()
{
    long long bin;

    cout << "Enter a binary number: ";
    cin >> bin;

    cout << bin << " in binary = " << convertBinarytoOctal(bin) << " in octal ";

    return 0;
}

int convertBinarytoOctal(long long bin)
{
    int octnum = 0, decnum = 0, i = 0;

    while(bin != 0)
    {
        decnum += (bin%10) * pow(2,i);
        ++i;
        bin/=10;
    }

    i = 1;

    while (decnum != 0)
    {
        octnum += (decnum % 8) * i;
        decnum /= 8;
        i *= 10;
    }

    return octnum;
}

