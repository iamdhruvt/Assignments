//
//  main.cpp
//  A1_Q25
//
//  Created by Dhruv Tyagi on 23/01/21.
//

#include <iostream>
using namespace std;


void conv(int n)
{
    int oct[100];
    int i = 0;
    while (n != 0) {
        
        oct[i] = n % 8;
        n = n / 8;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        cout << oct[j];
}
int main()
{
    int n = 33;
    
    conv(n);

    return 0;
}

