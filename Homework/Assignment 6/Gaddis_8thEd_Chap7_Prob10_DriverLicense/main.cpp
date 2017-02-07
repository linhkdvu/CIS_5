/* 
  File:   main.cpp
  Author: Linh Vu
  Created on February 5, 2017, 10:23 PM
  Purpose:  Driver’s License Exam
The local Driver’s License Office has asked you to write a program that grades 
the writ- ten portion of the driver’s license exam. The exam has 20 multiple 
choice questions. Here are the correct answers:
     1. A    6. B   11. A   16. C
     2. D    7. A   12. C   17. C
     3. B    8. B   13. D   18. A
     4. B    9. C   14. B   19. D
     5. C   10. D   15. D   20. B
Your program should store the correct answers shown above in an array. It 
should ask the user to enter the student’s answers for each of the 20 
questions, and the answers should be stored in another array. After the 
student’s answers have been entered, the program should display a message 
indicating whether the student passed or failed the exam. (A student must 
correctly answer 15 of the 20 questions to pass the exam.) It should then 
display the total number of correctly answered questions, the total number of 
incorrectly answered questions, and a list showing the question numbers of the
incorrectly answered questions.
Input Validation: Only accept the letters A, B, C, or D as answers.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another
const int SIZE=20;

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
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

    //Exit stage right!
    return 0;
}