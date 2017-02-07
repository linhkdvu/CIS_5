/* 
  File:   main.cpp
  Author: Linh Vu
  Created on February 6th, 2017, 4:43 PM
  Purpose:  Assignment 6 Menu
 */

//System Libraries
#include <iostream>//Input Output Library
#include <cstdlib> //Random number generator seed
#include <ctime>   //Time Library
#include <iomanip> //Format Library
#include <cmath>   //Math Library
#include <string> //String Library
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another

//Function Prototypes
void hProb1();
void hProb2();
void hProb3();
void display (int [],int,int); //Find the number that are greater than n
void hProb4();
void hProb5();
void hProb6();
void hProb7();
void hProb8();
void hProb9();

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
        cout<<"    ASSIGNMENT 5 MENU - Choose from the list."<<endl;
        cout<<"-------------------------------------------------"<<endl;
        
        //Input values
        cout<<"Type 1 : Homework #1  - LARGEST/SMALLEST ARRAY VALUES"<<endl;
        cout<<"Type 2 : Homework #2  - RAINFALL STATISTIC"<<endl;
        cout<<"Type 3 : Homework #3  - CHIPS AND SALSA"<<endl;
        cout<<"Type 4 : Homework #4  - LARGER THAN 'N'"<<endl;
        cout<<"Type 5 : Homework #5  - MONKEY BUSINESS"<<endl;
        cout<<"Type 6 : Homework #10 - DRIVER'S LICENSE EXAM"<<endl;
        cout<<"Type 7 : Homework #12 - GRADE BOOK"<<endl;
        cout<<"Type 8 : Homework #13 - GRADE BOOK MODIFICATION"<<endl;
        cout<<"Type 9 : Homework #14 - LOTTERY APPLICATION"<<endl;
        cout<<"P.S: Type 'x' to exist the program."<<endl;
        cout<<endl;
        cout<<"Number: ";
        cin>>choice;
        cout<<endl;

        //Switch to determine the Problem
        switch(choice){
            case '1':{hProb1();break;}
            case '2':{hProb2();break;}
            case '3':{hProb3();break;}
            case '4':{hProb4();break;}
            case '5':{hProb5();break;}
            case '6':{hProb6();break;}
            case '7':{hProb7();break;}
            case '8':{hProb8();break;}
            case '9':{hProb9();break;}
            default:
                cout<<"See You Again!"<<endl;
                x=false;
        }
    }while(x);
    
    //Exit stage right!
    return 0;
}

/*
//345678901234567890123456789012345678901234567890123456780123456789012345678901
//**********************************HOMEWORK#1**********************************
//DESCRIPTION: Write a program that lets the user enter 10 values into an array.
//INPUT VALIDATION: NONE
//******************************************************************************
//Function HW#1
*/
void hProb1() {
    //Introduction
    cout<<endl;
    cout<<"Homework #1 - LARGEST/SMALLEST ARRAY VALUES."<<endl;
    //Declare Variables
    const int Numb=10; //Number of values
    int array[Numb]={};//Array of 10 elements
    int min=array[1],
        max=array[0];  //Minimum and Maximum
    int input;         //Input numbers
    
    //Input values
    cout<<"\nEnter 10 values";
    for (int input=1;input<Numb;input++) {
        cout<<"\nEnter value "<<input<<": ";
        cin>>array[input]; //Puts values in array
    }
     
    //Process by mapping inputs to outputs
    for (int input=1;input<Numb;input++) {
        if (array[input]>max) {
            max=array[input];
        }
        else if (array[input]<min) {
            min=array[input];
        }
    }
    
    //Output values
    cout<<endl;
    cout<<"Minimum number is: "<<min<<endl;
    cout<<"Maximum number is: "<<max<<endl;
}

