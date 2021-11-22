/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Geena-Maria van Dijk
 */

#include "std_lib_facilities.h"

int main ()
{
    string isEven = "even";
    
    cout<< "Please enter an integer: "<<endl;
    int n;
    cin>>n;

    if (n%2)
    {
        isEven = "odd";
    }

    cout<< "The value "<<n<<" is an "<<isEven<<" number."<<endl;
    
    return 0;
}
