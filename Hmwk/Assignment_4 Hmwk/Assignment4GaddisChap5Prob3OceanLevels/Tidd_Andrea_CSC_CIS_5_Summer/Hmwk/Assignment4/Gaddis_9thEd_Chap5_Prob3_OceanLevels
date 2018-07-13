/*
 * Assignment 4 Gaddis Chapter 5 Problem 3
 */

/* 
 * File:   main.cpp
 * Author: Andrea Tidd
 * Created on July 8, 2018, 1:08 PM
 * Purpose: Record The rise of the ocean level over a period of years
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) 
{
    int Year;
    
    const double Rise = 1.5;    // 1.5 mm
    
    double TotalRise = 0.0;
    
    cout << " Year      Total Risen Level \n";
    cout << "---------------------------- \n";
    
    cout << fixed << setprecision(1);
    
    for (int Year = 1; Year <=25; Year++)
    {
        TotalRise += Rise;
        cout << setw(2) << Year << setw(12) << TotalRise << " mm \n";
    }

    return 0;
}