/*
//345678901234567890123456789012345678901234567890123456780123456789012345678901
//**********************************HOMEWORK#2**********************************
//DESCRIPTION: Write a program that lets the user enter the total rainfall for each
               of 12 months into an array of double s.
//INPUT VALIDATION: Do not accept negative numbers for monthly 
               rainfall figures.
//******************************************************************************
//Function HW#2
*/
void hProb2() {
    //Introduction
    cout<<endl;
    cout<<"Homework #2 - RAINFALL STATISTIC."<<endl;
    //Declare Variables
    const int SIZE=12; //12 months
    const int Numb=10; //Number of values
    int lowTie=1;
    int highTie=1;
    float lowest=0.000f,highest=0.000f,AvgR=0.0000f,totRain=0.0000f;
    float rFall[SIZE]={}; //The array for 12 months
    string lowMon;
    string highMon;
    string name[SIZE]={"January","February","March",
                        "April","May","June",
                        "July","August","September",
                        "October","November","December"};
    
    
    
    //Input values
    cout<<endl;
    cout<<"Input the monthly rainfall amounts in inches: "<<endl;
    for (int a=0;a<12;a++) {
        do {
            cout<<name[a]<<" rainfall was: ";
            cin>>rFall[a];
            if (rFall[a]<0) cout<<"Negative rainfall not possible! Re-enter month!"<<endl;
        }
        while (rFall[a]<0);
    }
    
    //Process by mapping inputs to output
    lowest=rFall[0];
    highest=rFall[0];
    lowMon=name[0];
    highMon=name[0];
    
    for (int a=0;a<12;a++) {
        if (rFall[a]<lowest) {
            lowest=rFall[a];
            lowMon=name[a];
            lowTie=1;
        }
        else if (rFall[a]==lowest) {
            lowTie++;
        }
        if (rFall[a]>highest) {
            highest=rFall[a];
            highMon=name[a];
            highTie=1;
        }
        else if (rFall[a]==highest) {
            highTie++;
        }
    }
    for (int a=0;a<12;a++) {
        totRain+=rFall[a];
    }
    AvgR=totRain/12;
    
    //Output values
    cout<<endl;
    cout<<fixed<<setprecision(2);
    cout<<"Total Rainfall throughout the year is "<<totRain<<" inches."<<endl;
    cout<<"The Average monthly rainfall is "<<AvgR<<" inches."<<endl;
    cout<<"The month with the lowest amount of rainfall is "<<lowMon<<" with "
            <<lowest<<" inches."<<endl;
    if (lowTie>1)
        cout<<"   There were "<<lowTie<<" months with this value."<<endl;
    cout<<"The month with the highest amount of rainfall is "<<highMon<<" with "
            <<highest<<" inches."<<endl;
    if (highTie>1) 
        cout<<"   There were "<<highTie<<" months with this value."<<endl;
}

