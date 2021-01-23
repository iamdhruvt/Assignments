//
//  main.cpp
//  A1_Q13
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
    int flag=1;
    
    for(int i=2;i<n;i++){
        if(n%i==0)
            flag=0;
    }
    if(flag==1)
        cout<<n<<" is prime.";
    else
        cout<<n<<" is not prime.";
    return 0;
}
