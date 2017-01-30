#include "stdafx.h"
#include <iostream>
using namespace std;
using namespace System;


int Decider(char a, char b, char c, char d, char e, char f, char g, char h, char i, int p);
int Win(char a, char b, char c, char d, char e, char f, char g, char h, char i);
int Loop(char a, char b, char c, char d, char e, char f, char g, char h, char i, int p);
int WinCheck(char a, char b, char c, char d, char e, char f, char g, char h, char i, int p, char z);

void Board(char a, char b, char c, char d, char e, char f, char g, char h, char i)

{
system("cls");

cout << "\n\t    Tic-Tac-Toe\n\n\n";

cout <<
    "\t+-----+-----+-----+\n"
    "\t|     |     |     |\n"
    "\t|  " << a << "  |  " << b << "  |  " << c << "  |\n"
    "\t|     |     |     |\n"
    "\t+-----+-----+-----+\n"
    "\t|     |     |     |\n"
    "\t|  " << d << "  |  " << e << "  |  " << f << "  |\n"
    "\t|     |     |     |\n"
    "\t+-----+-----+-----+\n"
    "\t|     |     |     |\n"
    "\t|  " << g << "  |  " << h << "  |  " << i << "  |\n"
    "\t|     |     |     |\n"
    "\t+-----+-----+-----+\n\n\n";

}

void Layout()
{
Board('7', '8', '9', '4', '5', '6', '1', '2', '3');
cout << "\n\t This is the layout"
    "\n\n\n\tUse your number pad " 
    "\n\t       without"
    "\n      worrying about numbers!"
    "\n\n\n    Enter anything to start! : ";
int x;
cin >> x;
}


int Decider(char a, char b, char c, char d, char e, char f, char g, char h, char i, int p)
{
int P = p % 2;
char Z;
Z = (P == 1) ? 'X' : 'O';

cout << "Player "<<Z<<"'s Choice: ";
char q;
cin >> q;

if (q == '7' && a != 'X' && a != 'O')
    a = Z;

else if (q == '8' && b != 'X' && b != 'O')
    b = Z;

else if (q == '9' && c != 'X' && c != 'O')
    c = Z;

else if (q == '4' && d != 'X' && d != 'O')
    d = Z;

else if (q == '5' && e != 'X' && e != 'O')
    e = Z;

else if (q == '6' && f != 'X' && f != 'O')
    f = Z;

else if (q == '1' && g != 'X' && g != 'O')
    g = Z;

else if (q == '2' && h != 'X' && h != 'O')
    h = Z;

else if (q == '3' && i != 'X' && i != 'O')
    i = Z;


else
{
    cout << "\n\nInvalid Move!\n\n";
    Decider(a, b, c, d, e, f, g, h, i, p);
}

p = p + 1;

WinCheck(a, b, c, d, e, f, g, h, i, p, Z);

return 0;
}
int WinCheck(char a, char b, char c, char d, char e, char f, char g, char h, char i, int p, char z)
{
int X = Win(a, b, c, d, e, f, g, h, i); 
if (X == 0)
    Loop(a, b, c, d, e, f, g, h, i, p);
else if (X == 1)
{
    Board(a, b, c, d, e, f, g, h, i);
    cout << "\t  Player '" << z << "' wins!\n\n\n\n";
}
else
{
    Board(a, b, c, d, e, f, g, h, i);
    cout << "\t  Match is Draw!\n\n\n\n";
    return 0;

}
}

int Win(char a, char b, char c, char d, char e, char f, char g, char h, char i)
{
if (a == b && b == c && b != ' ')
    return 1;
else if (d == e && e == f && e != ' ')
    return 1;
else if (g == h && h == i && h != ' ')
    return 1;

else if (a == e && e == i && e != ' ')
    return 1;
else if (c == e && e == g && e != ' ')
    return 1;

else if (a == d && d == g && d != ' ')
    return 1;
else if (b == e && e == h && e != ' ')
    return 1;
else if (c == f && f == i && f != ' ')
    return 1;

else if (a != ' ' && b != ' ' && c != ' ' &&
    d != ' ' && e != ' ' && f != ' ' &&
    g != ' ' && h != ' ' && i != ' ')
    return 2;

else
    return 0;
}

int Loop(char a, char b, char c, char d, char e, char f, char g, char h, char i, int p)
{
Board(a, b, c, d, e, f, g, h, i);
Decider(a, b, c, d, e, f, g, h, i, p);

return 0;
}

int main()
{
Console::SetWindowSize(36, 40);

Layout();

char a = ' '; char b = ' '; char c = ' ';
char d = ' '; char e = ' '; char f = ' ';
char g = ' '; char h = ' '; char i = ' ';

int p = 1;

Loop(a, b, c, d, e, f, g, h, i, p);

return 0;
}