/*
//345678901234567890123456789012345678901234567890123456780123456789012345678901
//**********************************HOMEWORK#3**********************************
//DESCRIPTION: Write a program that lets a maker of chips and salsa keep track of 
            sales for five different types of salsa: mild, medium, sweet, hot, 
            and zesty.
//INPUT VALIDATION: Do not accept negative values for number of jars 
            sold.
//******************************************************************************
//Function HW#3
*/
void hProb3() {
    //Introduction
    cout<<endl;
    cout<<"Homework #3 - CHIPS AND SALSA."<<endl;
    //Declare Variables
    const int SIZE=5; //Size of the array
    string arrayT[SIZE]={"Mild","Medium",
                         "Sweet","Hot",
                         "Zesty"};
    string low,high;
    int Sale[SIZE]={};
    int Total=0,lowest=0,highest=0;
    int lowSale=1;
    int higSale=1;
    
    //Input values
    cout<<"Input the sales for each type of salsa..."<<endl;
    cout<<endl;
    for (int p=0;p<SIZE;p++) {
        do {
            cout<<arrayT[p]<<" sales was: $";
            cin>>Sale[p];
            if (Sale[p]<0) cout<<"Invalid Input! Re-enter"<<endl;
        }
        while (Sale[p]<0);
    }
    
    //Process by mapping inputs to outputs
    lowest=Sale[0];
    highest=Sale[0];
    low=arrayT[0];
    high=arrayT[0];
    
    for (int p=1;p<SIZE;p++) {
        if (Sale[p]<lowest) {
            lowest=Sale[p];
            low=arrayT[p];
            lowSale=1;
        }
        else if (Sale[p]==lowest) {
            lowSale++;
        }
        if (Sale[p]>highest) {
            highest=Sale[p];
            high=Sale[p];
            higSale=1;
        }
        else if (Sale[p]==highest) {
            higSale++;
        }
    }
    for (int p=0;p<SIZE;p++) {
        Total+=Sale[p];
    }
    
    //Output values
    cout<<endl;
    cout<<fixed<<setprecision(2);
    cout<<"The lowest sales number was: "<<lowest<<" jars for "<<low<<"."<<endl;
    if (lowSale>1)
        cout<<"   There were "<<lowSale<<" types total with these sales."<<endl;
    cout<<"The highest sales number was: "<<highest<<" jars for "<<high<<"."<<endl;
    if (higSale>1)
        cout<<"   There were "<<higSale<<" types total with these sales."<<endl;
    cout<<"The total number of jars sold was: "<<Total<<endl;
}

/*
//345678901234567890123456789012345678901234567890123456780123456789012345678901
//**********************************HOMEWORK#4**********************************
//DESCRIPTION: In a program, write a function that accepts three arguments: an 
            array, the size of the array, and a number n . 
//INPUT VALIDATION: NONE
//******************************************************************************
//Function HW#4
*/
void hProb4() {
    //Introduction
    cout<<endl;
    cout<<"Homework #4 - LARGER THAN 'N'."<<endl;
    //Set random number seed
    srand (static_cast<int>(time(0)));
    
    //Declare Variables
    const int SIZE=1000;
    int arrayN[SIZE]={}; //Array of numbers
    int testN=0;         //Test number

    //Input values
    cout<<"Filling array with random numbers 0-99"<<endl;
    for (int num=1;num<SIZE;num++) {
        arrayN[num]=(rand()%SIZE); //Fill array with random numbers 0 to 1000
        cout<<".";
        if ((num%70)==0)cout<<endl;
    }
    cout<<endl;
    
    testN=rand()%SIZE; //Random number for the test value number
    cout<<"Random number for testing..."<<testN<<endl;
    
    //Output values
    display (arrayN,SIZE,testN);
}

//FUNCTION
void display (int array[],int SIZE,int nVal) {
    int sameAs=0;
    int valCntr=0;
    for (int a=0;a<SIZE;a++) {
        if (array[a]>nVal)  {
            cout<<"Spot "<<a<<" in array is value "<<array[a]
                    <<" and is larger than "<<nVal<<endl;
            valCntr++;
        }
        if (array[a]==nVal) sameAs++;
    }
    cout<<"The array has "<<nVal<<" occur "<<sameAs<<" times."<<endl;
    cout<<"The function output "<<valCntr<<" lines."<<endl;
}

