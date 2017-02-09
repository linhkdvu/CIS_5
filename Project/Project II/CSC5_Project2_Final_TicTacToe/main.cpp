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
#include <vector>   //Vector Library
using namespace std;

//User Libraries
//Set colors
#define ANSI_COLOR_RED     "\x1b[31m"    //Color red
#define ANSI_COLOR_GREEN   "\x1b[32m"    //Color green
#define ANSI_COLOR_YELLOW  "\x1b[33m"    //Color yellow
#define ANSI_COLOR_BLUE    "\x1b[34m"    //Color blue
#define ANSI_COLOR_MAGENTA "\x1b[35m"    //Color magenta
#define ANSI_COLOR_CYAN    "\x1b[36m"    //Color cyan
#define ANSI_COLOR_RESET   "\x1b[0m"     //Reset back to black

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another
const int ROWSIZE=4; //Row size in the array
const int COLSIZE=4; //Column size in the array

//Function Prototypes
char gBoard[ROWSIZE][COLSIZE]= { {'A','B','C','D'},
                                 {'E','F','G','H'},
                                 {'I','J','K','L'},
                                 {'M','N','O','P'} } ; //Game board output
char turn;       //Player turns
bool DRAW=false, //Game Won
     gOver ();   //Game over

void dBoard();   //Display Board
void pTurn ();   //Player switching turns
void bubble (int [],int);      //Bubble 
void filAray(int [],int);      //Fill the array with random number
void prntAry(int [],int,int);  //Print out the array
int  luckyn (int [],int,int);  //Lucky number

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Set the random number of seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    string first1,last1, //First and last name (Player 1)
           first2,last2; //First and last name (Player 2)
    char yesno,          //User input to play the game
         winner;         //The winner get a prize
    
    //Linear search
    const int SIZE=200;       //Size for the array to choose a lucky number
    const int utilize=SIZE/2; 
    int array[utilize]={};    //The array
        
    //Main Menu
    cout<<"              Welcome Players."<<endl; //Introducing the Game
    cout<<endl;
    cout<<"This is a TIC-TAC-TOE game.\nPlease enter your "
            "first and last name"
            " as Player 1 and Player 2."<<endl;
    cout<<endl;
    cout<<ANSI_COLOR_MAGENTA<<"PLAYER 1: [X] - "<<ANSI_COLOR_RESET; 
    //Player 1's name [X]
    cin>>first1>>last1;
    cout<<ANSI_COLOR_MAGENTA<<"PLAYER 2: [O] - "<<ANSI_COLOR_RESET; 
    //Player 2's name [O]]
    cin>>first2>>last2;
    cout<<endl;
    cout<<"HELLO, "<<first1<<" and "<<first2<<"."<<endl;
    cout<<"WELCOME TO THE GAME! HERE ARE THE RULES: "<<endl;
    cout<<endl;
    cout<<"1) Two players take turns choosing a spot to place an 'X' or an "
            "'O'."<<endl;
    cout<<"2) The game is over when a player has four spots in a line, either "
            "a whole row, a whole column or diagonally."<<endl;
    cout<<"Now you know the rules. Would you like the play the game?"<<endl;
    cout<<"       Y - YES      N - NO"<<endl;
    cout<<ANSI_COLOR_RED<<"YOUR CHOICE: "<<ANSI_COLOR_RESET ;
    cin>>yesno;
    
    //Begin the game (Y)
    bool x=false; 
    do {
        switch (yesno) {
            case 'y': case 'Y': {
                cout<<endl;
            }   
                //Mapping out the game
                turn='X'; //Player 1's turn
                while (!gOver()) {
                       dBoard();
                        pTurn();
                        gOver();
                }
                if (turn=='O'&&!DRAW) {
                    dBoard(); //Board Display
                    cout<<endl<<endl<<"Player 1 [X] "<<first1<<" "<<last1<<
                            " Wins!\n";
                    //Winner's Prize
                    int find;
                    if (turn=='O'&&!DRAW) {
                        //Input Value
                        filAray(array,utilize);  
                        //Output
                        cout<<endl;
                        cout<<"YOU ARE THE WINNER!"<<endl;
                        cout<<"Now let's try your luck to get a prize.\nType "
                                "in a two digits number,\nand if your two "
                                "digits number is found in a range from 10 to "
                                "99,\nyou will earn a prize!"<<endl;
                        cout<<"Type in your number: ";
                        cin>>find;
                        cout<<endl;
                        cout<<"CONGRATULATION! "<<find<<" was found at "<<luckyn
                            (array,utilize,find)<<"."<<endl;
                        //Output array
                        prntAry(array,utilize,10);
                    }
                }
                else if (turn=='X'&&!DRAW) {
                    dBoard(); //Board Display
                    cout<<endl<<endl<<"Player 2 [O] "<<first2<<" "<<last2<<" Wins!\n";
                    //Winner's Prize
                    int find;
                    if (turn=='X'&&!DRAW) {
                        //Input Value
                        filAray(array,utilize);  
                        //Output
                        cout<<endl;
                        cout<<"YOU ARE THE WINNER!"<<endl;
                        cout<<"Now let's try your luck to get a prize.\nType "
                                "in a two digits number,\nand if your two "
                                "digits number is found in a range from 10 to "
                                "99,\nyou will earn a prize!"<<endl;
                        cout<<"Type in your number: ";
                        cin>>find;
                        cout<<endl;
                        cout<<"CONGRATULATION! "<<find<<" was found at "<<luckyn
                            (array,utilize,find)<<"."<<endl;
                        //Output array
                        prntAry(array,utilize,10);
                    }
                }
                else {
                    dBoard(); //Board Display
                    cout<<endl<<endl<<"[X] and [O] ==> DRAW!\n";
                    }
                break;
                case 'N':
                case 'n': {
                    x=false;
                    cout<<endl;
                    cout<<"\tSEE YOU AGAIN."<<endl; 
                    }
                }
    }while (turn=='O'&&!DRAW||turn=='X'&&!DRAW);
     while (x);
    
    return 0;
}

