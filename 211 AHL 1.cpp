//
//  main.cpp
//  211 AHL 1
//
//  Created by Aiman Moufid on 1/30/25.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int cents, penny=0, nickel=0, dime=0, quarter=0, attempts=5;
    cout << "Question 1.\n\nEnter a number of cents:" << endl << ">";
    cin >> cents;
    while(cents >= 25)
    {
        cents = cents-25;
        quarter = quarter + 1;
    }
    while(cents >= 10)
    {
        cents = cents - 10;
        dime = dime + 1;
    }
    while(cents >= 5)
    {
        cents = cents - 5;
        nickel = nickel + 1;
    }
    while (cents >= 1 && cents > 0)
    {
        cents = cents - 1;
        penny = penny +1;
    }
    cout << "Total Coins required:" << endl << "Quarters: " << quarter << endl << "Dimes: " << dime << endl << "Nickels: " << nickel << endl << "Pennies: " << penny << endl << endl;
    
    cout << "Question 2 & 3. " << endl << endl<<"Enter your username: \n>";
    string username, password;
    cin >> username;
    do
    {
        cout << "Enter your password: \n>";
        cin >> password;
        if (password == "helloworld")
        {
            cout << endl << "Login Successful, Welcome" << endl;
            attempts = 0;
        }
        
        else
        {
            cout << endl << "Incorrect Password " << attempts-1 << " attempts left." << endl;
            attempts = attempts - 1;
            if (attempts == 0)
            {
                cout << "You are now locked out of this account" << endl;
                return 0;
            }
        }
        
    }while(attempts != 0);
    
    cout << "\nQuestion 4." << endl << endl;
    
    cout << "Enter any character\n>";
    char symbol;
    cin >> symbol;
    cout << endl << "Enter any number\n>";
    cin >> cents;
    char array[cents][cents];
    for (int y = 0; y < cents; y++)
    {
        for(int x = 0; x < cents; x++)
        {
            array[x][y] = symbol;
            cout << array[x][y];
        }
        cout<< endl;
    }
        
    
}