/*
//345678901234567890123456789012345678901234567890123456780123456789012345678901
//**********************************HOMEWORK#5**********************************
//DESCRIPTION: Write a program that stores this information in a two-dimensional 
                3 × 5 array, where each row represents a different monkey and 
                each column represents a different day of the week.
//INPUT VALIDATION: Do not accept negative numbers for pounds of food 
            eaten.
//******************************************************************************
//Function HW#5
*/
void hProb5() {
    //Introduction
    cout<<endl;
    cout<<"Homework #5 - MONKEY BUSINESS."<<endl;
    //Declare Variables
    const int colDay=5; //Column for 5 days
    const int Monkey=3; //Monkey for each rows
    int foodAte[Monkey][colDay]={};
    float AvgF=0.0; //Food average
    int totEat=0, 
        mostAte=0, 
        mstEatR=0, 
        mstEatC=0,
        lestAte=0, 
        lstEatR=0, 
        lstEatC=0;
            
    //Input values
    cout<<"Please enter the amount eaten each day by each monkey (lbs): "<<endl;
    for (int i=0;i<Monkey;i++) {
        for (int j=0;j<colDay;j++) {
            do {
                cout<<"Please input the food eaten by Monkey "<<(i+1)<<" on day "<<(j+1)<<": ";
                cin>>foodAte[i][j];
                if (foodAte[i][j]<0) cout<<"Must be zero or more pounds!"<<endl;           
            }
            while (foodAte[i][j]<0);
        }
    }
    
    mostAte=foodAte[0][0];
    mstEatR=1;
    mstEatC=1;
    lestAte=foodAte[0][0];
    lstEatR=1;
    lstEatC=1;
    
    //Process by mapping inputs to outputs
    cout<<endl;
    cout<<"The average food eaten per day per monkey is: "<<endl;
    for (int i=0;i<colDay;i++) {
        totEat=0;
        for (int j=0;j<Monkey;j++) {
            totEat+=foodAte[j][i];
        }
        AvgF=totEat/3.00f;
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"The average food eaten on day "<<(i+1)<<" per monkey was "
                <<AvgF<<" lbs."<<endl;
        cout<<fixed<<setprecision(0);
    }
    for (int i=0;i<Monkey;i++) {
        for (int j=0;j<colDay;i++) {
            if (lestAte>foodAte[i][j]) {
                lestAte=foodAte[i][j];
                lstEatR=i+1;
                lstEatC=j+1;
            }
        }
    }
    cout<<"The least eaten was by monkey "<<lstEatR<<", who ate "<<lestAte<<
            " lbs on day "<<lstEatC<<"."<<endl;
}

/*
//345678901234567890123456789012345678901234567890123456780123456789012345678901
//**********************************HOMEWORK#6**********************************
//DESCRIPTION: Driver’s License Exam
//INPUT VALIDATION: Only accept the letters A, B, C, or D as answers.
//******************************************************************************
//Function HW#6
*/
void hProb6() {
    //Introduction
    cout<<endl;
    cout<<"Homework #10 - DRIVER'S LICENSE EXAM."<<endl;
    //Declare Variables
    const int SIZE=20; //Answers number
    char Answ[SIZE]={'A','D','B','B','C',
                     'B','A','B','C','D',
                     'A','C','D','B','D',
                     'C','C','A','D','B'}; //Correct answers
    char tAnsw[SIZE]={}; //Testing the answers
    int cAnsw=0; //Correct answers
    
    //Input values
    cout<<"Please input your answer for the questions. Only A, B, C, D are "
            "valid answers."<<endl;
    for (int i=0;i<SIZE;i++) {
        do {
            cout<<endl;
            cout<<"Question "<<i+1<<": ";
            cin>>tAnsw[i];
            if (!(tAnsw[i]=='A'||tAnsw[i]=='B'||tAnsw[i]=='C'||tAnsw[i]=='D')) {
                cout<<"Invalid Input. A, B, C, or D only!"<<endl;
            }
        }
        while (!(tAnsw[i]=='A'||tAnsw[i]=='B'||tAnsw[i]=='C'||tAnsw[i]=='D'));
    }
    
    //Finding the correct answers
    for (int i=0;i<SIZE;i++) {
        if (Answ[i]==tAnsw[i]) 
            cAnsw++;
    }
    
    //Output values
    cout<<endl;
    if (cAnsw>=15)
        cout<<"Congratulation! You have passed the test! You answered "<<cAnsw
                <<" questions right!"<<endl;
    else
        cout<<"Look like you have failed to pass the test...you only answered "
                <<cAnsw<<" questions right."<<endl;
}

