/* 
  File:   main.cpp
  Author: Linh Vu
  Created on February 1, 2017, 12:23 PM
  Purpose:  Grade Book
            A teacher has five students who have taken four tests. The teacher 
            uses the following grading scale to assign a letter grade to a 
            student, based on the average of his or her four test scores.
            Test Score     Letter Grade
            90–100           A
            80–89            B
            70–79            C
            60–69            D
             0–59            F
            Write a program that uses an array of string objects to hold the 
            five student names, an array of five characters to hold the five 
            students’ letter grades, and five arrays of four doubles to hold 
            each student’s set of test scores. The program should allow the user
            to enter each student’s name and his or her four test scores. It 
            should then calculate and display each student’s average test score 
            and a letter grade based on the average.
            Input Validation: Do not accept test scores less than 0 or greater 
            than 100.
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another
const int SIZE=5; //Number of students (5)
const int GRADE=4;//Letter grades

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    string names[SIZE]={}; //Student's names
    char letterG[SIZE]={}; //Letter grades
    float Score[SIZE][GRADE]={}, //The scores for each student and the letter grades
          AvgS[SIZE]={},         //The score average
          Avg=0.00, Total=0.00;
    
    //Input values
    for (int n=0;n<SIZE;n++) {
        cout<<"Please enter the name of Student "<<(n+1)<<": ";
        getline(cin,names[n]);
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

    //Exit stage right!
    return 0;
}