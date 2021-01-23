//
//  main.cpp
//  A1_Q28
//
//  Created by Dhruv Tyagi on 23/01/21.
//



#include <iostream>
using namespace std;


void rev(const string& a);

int main() {
  string str;

  cout << " Please enter a string " << endl;
  getline(cin, str);
  rev(str);
  return 0;
}
void rev(const string& str) {
  size_t numOfChars = str.size();
  if(numOfChars == 1) {
    cout << str << endl;
  }
  else {
    cout << str[numOfChars - 1];
    rev(str.substr(0, numOfChars - 1));
  }
}
