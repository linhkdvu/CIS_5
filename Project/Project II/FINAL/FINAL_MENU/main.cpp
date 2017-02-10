/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 17, 2017, 12:10 PM
  Purpose:  Example Menu to be used in Homework
 */

//System Libraries
#include <iostream> //Input Output Library
#include <cstdlib>  //Random number generator seed
#include <ctime>    //Time Library
#include <iomanip>  //Format Library
#include <cmath>    //Math Library
#include <string>   //String Library
#include <sstream>
#include <vector>
#include <fstream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another

//Function Prototypes
//Function #1
void prob1F();
signed short Revers(unsigned short NUM); //Reverse numbers
//Function#2
void prob2F();
//Function #3
void prob3F();
void fillVec(vector<unsigned short> &, vector<unsigned short> &,int);
void prntVec(vector<unsigned short> &, vector<unsigned short> &,int);
//Function #4
void prob4F();
short int fndRnd(short int [],const int);
void retrand(short int [],int [],const int,const int);
//Function #5
void prob5F();
void filAray(string [],int,int); //Filling the array
void prntAry(string [],int,int); //Print out the array
void read(string [],int,ifstream &);
void sort(string [],int);
void swap(string &,string &);
//Function #6
void prob6F();

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    bool x=true;
    
    //Loop on the menu
    do{
    
        //Introduction
        cout<<endl;
        cout<<"-------------------------------------------------"<<endl;
        cout<<"                  CSC 5 - FINAL"<<endl;
        cout<<"-------------------------------------------------"<<endl;
        cout<<"Choose from the list: \n"<<endl;
        cout<<"Type 1: Problem #1 - REVERSED NUMBERS"<<endl;
        cout<<"Type 2: Problem #2 - GUESS THE NUMBER"<<endl;
        cout<<"Type 3: Problem #3 - EVEN/ODD"<<endl;
        cout<<"Type 4: Problem #4 - RANDOM SEQUENCE"<<endl;
        cout<<"Type 5: Problem #5 - ARRAY SORT"<<endl;
        cout<<"Type 6: Problem #6 - SPREADSHEET STUFF."<<endl;
        cout<<"P.S: Type 'x' to exist the program."<<endl;
        cout<<endl;
        cout<<"Number: ";
        cin>>choice;
        cout<<endl;

        //Switch to determine the Problem
        switch(choice){
            case '1':{prob1F();break;}
            case '2':{prob2F();break;}
            case '3':{prob3F();break;}
            case '4':{prob4F();break;}
            case '5':{prob5F();break;}
            case '6':{prob6F();break;}
            default:
                cout<<"See You Again!"<<endl;
                x=false;
        }
    }while(choice>='1'&&choice<='6');
     while(x);
    
    //Exit stage right!
    return 0;
}

/*
//345678901234567890123456789012345678901234567890123456780123456789012345678901
//**********************************PROBLEM#1***********************************
//DESCRIPTION: Write a function that takes an unsigned short integer and returns a
               signed short number in reverse.
//******************************************************************************
//Function PB#1
*/
void prob1F() {
    //Introduction
    cout<<endl;
    cout<<"Problem #1 - REVERSED NUMBERS."<<endl;
    //Declare Variables
    unsigned short NUM; //Unsigned number
    
    //Input values
    cout<<"This program reverses a number that you typed in and calculates"<<endl;
    cout<<"For example: 106 reversed would be 601."<<endl;
    cout<<endl;
    cout<<"Enter an unsigned value: ";
    cin>>NUM;
    
    //Output values
    signed short REV=Revers(NUM);
    if(REV==-1) {
        cout<<"No Conversion is Possible."<<endl;
    }
    else {
        cout<<"Reversed value is: "<<REV<<endl;
    }
}

    //Function
    signed short Revers(unsigned short NUM){
    int MAX=pow(2,(sizeof(signed short)*8-1))-1;
    string str,temp="";
    stringstream ss;
    ss<<NUM;
    ss>>str;
    //Reversed
    for(int i=0;i<str.size();++i) {
        temp=str[i]+temp;
    }
     ss.clear();
     ss<<temp;
     ss>>NUM;
    if(NUM>MAX){
        return -1;
    }
    else{
        return NUM;
    }
}
    
