/* 
  File:   main.cpp
  Author: Linh Vu
  Created on February 7, 2017  10:20 AM
  Purpose:  Project 2: TIC TAC TOE Version.2
 */

//System Libraries
#include <iostream> //Input and Output Library
#include <iomanip>  //Formatting
#include <cmath>    //Math Library
#include <fstream>  //File I/O
#include <string>   //String Object
#include <ctime>    //Time for random seed
#include <cstdlib>  //Setting random seed
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another
const int ROWSIZE=4; //Row size in the array
const int COLSIZE=4; //Column size in the array

//Function Prototypes
char turn;       //Player turns
bool DRAW=false, //Game Won
     gOver (char gBoard[ROWSIZE][COLSIZE]);    //Game over
void dBoard(char gBoard[ROWSIZE][COLSIZE]);   //Display Board
void pTurn (char gBoard[ROWSIZE][COLSIZE]);    //Player switching turns

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    string first1,last1, //First and last name (Player 1)
           first2,last2; //First and last name (Player 2)
    char gBoard[ROWSIZE][COLSIZE]= { {'A','B','C','D'},
                                     {'E','F','G','H'},
                                     {'I','J','K','L'},
                                     {'M','N','O','P'} }; //Game board output
    char yesno;          //User input to play the game
    
        
    //Main Menu
    cout<<"              Welcome Players."<<endl; //Introducing the Game
    cout<<endl;
    cout<<"This is a TIC-TAC-TOE game.\nPlease enter your "
            "first and last name"
            " as Player 1 and Player 2."<<endl;
    cout<<endl;
    cout<<"Player 1: [X]"<<endl; //Player 1's name [X]
    cin>>first1>>last1;
    cout<<"Player 2: [O]"<<endl; //Player 2's name [O]]
    cin>>first2>>last2;
    cout<<endl;
    cout<<"Hello, "<<first1<<" and "<<first2<<"."<<endl;
    cout<<"Welcome to the game! Here are the rules: "<<endl;
    cout<<"1) Two players take turns choosing a spot to place an 'X' or an 'O'."<<endl;
    cout<<"2) The game is over when a player has four spots in a line, either a "
            "whole row, a whole column or diagonally."<<endl;
    cout<<"Now you know the rules. Would you like the play the game?"<<endl;
    cout<<"       Y - YES      N - NO"<<endl;
    cout<<"Your Choice: ";
    cin>>yesno;
    
    //Begin the game (Y)
    switch (yesno) {
        case 'y': case 'Y': {
            cout<<endl;
        }
    }
    
    //Checking for winner
    
    //Mapping out the game
    turn='X'; //Player 1's turn
    while (!gOver(gBoard)) {
           dBoard(gBoard);
            pTurn(gBoard);
            gOver(gBoard);
    }
    if (turn=='O'&&!DRAW) {
        dBoard(gBoard); //Board Display
        cout<<endl<<endl<<"Player 1 [X] "<<first1<<" "<<last1<<" Wins!\n";
    }
    else if (turn=='X'&&!DRAW) {
        dBoard(gBoard); //Board Display
        cout<<endl<<endl<<"Player 2 [O] "<<first2<<" "<<last2<<" Wins!\n";
    }
    else {
        dBoard(gBoard); //Board Display
        cout<<endl<<endl<<"[X] and [O] ==> DRAW!\n";
    }
    return 0;
}


//******************************************************************************
//*****************************DISPLAY THE BOARD********************************
//*********************MAKE CHOICES, WINNER, LOOSER, DRAW***********************
//******************************************************************************
void dBoard (char gBoard[ROWSIZE][COLSIZE]) {
    //Game Board Output
    cout<<"\n\t  TIC-TAC-TOE\n   ";
    cout<<"Player 1 (X):  -  Player 2 (O):  "<<endl;
    cout<<" ---------------------------------"<<endl;
    cout<<"\t     |     |     |     "<<endl;
    cout<<"\t  "<<gBoard[0][0]<<"  |  "<<gBoard[0][1]<<"  |  "<<gBoard[0][2]<<"  |  "<<gBoard[0][3]<<endl;
    cout<<"\t_____|_____|_____|_____"<<endl;
    cout<<"\t     |     |     |     "<<endl;
    cout<<"\t  "<<gBoard[1][0]<<"  |  "<<gBoard[1][1]<<"  |  "<<gBoard[1][2]<<"  |  "<<gBoard[1][3]<<endl;
    cout<<"\t_____|_____|_____|_____"<<endl;
    cout<<"\t     |     |     |     "<<endl;
    cout<<"\t  "<<gBoard[2][0]<<"  |  "<<gBoard[2][1]<<"  |  "<<gBoard[2][2]<<"  |  "<<gBoard[2][3]<<endl;
    cout<<"\t_____|_____|_____|_____"<<endl;
    cout<<"\t     |     |     |     "<<endl;
    cout<<"\t  "<<gBoard[3][0]<<"  |  "<<gBoard[3][1]<<"  |  "<<gBoard[3][2]<<"  |  "<<gBoard[3][3]<<endl;
    cout<<"\t     |     |     |     "<<endl<<endl;
}