/*
//345678901234567890123456789012345678901234567890123456780123456789012345678901
//**********************************HOMEWORK#7**********************************
//DESCRIPTION: Write a program that uses an array of string objects to hold the 
            five student names, an array of five characters to hold the five 
            students’ letter grades, and five arrays of four doubles to hold 
            each student’s set of test scores.
//INPUT VALIDATION: Do not accept test scores less than 0 or greater 
            than 100.
//******************************************************************************
//Function HW#7
*/
void hProb7() {
    //Introduction
    cout<<endl;
    cout<<"Homework #12 - GRADE BOOK."<<endl;
    //Declare Variables
    const int SIZE=5; //Number of students (5)
    const int GRADE=4;//Letter grades
    string names[SIZE]={}; //Student's names
    char letterG[SIZE]={}; //Letter grades
    float Score[SIZE][GRADE]={}, //The scores for each student and the letter grades
          AvgS[SIZE]={},         //The score average
          Avg=0.00, Total=0.00;
    
    //Input values
    for (int n=0;n<SIZE;n++) {
        cout<<"Please enter the name of Student #"<<(n+1)<<": ";
        cin>>names[n];
    }
    cout<<"Please input the student's grades."<<endl;
    for (int g=0;g<SIZE;g++) {
        for (int g2=0;g2<SIZE;g2++) {
            do {
                cout<<"Please enter test score "<<(g2+1)<<" for student "
                        <<(g+1)<<" as a score from 0 to 100."<<endl;
                cin>>Score[g][g2];
                if ((Score[g][g2]<0)&&(Score[g][g2]>0)) cout<<"Scores must be "
                        "between 0 and 100!"<<endl;
            }
            while ((Score[g][g2]<0)&&(Score[g][g2]>100));
        }
    }
    
    //Process by mapping inputs to outputs
    for (int g=0;g<SIZE;g++) {
        Avg=0.00;
        Total=0.00;
        for (int g2=0;g2<SIZE;g2++) {
            Total+=Score[g][g2];
        }
        Avg=Total/4.0f;
        AvgS[g]=Avg;
        if (Avg>90) letterG[g]='A';
        else if (Avg>80) letterG[g]='B';
        else if (Avg>70) letterG[g]='C';
        else if (Avg>60) letterG[g]='D';
        else letterG[g]='F';
    }
    
    //Output values
    cout<<setw(25)<<"NAME"<<setw(15)<<"AVERAGE"<<setw(10)<<"GRADE"<<endl;
    cout<<fixed<<setprecision(2);
    for (int g=0;g<SIZE;g++) {
        cout<<setw(25)<<names[g]<<setw(15)<<AvgS[g]<<setw(10)<<letterG[g]<<endl;
    }
}

