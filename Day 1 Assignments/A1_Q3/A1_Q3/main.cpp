//
//  main.cpp
//  A1_Q3
//
//  Created by Dhruv Tyagi on 23/01/21.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int fact=1;
    while(n>0){
        fact=fact*n;
        n--;
    }
    cout<<"FActorial is: "<<fact;
    return 0;
}
