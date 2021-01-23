//
//  main.cpp
//  A1_Q29
//
//  Created by Dhruv Tyagi on 23/01/21.
//

#include <iostream>
using namespace std;

int calc(int, int);

int main()
{
    int base, pwr, result;

    cout << "Enter base number: ";
    cin >> base;
    cout << "Enter power : ";
    cin >> pwr;
    result = calc(base, pwr);
    cout << base << "^" << pwr << " = " << result;

    return 0;
}

int calc(int base, int pwr)
{
    if (pwr != 0)
        return (base*calc(base, pwr-1));
    else
        return 1;
}
