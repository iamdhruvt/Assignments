//
//  main.cpp
//  A1_Q21
//
//  Created by Dhruv Tyagi on 23/01/21.
//

#include <iostream>
#include <cmath>
using namespace std;

int octalToDecimal(int octalNumber);

int main()
{
   int oct;
   cout << "Enter an octal number: ";
   cin >> oct;
   cout << oct << " in octal = " << octalToDecimal(oct) << " in decimal";
   
   return 0;
}

int octalToDecimal(int octnum)
{
    int dec = 0, i = 0, rem;
    while (octnum != 0)
    {
        rem = octnum % 10;
        octnum /= 10;
        dec += rem * pow(8, i);
        ++i;
    }
    return dec;
}
