#include<iostream.h>
#include<conio.h>
void main()
{
//clear the screen.
clrscr();
//declare variable type float and char
float a,b,peri;
char ch;
//Input the choice.
cout<<"Enter c for circle"<<endl;
cout<<"Enter s for square"<<endl;
cout<<"Enter r for rectangle"<<endl;
cin>>ch;
//conditional switch statement.
switch (ch)
{
case 'c':
cout<<"Enter radius"<<endl;
cin>>a;
peri=2*3.14*a;
break;
case 's':
cout<<"Enter the side"<<endl;
cin>>a;
peri=4*a;
break;
case 'r':
cout<<"Enter the length"<<endl;
cin>>a;
cout<<"Enter the breadth"<<endl;
cin>>b;
peri=2*(l+b);
break;
default:
cout<<"Syntax Error";
}
//print the area.
cout<<"Perimeter is "<<peri;
//get character
getch();
}
