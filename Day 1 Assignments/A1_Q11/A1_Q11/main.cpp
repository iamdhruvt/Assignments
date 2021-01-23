//
//  main.cpp
//  A1_Q11
//
//  Created by Dhruv Tyagi on 23/01/21.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    cout<<"Enter a number: ";
    int n;
    cin>>n;
    int rev=0;
    int temp;
    temp=n;
    
    while(n!=0){
        int prod=n%10;
        rev=rev*10+prod;
        n=n/10;
    }
    cout<<"Reverse of "<<temp<<" is "<<rev;
    return 0;
}
