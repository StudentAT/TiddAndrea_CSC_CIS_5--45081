/*
 * Assignment 4 Gaddis Chapter 5 Problem 6
 */

/* 
 * File:   main.cpp
 * Author: Andrea Tidd
 * Created on July 8, 2018, 2:30 PM
 * Purpose: Calculate the distance traveled for a trip and split it into the amount traveled at the hour marks.
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
 float Distance, Rate;
 int Time, SeparatedHours;
    
    cout << "Enter the speed of the vehicle in mph. ";
    cin >> Rate;
    cout << "\n";
 
    
    // Specify the acceptable values.
 while (Rate <= 0)
 {
     cout << "Speed must be a positive number greater than 0. Enter the speed again. ";
     cin >> Rate;
     cout << "\n";
 }
    
    
       // If an acceptable value is entered 
    cout << "How may hours has it traveled? ";
    cin >> Time;
    cout << "\n";

    // Specify the acceptable values.    
 while (Time <= 0)
 {
     cout << "Time must be a positive number greater than 0. Enter the time again. ";
     cin >> Time;
     cout << "\n";
 }
    
    
       // If an acceptable value is entered
    cout << "Hours\tDistance Traveled \n";
    cout << "------------------------- \n";
    
    
    for (SeparatedHours = 1; SeparatedHours <= Time; SeparatedHours++)
    {
        Distance = Rate * SeparatedHours;
        cout << SeparatedHours << "\t" << Distance << " Miles"<< endl;
    }
    
    
    return 0;
}