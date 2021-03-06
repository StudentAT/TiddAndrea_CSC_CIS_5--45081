#include <iostream>//Input Output Library
#include <cstdlib> //Random number generator seed
#include <ctime>   //Time Library
#include <iomanip> //Format Library
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    
    //Loop on the menu
    do{
    
        //Input values
        cout << "Choose from the list" << endl;
        cout << "Type 0 for Problem: with Sum of a number" << endl;
        cout << "Type 1 for Problem: with Ocean Levels" << endl;
        cout << "Type 2 for Problem: Calories Burned" << endl;
        cout << "Type 3 for Problem: Distance traveled" << endl;
        cout << "Type 4 for Problem: Pennies for pay" << endl;
        cout << "Type 5 for Problem: Hotel Occupancy" << endl;
        cout << "Type 6 for Problem: Celsius to Fahrenheit" << endl;
        cout << "Type 7 for Problem: Greatest and least" << endl;
        cout << "Type 8 for Problem: Random number guessing game" << endl;
        cout << "Type 9 for Problem: Random number guessing game with a counter for guesses" << endl;
        cout << "Type any other character to exit" << endl;
        cin >> choice;

        //Switch to determine the Problem
        switch(choice)
        {
            case '0':
                {
                    cout<<"We are in Problem 1"<<endl;
                    
                    
                int Num, Sum = 0;
    
                cout << "Enter a positive integer. ";
                cin >> Num;
    
    
            for (int Base = 1; Base <= Num; ++Base) 
                {
                    Sum += Base;
                }

                cout << "The sum of this number successively = " << Sum << "\n" << endl;
                
                    return 0;
    
                    break;
                }
            
            case '1':
                {
                    cout<<"We are in Problem 3"<<endl;
                    
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
                    
                    break;
                }
            
            case '2':
                {
                    cout<<"We are in Problem 4"<<endl;
                    
                    float CaloriesBurned;
                    float CaloriesPerMinute = 3.6;
    
                    int Time;
    
                for (int Time = 5; Time <= 30; Time += 5)
                    {
                        CaloriesBurned = Time * CaloriesPerMinute;
        
                        cout << "The calories burned after " << Time << " minutes is " << CaloriesBurned << "\n";
                }
                    
                    return 0;
                    
                    break;
                }
            
            case '3':
                {
                    cout<<"We are in Problem 6"<<endl;
                    
                    int Time, SeparatedHours;
                    float Distance, Rate;
    
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
                                cout << SeparatedHours << "\t" << Distance << " Miles"<< "\n" << endl;
                            }
                                    
                    return 0;
                    
                    break;
                }
            
            case '4':
                {
                    cout<<"We are in Problem 7"<<endl;
                    
                    int Days = 1;
    
                    double Salary = 0.01;  // One penny written in dollar increments.
                    double Earnings;
                    double Total = 0.0;
    
                    cout << "Enter the number of days worked. ";
                    cin >> Days;
    
                        // Specify invalid inputs
                while (Days < 1)
                    {
                        cout << "Cannot be less than one day. Please re-enter the number of days. ";
                        cin >> Days;
                    }
    
    
                for ( Earnings = 1; Earnings <= Days; Earnings++)
                    {
                        cout << "Day " << Earnings << " you earned $" << Salary << "\n";
            
                        Salary *= 2;
                
                        Total += Salary;
                    }
    
                       // Calculate the Total
                    cout << "The total earnings is $" << Total << endl;

                    return 0;
                    
                    break;
                }
            
            case '5':
                {
                    cout<<"We are in Problem 9"<<endl;
                    
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
                    
                    break;
                }
            
            case '6':
                {
                    cout<<"We are in Problem 12"<<endl;
                    
                    
                    float Fahrenheit = 0.0f;
    
                    double Celsius;
    
    
                    cout << "Celsius\t\tFahrenheit \n";
                    cout << "-------------------------- \n";
    
                for (int i = 0; i <= 20; i++)
                    {
                        Fahrenheit = (9 * i)/5 + 32;
        
                        cout << i << "\t\t" << Fahrenheit << "\n";
                    }
 
                    return 0;  
                    
                    break;
                }
            
            case '7':
                {
                    cout<<"We are in Problem 20"<<endl;
                    
                    int Number = 0;
                    int Greatest;
                    int Least;
                    int Tracker = 0;   // Tracks the highest and lowest values entered.
    
                while (Number != -99)
                    {
                        cout << "Enter an integer. Enter -99 to stop entering. ";
                        cin >> Number;
    
                if (Tracker == 0)
                    {
                        Greatest = Number;
                        Least = Number;
                    }
        
                else
                    {
                        if (Number > Greatest && Number != -99)
                            Greatest = Number;
                        
                else if (Number < Least && Number != -99)
                    Least = Number;
            }
    
            Tracker++;
    
    }
            
                cout << "The greatest number entered is " << Greatest << endl;
                cout << "The smallest number entered is " << Least << endl;

                    
                return 0;
            
                    
                    break;
                }
            
            case '8':
                {
                    cout<<"We are in Problem 20"<<endl;
                    
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
                                cout << "Congratulations. You have guessed correctly.";
                                Correct = true;
                            }
        }
    
   
                    return 0;

                    
                    break;
                }
            
            case '9':
                {
                    cout<<"We are in Problem 21"<<endl;
                    
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
                    
                    break;
                }
            default:
                cout<<"You are exiting the program"<<endl;
        }
    }while(choice>='1'&&choice<='3');
    
    //Exit stage right!
    return 0;
}