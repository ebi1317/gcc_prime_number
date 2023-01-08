//
//  main.cpp
//  C++ program that repeatedly reads an integer number 𝑛, prints all possible pairs of positive numbers with product 𝑛, and checks whether 𝑛 is prime.
//
//  Created by ebrhaim zeinali
//


#include <iostream>
#include <math.h>>

using namespace std;

int main()
{

    int n = 0;


    cout << "give the n = " << endl;
    cin >> n;

    int numberOfFactors = 0 ;

    for (int i=1; i< n/2 ; ++i)
    {
        if(n%i == 0)
        {
            cout << n/i << "*" << i << endl;
            numberOfFactors++;
        }


    }

    if(numberOfFactors >1)
        cout << n << "is not a prime number" << endl;
    else
        cout << n << "is a prime number" << endl;


    return 0;
}