//******************************************************************************
void pTurn(char gBoard[ROWSIZE][COLSIZE]) {
    //Declare Variables
    int choice; //Choices to make from 1 to 9
    int row,col; //Rows and Columns on the Board
   
    //Players Turns 
    if (turn=='X') { //Player 1
        cout<<"Player 1 turn [X]: ";
    }
    else { //Player 2
        cout<<"Player 2 turn [O]: ";
    }
    cin>>choice;
    
    //Mapping out
    switch (choice) {
        case 'A': case 'a': row=0;col=0;break;
        case 'B': case 'b': row=0;col=1;break;
        case 'C': case 'c': row=0;col=2;break;
        case 'D': case 'd': row=0;col=3;break;
        case 'E': case 'e': row=1;col=0;break;
        case 'F': case 'f': row=1;col=1;break;
        case 'G': case 'g': row=1;col=2;break;
        case 'H': case 'h': row=1;col=3;break;
        case 'I': case 'i': row=2;col=0;break;
        case 'J': case 'j': row=2;col=1;break;
        case 'K': case 'k': row=2;col=2;break;
        case 'L': case 'l': row=2;col=3;break;
        case 'M': case 'm': row=3;col=0;break;
        case 'N': case 'n': row=3;col=1;break;
        case 'O': case 'o': row=3;col=2;break;
        case 'P': case 'p': row=3;col=3;break;
        default:
            cout<<"You did not enter a correct number! Try again!\n";
            pTurn(gBoard);
    }
    
    //Player turns on the game
    if (turn=='X'&&gBoard[row][col]!='X'&&gBoard[row][col]!='O') {
        gBoard[row][col]='X';
        turn='O';
    }
    else if (turn=='O'&&gBoard[row][col]!='X'&&gBoard[row][col]!='O') {
        gBoard[row][col]='O';
        turn='X';
    }
    else {
        cout<<"The cell you chose is used! Try again\n";
        pTurn;
    }
}

//Game Over
bool gOver(char gBoard[ROWSIZE][COLSIZE]) {
    for (int i=0;i<4;i++) { //Check for a winner
        if ((gBoard[i][0]=='A'||gBoard[i][0]=='a')==(gBoard[i][1]=='B'||gBoard[i][1]=='b')&&(gBoard[i][1]=='B'||gBoard[i][1]=='b')==(gBoard[i][2]=='C'||gBoard[i][2]=='c')&&(gBoard[i][2]=='C'||gBoard[i][2]=='c')==(gBoard[i][3]=='D'||gBoard[i][3]='d'))||
            (gBoard[0][i]==gBoard[1][i]&&
             gBoard[1][i]==gBoard[2][i]&&
             gBoard[2][i]==gBoard[3][i])|| 
            (gBoard[0][0]==gBoard[1][1]&&
             gBoard[1][1]==gBoard[2][2]&&
             gBoard[2][2]==gBoard[3][3])|| 
            (gBoard[0][3]==gBoard[1][2]&&
             gBoard[1][2]==gBoard[2][1]&&
             gBoard[2][1]==gBoard[3][0])) {
            return true;
        }  
    }
    for (int i=0;i<4;i++) { //Check for draw
        for (int j=0;j<4;j++) {
            if (gBoard[i][j]!='X'&&gBoard[i][j]!='O') {
                return false;
            }
        }
    }
    DRAW=true;
    return true; //Exit Stages Right
}