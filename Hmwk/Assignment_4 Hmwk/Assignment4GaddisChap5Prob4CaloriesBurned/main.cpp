/*
 * Assignment 4 Gaddis Chapter 5 Problem 4
 */

/* 
 * File:   main.cpp
 * Author: Andrea Tidd
 * Created on July 8, 2018, 1:42 PM
 * Purpose: Display the calories burned collectively in five minute increments.
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
    float CaloriesBurned;
    float CaloriesPerMinute = 3.6;
    
    int Time;
    
    for (int Time = 5; Time <= 30; Time += 5)
    {
        CaloriesBurned = Time * CaloriesPerMinute;
        
        cout << "The calories burned after " << Time << " minutes is " << CaloriesBurned << "\n";
    }

    return 0;
}

