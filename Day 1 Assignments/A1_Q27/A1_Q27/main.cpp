//
//  main.cpp
//  A1_Q27
//
//  Created by Dhruv Tyagi on 23/01/21.
//

#include <iostream>
#include <cmath>
using namespace std;
int OctalToBinary(int octnum) {
   int decnum = 0, bin = 0, count = 0;

   while(octnum != 0) {
      decnum += (octnum%10) * pow(8,count);
      ++count;
      octnum/=10;
   }
   count = 1;
   while (decnum != 0) {
      bin += (decnum % 2) * count;
      decnum /= 2;
      count *= 10;
   }
   return bin;
}
int main() {
   int octalNum = 12;
   cout <<"Octal to Binary"<<endl;
   cout<<"Octal number: "<<octalNum<<endl;
   cout<<"Binary number: "<<OctalToBinary(octalNum)<<endl;
   return 0;
}