/*
//345678901234567890123456789012345678901234567890123456780123456789012345678901
//**********************************PROBLEM#2***********************************
//DESCRIPTION: Write a program that plays the game "Guess the Number" as follows.  
            Your program chooses the number to be guessed by selecting an 
            unsigned integer at random in the range 1 to 10^X.
//******************************************************************************
//Function PB#2
*/
void prob2F() {
    //Introduction
    cout<<endl;
    cout<<"Problem #2 - GUESS THE NUMBER."<<endl;
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
}

/*
//345678901234567890123456789012345678901234567890123456780123456789012345678901
//**********************************PROBLEM#3***********************************
//DESCRIPTION: Create a function that fills one vector with even random 2 digit 
            numbers and another vector with odd random numbers.
//******************************************************************************
//Function PB#3
*/
void prob3F() {
    //Introduction
    cout<<endl;
    cout<<"Problem #3 - EVEN/ODD."<<endl;
    //Set the random number of seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    vector<unsigned short> even;
    vector<unsigned short> odd; //Even and odd numbers in vector
    int SIZE; //Size to be input by user
    
    //Input values
    cout<<endl;
    cout<<"Enter the number of elements to be put into vectors,\n  and the "
            "number of columns to print: ";
    cin>>SIZE;
    cout<<endl;
    
    //Fill vectors with number of elements
    fillVec(even,odd,SIZE);
    
    //Print out vectors
    prntVec(even,odd,SIZE);
}

//Functions
void fillVec(vector<unsigned short> &a, vector<unsigned short> &b, 
        const int elmnts) {
    //Define local variables
    unsigned short rndNUM; //Round numbers
    
    //Input
    for (int i=0;i<elmnts;i++) {
        do {
            rndNUM=rand()%90+10;
        } 
        while (rndNUM%2);
        a.push_back(rndNUM);
    }
    //Fill odd number of vector
        for (int i=0;i<elmnts;i++) {
        do {
            rndNUM=rand()%90+10;
        } 
        while (!(rndNUM%2));
        b.push_back(rndNUM);
    } 
}


void prntVec(vector<unsigned short> &a, vector<unsigned short> &b, 
        const int cols) {
    //Even numbers
    cout<<"EVEN: ";
    for (int i=0;i<a.size();i++) {
        cout<<setw(3)<<a[i];
        if (!((i+1)%(cols)))
            cout<<endl;
    }
    cout << endl;
    //Odd numbers
    cout<<"ODD:  ";
    for (int i=0;i<b.size();i++) {
        cout<<setw(3)<<b[i];
            if(!((i+1)%(cols)))
                cout<<endl;
    }
}

/*
//345678901234567890123456789012345678901234567890123456780123456789012345678901
//**********************************PROBLEM#4***********************************
//DESCRIPTION: Create a function/method/procedure that returns a random number 
            from the following set, {9,52,78,101,119}.
//******************************************************************************
//Function PB#4
*/
void prob4F() {
    //Introduction
    cout<<endl;
    cout<<"Problem #4 - RANDOM SEQUENCE"<<endl;
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int n=5,          //Five numbers obtained
              nTimes=10000; //Looping 10000 times
    short int rndseq[]={9,52,78,101,119}; //Set of numbers
    int freq[n]={0};        //Frequency
    
    //Input values
    retrand(rndseq,freq,n,nTimes);
    
    //Output values
    for (int i=0;i<n;i++) {
        cout<<endl;
        cout<<"\t"<<rndseq[i]<<" occurred "<<freq[i]<<" times."<<endl;
    }
}

//Functions
short int fndRnd(short int rndseq[],const int n) {
    //Declare variables
    bool x=false;
    short int value,i;
    
    do {
        value=rand()%255;
        for (i=0;i<n;i++) {
            if (value==rndseq[i]) {
                x=true;
                break;
            }
        }
    }
    while (!x);
    return i;
}

void retrand(short int rndseq[],int freq[],const int n,const int nTimes) {
    for (int i=0;i<nTimes;i++) {
        freq[fndRnd(rndseq,n)]++;
    }
}

