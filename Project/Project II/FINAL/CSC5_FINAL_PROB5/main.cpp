/* 
  File:   main.cpp
  Author: Linh Vu
  Created on February 9, 2017, 8:23 PM
  Purpose:  Sort a 10x15 array of characters. Largest located at index [0][0-14]
            and smallest at index [9][0-14]. Create a procedure that passes the 
            array to a print routine, then a procedure that sorts the array and 
            returns the sorted array to the original procedure, and finish by 
            using the same print routine.  
            Fill the array with

            Lcekoeddhoffbme
            Lkcmggjcdhhglif
            Cgldjhcekjigcde
            Cgldjhcekjigcdz
            Bfgmdbkcenlafjk
            Fggdijijegfblln
            Jjlncnimjldfedj
            Amliglfohajcdmm
            Balgfcaelhfkgeb
            Kmlhmhcddfoeild

            Note:  This is a character array
            The output would be

            Lkcmggjcdhhglif
            Lcekoeddhoffbme
            Kmlhmhcddfoeild
            Jjlncnimjldfedj
            Fggdijijegfblln
            Cgldjhcekjigcdz
            Cgldjhcekjigcde
            Bfgmdbkcenlafjk
            Balgfcaelhfkgeb
            Amliglfohajcdmm

            Full credit will be given if a file is used to read in the array.
            Name the file input.dat
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another

//Function Prototypes
void filAray(string [],int,int); //Filling the array
void prntAry(string [],int,int); //Print out the array
void read(string [],int,ifstream &);
void sort(string [],int);
void swap(string &,string &);

//Executable code begins here!!!
int main(int argc, char** argv) {
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

    //Exit stage right!
    return 0;
}

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