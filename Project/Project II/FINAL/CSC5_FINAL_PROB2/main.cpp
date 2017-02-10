/* 
  File:   main.cpp
  Author: Linh Vu
  Created on February 8, 2017, 10:58 PM
  Purpose:  Write a program that plays the game "Guess the Number" as follows.  
            Your program chooses the number to be guessed by selecting an 
            unsigned integer at random in the range 1 to 10^X.  The program
            inputs X and displays

            I have a number between 1 and 10^X Can you guess my number?  
            You will be given a maximum integer of (log2(10^X)+1) guesses.
            Please type your first guess.

            The player then types a guess. The program responds with one of the 
            following.

            1. Congratulations, You guessed the number!
            Would you like to play again(y or n)?
            2. Too low.  Try again.
            3. Too High. Try again.
            4. Too many tries.

            Flowchart your code.

            Note:  if you type in X=3 then integer of log2(10^3)+1=10;
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <vector>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int nGUESS=10, //Maximum number of guesses
        GUESS,     //User's inputs
        Random;    //Random number to be guessed
    
    Random=rand()%1000+1; //Generate a random number between 1 and 1000
    
    //Introduction
    cout<<endl;
    cout<<"\tLet's play a game!"<<endl;
    cout<<"\tI am thinking a number between 1 and 1000."<<endl;
    cout<<"\tCan you guess my number?"<<endl;
    cout<<"\tYou will have a maximum of "<<nGUESS<<" guesses."<<endl;
    cout<<endl;  
    
    //Input values
    while (nGUESS>0&&GUESS!=Random) {//Limit the number of guesses
        cout<<"\n\tLet's Start! Enter your ";
        switch (nGUESS) { //Have the number of cases counting down
            case 10: cout<<"1st guess: ";break;
            case 9 : cout<<"2nd guess: ";break;
            case 8 : cout<<"3rd guess: ";break;
            case 7 : cout<<"4th guess: ";break;
            case 6 : cout<<"5th guess: ";break;
            case 5 : cout<<"6th guess: ";break;
            case 4 : cout<<"7th guess: ";break;
            case 3 : cout<<"8th guess: ";break;
            case 2 : cout<<"9th guess: ";break;
            case 1 : cout<<"last guess: ";break;
            default:
                break;
        }
        
        //Output values
        cin>>GUESS;
        if (GUESS<Random) {
            cout<<"\t\nYour guess is TOO LOW!"<<endl;
            --nGUESS;
            cout<<"\tYou have "<<nGUESS<<" guesses left."<<endl;
        }
        else if (GUESS>Random) {
            cout<<"\t\nYour guess is TOO HIGH!"<<endl;
            --nGUESS;
            cout<<"\tYou have "<<nGUESS<<" guesses left."<<endl;
        }
        else if (GUESS==Random) {
            cout<<"\t\nCONGRATULATIONS! YOU HAVE GUESSED THE NUMBER!"<<endl;
        }
        if (nGUESS==0) 
            cout<<"\t\nTOO MANY TRIES! The number was "<<Random<<". You've lost!"
                    <<endl;
    }

    //Exit stage right!
    return 0;
}