/*
//345678901234567890123456789012345678901234567890123456780123456789012345678901
//**********************************HOMEWORK#8**********************************
//DESCRIPTION: Modify the grade book application in Programming Challenge 13 so it 
            drops each student’s lowest score when determining the test score 
            averages and letter grades.
//INPUT VALIDATION: NONE
//******************************************************************************
//Function HW#8
*/
void hProb8() {
    //Introduction
    cout<<endl;
    cout<<"Homework #13 - GRADE BOOK MODIFICATION."<<endl;
    //Declare Variables
    const int SIZE=5; //Number of students (5)
    const int GRADE=4;//Letter grades
    string names[SIZE]={}; //Student's names
    char letterG[SIZE]={}; //Letter grades
    float Score[SIZE][GRADE]={}, //The scores for each student and the letter grades
          AvgS[SIZE]={},         //The score average
          Avg=0.00, Total=0.00, lowS=0.00;

    //Input values
    for (int n=0;n<SIZE;n++) {
        cout<<"Please enter the name of Student #"<<(n+1)<<": ";
        cin>>names[n];
    }
    cout<<endl;
    cout<<"Please input the student's grades."<<endl;
    for (int g=0;g<SIZE;g++) {
        for (int g2=0;g2<SIZE;g2++) {
            do {
                cout<<"Please enter test score "<<(g2+1)<<" for student "
                        <<(g+1)<<" as a score from 0 to 100: ";
                cin>>Score[g][g2];
                if ((Score[g][g2]<0)&&(Score[g][g2]>0)) cout<<"Scores must be "
                        "between 0 and 100!"<<endl;
            }
            while ((Score[g][g2]<0)&&(Score[g][g2]>100));
        }
    }
 
    //Process by mapping inputs to outputs
    for (int g=0;g<SIZE;g++) {
        Avg=0.00;
        Total=0.00;
        lowS=Score[g][0];
        //Dropping the lowest score
        for (int num=0;num<GRADE;num++) {
            Total+=Score[g][num];
            if (lowS>Score[g][num]) {
                lowS=Score[g][num];
            }
        }
        cout<<"Dropping the lowest score of: "<<lowS<<endl;
        Total-=lowS;
        Avg=Total/3.0f;
        AvgS[g]=Avg;
        if (Avg>90) letterG[g]='A';
        else if (Avg>80) letterG[g]='B';
        else if (Avg>70) letterG[g]='C';
        else if (Avg>60) letterG[g]='D';
        else letterG[g]='F';
    }
    
    //Output values
    cout<<setw(25)<<"NAME"<<setw(15)<<"AVERAGE"<<setw(10)<<"GRADE"<<endl;
    cout<<fixed<<setprecision(2);
    for (int g=0;g<SIZE;g++) {
        cout<<setw(25)<<names[g]<<setw(15)<<AvgS[g]<<setw(10)<<letterG[g]<<endl;
    }
}

/*
//345678901234567890123456789012345678901234567890123456780123456789012345678901
//**********************************HOMEWORK#9**********************************
//DESCRIPTION:  Write a program that simulates a lottery.
//INPUT VALIDATION: NONE
//******************************************************************************
//Function HW#9
*/
void hProb9() {
    //Introduction
    cout<<endl;
    cout<<"Homework #14 - LOTTERY APPLICATION."<<endl;
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=5; //Size of lottery array
    int lotter[SIZE];   //Array to hold lottery numbers
    int User[SIZE];     //Array to hold user's lottery numbers
    int count;          //Loop counter
    int same=0, diff=0; //Increment counter for same and different values
    
    //Get random lottery number
    for (count=0;count<SIZE;count++) {
        lotter[count]=rand()%9; //Value from 0 to 9
    }
    
    //Input value
    cout<<"Please enter a five digit number for your lottery number. One digit at a time."<<endl;
    for (count=0;count<SIZE;count++) {
        cout<<endl;
        cout<<"Enter a value from 0 to 9."<<endl;
        cout<<"Digit #"<<count+1<<": ";
        cin>>User[count];
    }
    
    //Process by mapping inputs to outputs
    for (count=0;count<SIZE;count++) {
        if (lotter[count]==User[count]) {
            same++;
        }
        else {
            diff++;
        }
    }
    
    //Output values
    cout<<endl;
    cout<<"Lottery Numbers: "<<endl;
    for (count=0;count<SIZE;count++) {
        cout<<lotter[count]<<" "; //Output the lottery numbers
    }
    cout<<endl;
    cout<<"User Numbers: "<<endl;
    for (count=0;count<SIZE;count++) {
        cout<<User[count]<<" "; //Output the lottery numbers
    }
    
    cout<<endl;
    cout<<endl;
    cout<<"Of the 5 values, "<<same<<" of your values matched the lottery number."<<endl;
    if (same==5) {
        cout<<"Congratulation! You Are the Grand Prize Winner!"<<endl;
    }
    else {
        cout<<"Sorry! Today is not your lucky day. Try again..."<<endl;
    }
}
//***********************************THE END************************************