/*
 * Assignment 4 Gaddis Chapter 5 Problem 20
 */

/* 
 * File:   main.cpp
 * Author: Andrea Tidd
 * Created on July 9, 2018, 9:49 PM
 * Purpose: Generate a random number and have the user guess until they are correct.
 */

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(int argc, char** argv) 
{
    int RandomNum, Guess;
    
    bool Correct = false;
    
    unsigned seed = time(0);
    
    srand(seed);
    RandomNum = 1 + rand()%10;
    
    
        cout << "Guess the number I am thinking. ";
        cin >> Guess;
    
    while (!Correct)
        {
            if (Guess < RandomNum)
            {
                cout << "Too low, try again. ";
                cin >> Guess;
            }
            
            else if (Guess > RandomNum)
            {
                cout << "Too high, try again. ";
                cin >> Guess;
            }
            
            else
            {
                cout << "Congratulations. You have guess correctly.";
                Correct = true;
            }
        }
    
   
    return 0;
}