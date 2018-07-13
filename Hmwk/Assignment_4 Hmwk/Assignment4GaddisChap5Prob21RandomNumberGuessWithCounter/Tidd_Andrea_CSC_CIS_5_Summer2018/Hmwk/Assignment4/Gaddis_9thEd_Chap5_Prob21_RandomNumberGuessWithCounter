/*
 * Assignment 4 Gaddis Chapter 5 Problem 21
 */

/* 
 * File:   main.cpp
 * Author: Andrea Tidd
 * Created on July 9, 2018, 10:17 PM
 * Purpose: Generate a random number and have the user guess until they are correct.
 *          And count the attempts made before the guess is correct.
 */

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(int argc, char** argv) 
{
    int RandomNum, Guess;
    int Attempts = 0;
    
    bool Correct = false;
    
    unsigned seed = time(0);
    
    srand(seed);
    RandomNum = 1 + rand()%10;
    
    
        cout << "Guess the number I am thinking. ";
        cin >> Guess;
        Attempts++;
    
    while (!Correct)
        {
            if (Guess < RandomNum)
            {
                cout << "Too low, try again. ";
                cin >> Guess;
                Attempts++;
            }
            
            else if (Guess > RandomNum)
            {
                cout << "Too high, try again. ";
                cin >> Guess;
                Attempts++;
            }
            
            else
            {
                cout << "Congratulations. You have guessed correctly.\n\n";
                Correct = true;
                
                cout << "The number of attempts made before correct = " << Attempts;
            }
        }
    
   
    return 0;
}