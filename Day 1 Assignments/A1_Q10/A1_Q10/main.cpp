//
//  main.cpp
//  A1_Q10
//
//  Created by Dhruv Tyagi on 23/01/21.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    
    if(a>b)
        cout<<a<<" is greater than "<<b;
    else
        cout<<b<<" is greater than "<<a;
    return 0;
}
