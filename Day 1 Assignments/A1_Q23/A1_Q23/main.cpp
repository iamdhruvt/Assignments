//
//  main.cpp
//  A1_Q23
//
//  Created by Dhruv Tyagi on 23/01/21.
//

#include <iostream>
using namespace std;
int main()
{
int arr[10], n, i;
cout<<"Enter the number : ";
cin>>n;
for(i=0; n>0; i++)
{
arr[i]=n%2;
n= n/2;
}
cout<<"Binary of the given number: ";
for(i=i-1 ;i>=0 ;i--)
{
cout<<arr[i];
}
}