//******************************************************************************
//*****************************DISPLAY THE BOARD********************************
//*********************MAKE CHOICES, WINNER, LOOSER, DRAW***********************
//******************************************************************************
void dBoard () {
    //Game Board Output
    cout<<ANSI_COLOR_RED<<"\n\t     TIC-TAC-TOE\n   ";
    cout<<ANSI_COLOR_RESET<<"Player 1 (X):  -  Player 2 (O):  "<<endl;
    cout<<"  ---------------------------------"<<endl;
    cout<<"\t     |     |     |     "<<endl;
    cout<<"\t  "<<gBoard[0][0]<<"  |  "<<gBoard[0][1]<<"  |  "
                <<gBoard[0][2]<<"  |  "<<gBoard[0][3]<<endl;
    cout<<"\t_____|_____|_____|_____"<<endl;
    cout<<"\t     |     |     |     "<<endl;
    cout<<"\t  "<<gBoard[1][0]<<"  |  "<<gBoard[1][1]<<"  |  "
                <<gBoard[1][2]<<"  |  "<<gBoard[1][3]<<endl;
    cout<<"\t_____|_____|_____|_____"<<endl;
    cout<<"\t     |     |     |     "<<endl;
    cout<<"\t  "<<gBoard[2][0]<<"  |  "<<gBoard[2][1]<<"  |  "
                <<gBoard[2][2]<<"  |  "<<gBoard[2][3]<<endl;
    cout<<"\t_____|_____|_____|_____"<<endl;
    cout<<"\t     |     |     |     "<<endl;
    cout<<"\t  "<<gBoard[3][0]<<"  |  "<<gBoard[3][1]<<"  |  "
                <<gBoard[3][2]<<"  |  "<<gBoard[3][3]<<endl;
    cout<<"\t     |     |     |     "<<endl<<endl;
}

//******************************************************************************
void pTurn() {
    //Declare Variables
    char choice; //Choices to make from A to P
    int row=0,col=0; //Rows and Columns on the Board
   
    //Players Turns 
    if (turn=='X') { //Player 1
        cout<<ANSI_COLOR_MAGENTA<<"Player 1's Turn [X]: "<<ANSI_COLOR_RESET;
    }
    else { //Player 2
        cout<<ANSI_COLOR_MAGENTA<<"Player 2's Turn [O]: "<<ANSI_COLOR_RESET;
    }
    cin>>choice;
    
    //Mapping out
    switch (choice) {
        cout<<ANSI_COLOR_RESET;
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
            cout<<"You did not enter a correct character! Try again!\n";
            pTurn();
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

//******************************************************************************
//Game Over (Find the winner)
bool gOver() {
    for (int i=0;i<4;i++) { //Check for a winner
        //First win row (A,B,C,D)
        if ((gBoard[i][0]==gBoard[i][1]&&
             gBoard[i][1]==gBoard[i][2]&&
             gBoard[i][2]==gBoard[i][3])||
        //Second win row (A,E,I,M)
            (gBoard[0][i]==gBoard[1][i]&&
             gBoard[1][i]==gBoard[2][i]&&
             gBoard[2][i]==gBoard[3][i])|| 
        //Third win row (A,F,K,P)
            (gBoard[0][0]==gBoard[1][1]&&
             gBoard[1][1]==gBoard[2][2]&&
             gBoard[2][2]==gBoard[3][3])|| 
        //Fourth win row (D,G,J,M)
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
//******************************************************************************
//Winner's prize
void filAray(int a[],int n) {
    for (int i=0;i<n;i++) {
        a[i]=rand()%90+10;
    }
}

void prntAry(int a[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==perLine-1)cout<<endl;
    }
    cout<<endl;
}

int luckyn(int a[],int n,int val) {
    for (int i=0;i<n;i++) {
        if (a[i]==val) 
            return i;
    }
    return 0;
}

void bubble(int array[],int number){
    bool swap;
    int temp;
    do{
        swap=false;
        for(int i=0;i<number-1;i++){
            if(array[i]>array[i+1]){
                temp=array[i];
                array[i]=array[i+1];
                array[i+1]=temp;
                swap=true;
            }
        }
    }while(swap);
}