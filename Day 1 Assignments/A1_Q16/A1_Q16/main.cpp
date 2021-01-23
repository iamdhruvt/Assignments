//
//  main.cpp
//  A1_Q16
//
//  Created by Dhruv Tyagi on 23/01/21.
//

#include <iostream>

using namespace std;

int main() {
   int num,temp,mod,n = 0,result = 0,power;
   cout << "Enter an integer: ";
   cin >> num;

   temp = num;

   while (temp != 0) {
      temp /= 10;
      ++n;
   }
   temp = num;

   while (temp != 0) {
      mod = temp % 10;

      
      power = round(pow(mod, n));
      result += power;
      temp /= 10;
   }

   if (result == num)
      cout << num << " is an Armstrong number.";
   else
      cout << num << " is not an Armstrong number.";
   return 0;
}
