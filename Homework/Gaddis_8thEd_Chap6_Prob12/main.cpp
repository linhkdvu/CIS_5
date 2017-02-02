/* 
  File:   main.cpp
  Author: Linh Vu
  Created on February 1, 2017, 12:12 AM
  Purpose:  Star Search
            A particular talent competition has 5 judges, each of whom awards a 
            score between 0 and 10 to each performer. Fractional scores, such as
            8.3, are allowed. A performer’s final score is determined by 
            dropping the highest and lowest score received, then averaging the 3
            remaining scores. Write a program that uses these rules to calculate
            and display a contestant’s score. It should include the following 
            functions:
            • void getJudgeData() should ask the user for a judge’s score, store
            it in a reference parameter variable, and validate it. This function
            should be called by main once for each of the 5 judges.
            • double calcScore() should calculate and return the average of the 
            3 scores that remain after dropping the highest and lowest scores 
            the performer received. This function should be called just once by 
            main, and should be passed the 5 scores.
            The last two functions, described below, should be called by 
            calcScore, which uses the returned information to determine which of
            the scores to drop.
            • int findLowest() should find and return the lowest of the 5 scores
            passed to it.
            • int findHighest() should find and return the highest of the 5 
            scores passed to it.
            Input Validation: Do not accept judge scores lower than 0 or higher 
            than 10.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another

//Function Prototypes
void  jdgData(float);                         //Judge's score
float calS   (float,float,float,float,float); //Calculate the scores
int   fHigh  (float,float,float,float,float); //Find highest score
int   fLow   (float,float,float,float,float); //Find lowest score

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare variables
    float score1, //Judges' scores
          score2,
          score3,
          score4,
          score5;
    
    //Introduction
    cout<<"\nThis Program Calculates a Performer's Final Score."<<endl;
    cout<<"\n--------------------------------------------------\n"<<endl;
    
    //Function jdgData
    jdgData(score1);
    jdgData(score2);
    jdgData(score3);
    jdgData(score4);
    jdgData(score5);
    
    //Output values
    cout<<"\nThe contestant's score is ";
    
    //Function calS
    cout<<calS(score1,score2,score3,score4,score5);
    cout<<endl;

    //Exit stage right!
    return 0;
}

void jdgData(float score) {
    //Input value
    cout<<"Enter a Judge's Score: ";
    cin>>score;
    //Input validation
    if (score<0||score>10) {
        cout<<"\nInvalid Input! The score must be greater than 0 and less than 10.";
        cout<<endl;
        cout<<"Enter a Judge's Score: ";
        cin>>score;
    }
}

//******************************************************************************
//Calculate the Scores
//******************************************************************************
float calS(float score1,float score2,float score3,float score4,float score5) {
    //Declare variables
    int   high, //Highest score
          low;  //Lowest score
    float Avg;//The average
    
    //Call functions
    high=fHigh(score1,score2,score3,score4,score5);
    low=fLow(score1,score2,score3,score4,score5);
    
    //Find the highest score
    if (high==static_cast<int>(score1)) {
        if (low==static_cast<int>(score2))
            Avg=(score3+score4+score5)/3;
        else if (low==static_cast<int>(score3))
            Avg=(score2+score4+score5)/3;
        else if (low==static_cast<int>(score4))
            Avg=(score2+score3+score5)/3;
        else 
            Avg=(score2+score3+score4)/3;
    }
    else if (high==static_cast<int>(score2)) {
        if (low==static_cast<int>(score1))
            Avg=(score3+score4+score5)/3;
        else if (low==static_cast<int>(score3))
            Avg=(score1+score4+score5)/3;
        else if (low==static_cast<int>(score4))
            Avg=(score1+score3+score5)/3;
        else
            Avg=(score1+score3+score4)/3;
    }
    else if (high==static_cast<int>(score3)) {
        if (low==static_cast<int>(score2))
            Avg=(score1+score4+score5)/3;
        else if (low==static_cast<int>(score1))
            Avg=(score2+score4+score5)/3;
        else if (low==static_cast<int>(score4))
            Avg=(score1+score2+score5)/3;
        else
            Avg=(score2+score1+score4)/3;
    }
    else if (high==static_cast<int>(score4)) {
        if (low==static_cast<int>(score2))
            Avg=(score3+score1+score5)/3;
        else if (low==static_cast<int>(score3))
            Avg=(score1+score2+score5)/3;
        else if (low==static_cast<int>(score1))
            Avg=(score2+score3+score5)/3;
        else
            Avg=(score1+score2+score3)/3;
    }
    else {
        if (low==static_cast<int>(score2))
            Avg=(score1+score3+score4)/3;
        else if (low==static_cast<int>(score3))
            Avg=(score1+score2+score4)/3;
        else if (low==static_cast<int>(score4))
            Avg=(score1+score2+score3)/3;
        else 
            Avg=(score2+score3+score4)/3;
    }
    return Avg;
}

//fHigh
int fHigh(float score1,float score2,float score3,float score4,float score5) {
    if (score1>score2&&score1>score3&&score1>score4&&score1>score5)
        return score1;
    else if (score2>score1&&score2>score3&&score2>score4&&score2>score5)
        return score2;
    else if (score3>score1&&score3>score2&&score3>score4&&score3>score5)
        return score3;
    else if (score4>score1&&score4>score2&&score4>score3&&score4>score5)
        return score4;
    else
        return score5;
}
    //fLow
    int fLow (float score1,float score2,float score3,float score4,float score5) {
        if (score1<score2&&score1<score3&&score1<score4&&score1<score5)
            return score1;
        else if (score2<score1&&score2<score3&&score2<score4&&score2<score5)
            return score2;
        else if (score3<score1&&score3<score2&&score3<score4&&score3<score5)
            return score3;
        else if (score4<score1&&score4<score2&&score4<score3&&score4<score5)
            return score4;
        else
            return score5;
}