/*
//345678901234567890123456789012345678901234567890123456780123456789012345678901
//**********************************PROBLEM#5***********************************
//DESCRIPTION: Sort a 10x15 array of characters. Largest located at index [0][0-14]
            and smallest at index [9][0-14].
//******************************************************************************
//Function PB#5
*/
void prob5F() {
    //Introduction
    cout<<endl;
    cout<<"Problem #5 - ARRAY SORT"<<endl;
    //Declare Variables
    int SIZE=10;
    string   array[SIZE];
    ifstream infile;
    ofstream outfile;
    
    //Input values
    cout<<"OPENING FILE..."<<endl;
    infile.open("input.dat");
    outfile.open("output.dat");
    
    //Process by mapping inputs to outputs
    read(array,SIZE,infile);
    prntAry(array,SIZE,1);
    sort(array,SIZE);
    prntAry(array,SIZE,1);
    
    //Output values
    infile.close();
    outfile.close();
}

//Functions
void filAray(string a[],int n,int Pos) {//Filling the array
    for (int i=Pos+1;i<n;i++) {
        if (a[Pos]<a[i])swap(a[Pos],a[i]);
    }
}

void prntAry(string a[],int n,int perLine) {
    cout<<endl;
    for (int i=0;i<n;i++) {
        cout<<a[i]<<" ";
        if (i%perLine==(perLine-1))
            cout<<endl;
    }
    cout<<endl;
}

void read(string a[],int n,ifstream &infile) {
    for (int i=0;i<10;i++) {
        infile>>a[i];
    }
}

void sort(string a[],int n) {
    for (int i=0;i<n-1;i++) {
        filAray(a,n,i);
    }
}

void swap(string &a,string &b) {
    string 
    temp=a;
    a=b;
    b=temp;
}

/*
//345678901234567890123456789012345678901234567890123456780123456789012345678901
//**********************************PROBLEM#6***********************************
//DESCRIPTION: Create the following input tables. Output the sum of the rows, 
            columns and grand total. 
//******************************************************************************
//Function PB#6
*/
void prob6F() {
    //Introduction
    cout<<endl;
    cout<<"Problem #6 - SPREADSHEET STUFF."<<endl;
    //Declare Variables
    const int COLS=7, //Columns
              ROWS=6; //Rows
    int Table[ROWS][COLS]; //2D array for the table
    int temp=0; //Temp for values
    ifstream input; //For input file
    ofstream output; //For output file
    
    //Input values
    input.open("table.dat"); //Open tables
    for (int i=0;i<ROWS;i++) {
        for (int j=0;j<COLS;j++) {
            Table[i][j]=0;
        }
    }
    cout<<"Table: "<<endl;
    cout<<endl;
    
    //Process by mapping inputs to outputs
    for (int i=0;i<ROWS-1;i++) {
        for (int j=0;j<COLS-1;j++) {
            input>>Table[i][j];
            cout<<setw(6)<<Table[i][j]; //Displaying
        }
        cout<<endl;
    }
    
    input.close();
    //Horizontal row
    for (int i=0;i<ROWS-1;i++) { //Adding
        temp=0;
        for (int j=0;j<COLS-1;j++) {
            temp+=Table[i][j];
        }
        Table[i][6]=temp;
    }
    
    //Vertical row
    for (int i=0;i<COLS;i++) { //Adding
        temp=0;
        for (int j=0;j<ROWS-1;j++) {
            temp+=Table[j][i];
        }
        Table[5][i]=temp; //Placing from temp to table location
    }
    cout<<endl;
    
    //Output values
    cout<<"Augmented Table: "<<endl;
    for (int i=0;i<ROWS;i++) {
        for (int j=0;j<COLS;j++) {
            cout<<setw(6)<<Table[i][j];
        }
        cout<<endl;
    }
    
    //Output to augtable.dat
    output.open("augtable.dat");
    for (int i=0;i<ROWS;i++) {
        for (int j=0;j<COLS;j++) {
            output<<setw(6)<<Table[i][j];
        }
        output<<endl;
    }
    output.close();
}

//******************************************************************************