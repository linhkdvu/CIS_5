/* 
  File:   main.cpp
  Author: Linh Vu
  Created on February 9, 2017, 7:54 PM
  Purpose:  Random Sequence
            Create a function/method/procedure that returns a random number 
            from the following set, {9,52,78,101,119}.  Loop 10000 times with 
            this procedure and print the frequency of each of the 5 numbers 
            obtained. Hint: Use an array for the sequence and frequency.  

            The following is a brief hint on items that might be helpful in 
            obtaining the results.  This is not direct code but more pseudo 
            code related. Don't try and run the following directly and more code 
            will be needed.

            Setup
                    const int n=5,ntimes=10000;
                    int freq[n]={0};
                    short int rndseq[]={9,52,78,101,119};


            Call to the routine to return a random sequence
                    retrand(rndseq,freq,n,ntimes);


            Results
                    cout<<rndseq[i]<<" occurred "<<
                            freq[i]<<" times"<<endl;


            Sample Output
                     9 occurred 2055 times
                    52 occurred 1986 times
                    78 occurred 1962 times
                    101 occurred 2079 times
                    119 occurred 1919 times
 
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another

//Function Prototypes
short int fndRnd(short int [],const int);
void retrand(short int [],int [],const int,const int);

//Executable code begins here!!!
int main(int argc, char** argv) {
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

    //Exit stage right!
    return 0;
}

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