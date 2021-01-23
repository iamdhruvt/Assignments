//
//  main.cpp
//  A1_Q30
//
//  Created by Dhruv Tyagi on 23/01/21.
//

#include <iostream>
using namespace std;

int main()
{
    int i, n;
    float arr[100];

    cout << "Enter number of elements: ";
    cin >> n;
    cout << endl;

   
    for(i = 0; i < n; ++i)
    {
       cout << "Enter element " << i + 1 << " : ";
       cin >> arr[i];
    }

    
    for(i = 1;i < n; ++i)
    {
      
       if(arr[0] < arr[i])
           arr[0] = arr[i];
    }
    cout << "Largest element : " << arr[0];

    return 0;
}
