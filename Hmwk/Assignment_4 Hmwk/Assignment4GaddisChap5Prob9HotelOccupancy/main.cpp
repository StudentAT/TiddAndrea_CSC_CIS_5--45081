/*
 * Assignment 4 Gaddis Chapter 5 Problem 9
 */

/* 
 * File:   main.cpp
 * Author: Andrea Tidd
 * Created on July 8, 2018, 4:51 PM
 * Purpose: Calculate the percentage that a hotel occupied.
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) 
{
    int NumFloors = 0, NumRooms = 0, TotalRooms = 0, TotalOccupied = 0, Occupied = 0, TotalFloors = 0;
    
    float PercentOccupied = 0.0f;
    
    
        cout << "How many floors are in the building? ";
        cin >> NumFloors;
        cout << "\n";

        
        while (NumFloors < 1)
            {
                cout << "The Number of floors must be at least 1. Please re-enter the number of floors. ";
                cin >> NumFloors;
                cout << "\n";
            }
        
        
        for (int i = 1; i <= NumFloors; i++)
        {
            if (i != 13)
            {
                cout << "How many rooms are on the floor? ";
                cin >> NumRooms;
                
                
                while (NumRooms < 10)
                {
                    cout << "The number of rooms must be at least 10. Please re-enter the number of rooms. ";
                    cin >> NumRooms;
                    cout << "\n";
                }
            }
            
            cout << "How many rooms are occupied? ";
            cin >> Occupied;
            cout << "\n";

            
            
            TotalRooms += NumRooms;
            TotalOccupied += Occupied;
        }
        
        PercentOccupied = (TotalOccupied * 1.0f / TotalRooms) * 100.0f;
        
        cout << "The hotel has " << TotalRooms << " rooms.\n";
        cout << "The hotel has " << TotalOccupied << " occupied rooms.\n";
        cout << "The hotel has " << TotalRooms - TotalOccupied << " unoccupied rooms.\n";
        cout << "The hotel is filled " << setprecision(2) << fixed << PercentOccupied << "% \n";
        
        
    return 0;
}

