//
//  main.cpp
//  211 ICL 1
//
//  Created by Aiman Moufid on 1/30/25.
//

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, store, store2;
    cout << "Input any integer: \n>" ;
    cin >> num1;
    if (num1 % 2 == 1)
    {
        cout << endl<< num1 << " is odd" << endl;
    }
    else
        cout << endl << num1 << " is even" << endl;
    
    cout << endl << "Input integer 1 \n>";
    cin >> num1;
    cout << endl << "Input integer 2 \n>";
    cin >> num2;
    if (num1 % num2 == 0 )
        cout << endl <<"This is a factor\n";
    else
        cout << endl <<"This is not a factor\n";
    
    cout << "Input a number from 0-100"<< endl << ">";
    cin >> num1;
    if (num1 >=85)
        cout << "\nThe Schore would be an A" << endl;
    else if (num1 >=75 && num1<85)
        cout << "\nThe Schore would be an B" << endl;
    else if (num1 >=65 && num1<75)
        cout << "\nThe Schore would be an C" << endl;
    else if (num1 >=60 && num1<65)
        cout << "\nThe Schore would be an D" << endl;
    else if (num1 <60)
        cout << "\n The Score would be an F" << endl;
    
}
