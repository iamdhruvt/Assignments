//
//  main.cpp
//  A1_Q15
//
//  Created by Dhruv Tyagi on 23/01/21.
//

#include <iostream>
using namespace std;

int main() {
    int num, temp, mod, result = 0;
    cout << "Enter a three-digit integer: ";
    cin >> num;
    temp = num;

    while (temp != 0) {
        
        mod = temp % 10;
        
        result += mod * mod * mod;
        
        
        temp = temp/10;
    }

    if (result == num)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";

    return 0;
}
