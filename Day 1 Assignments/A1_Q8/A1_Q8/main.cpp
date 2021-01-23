//
//  main.cpp
//  A1_Q8
//
//  Created by Dhruv Tyagi on 23/01/21.
//
#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    cout<<"Enter two numbers: ";
    int n1,n2;
    cin>>n1>>n2;
    
    cout<<"Before swapping..."<<endl;
    cout<<"n1: "<<n1<<" n2:"<<n2<<endl;
    cout<<"After swapping ..."<<endl;
    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;
    cout<<"n1: "<<n1<<" n2:"<<n2;
    return 0;
}
