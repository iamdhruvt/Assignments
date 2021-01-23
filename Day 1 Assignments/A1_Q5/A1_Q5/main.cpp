//
//  main.cpp
//  A1_Q5
//
//  Created by Dhruv Tyagi on 23/01/21.
//
#include<iostream>
using namespace std;

int main(){
int n, t1 = 0, t2 = 1, nextTerm = 0;

    cout << "Enter the max number: ";
    cin >> n;
    

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= 15; ++i) {
       
        if(i == 1) {
            cout << t1 << ", ";
            continue;
        }
        if(i == 2) {
            cout << t2 << ", ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        if(nextTerm<n)
        cout << nextTerm << ", ";
    }
    return 0;
}
