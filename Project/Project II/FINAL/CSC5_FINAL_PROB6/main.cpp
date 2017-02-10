/* 
  File:   main.cpp
  Author: Linh Vu
  Created on February 9, 2017, 10:50 PM
  Purpose:  (Spreadsheet Stuff)
            Create the following input tables. Output the sum of the rows, 
            columns and grand total. You will need to create procedures that 
            print the table, then sum rows, columns and grand total, then pass
            that information to the same print routine. Note: the 2 procedures 
            printTable,SumTable and finally a call to printTable again are all 
            invoked from subroutine main.  I want to see each number formatted 
            to 6 spaces.  
            Print the table out exactly as below.

            Example Input Table
               136   101   102   103   104   105
               106   107   108   109   110   111
               112   113   114   115   116   117
               118   119   120   121   122   123
               124   125   126   127   129   130
            Example Output Augmented Table with rows summed,
            columns summed and the grand total printed.
               136   101   102   103   104   105   651
               106   107   108   109   110   111   651
               112   113   114   115   116   117   687
               118   119   120   121   122   123   723
               124   125   126   127   129   130   761
               596   565   570   575   581   587  3474

            More credit will be given if you read the input and write 
            the results to a file.  However, if you can't do this in 
            a procedure then embed in the program.  But full credit 
            will not be given for the problem if files
            are not utilized. Name the files table.dat and augtable.dat

            Flowchart your code
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <fstream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {   
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

    //Exit stage right!
    return 0;
}