/*
 * Assignment 4 Gaddis Chapter 5 Problem 1
 */

/* 
 * File:   main.cpp
 * Author: Andrea Tidd
 * Created on July 8, 2018, 8:44 AM
 * Purpose: Get a loop sum.
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
    int Num, Sum = 0;
    
    cout << "Enter a positive integer. ";
    cin >> Num;
    
    
    for (int Base = 1; Base <= Num; ++Base) 
    {
        Sum += Base;
    }

    cout << "The sum of this number successively = " << Sum;
    return 0;
}