//
//  main.cpp
//  A1_Q22
//
//  Created by Dhruv Tyagi on 23/01/21.
//

#include <iostream>
#include <cmath>

using namespace std;

int convertBinaryToDecimal(long long);

int main()
{
    long long n;

    cout << "Enter a binary number: ";
    cin >> n;
 
    cout << n << " in binary = " << convertBinaryToDecimal(n) << "in decimal";
    return 0;
}

int convertBinaryToDecimal(long long n)
{
    int dec = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        dec += remainder*pow(2,i);
        ++i;
    }
    return dec;
}
