//
//  main.cpp
//  A1_Q9
//
//  Created by Dhruv Tyagi on 23/01/21.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    char c;
    cout<<"Enter a character: ";
    cin>>c;
    if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
        cout<<c<<" is a vowel";
    else
        cout<<c<<" is a consonant";
        
    return 0;
}
