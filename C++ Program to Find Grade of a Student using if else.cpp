/*  C++ Program to Find Grade of a Student using if else  */

#include<iostream>
using namespace std;

int main()
{
        int mark[5], i;
        float sum=0,avg;

        cout<<"\nEnter Marks in 5 subjects :: \n";
        for(i=0; i<5; i++)
        {
            cout<<"\nEnter Marks[ "<<i+1<<" ] :: ";
                cin>>mark[i];
                sum=sum+mark[i];
        }

        avg=sum/5;

        cout<<"\nYour Grade is :: ";
        if(avg>80)
        {
                cout<<"[ A ]\n";
        }
        else if(avg>60 && avg<=80)
        {
                cout<<"[ B ]\n";
        }
        else if(avg>40 && avg<=60)
        {
                cout<<"[ C ]\n";
        }
        else
        {
                cout<<"[ D ]\n";
        }

        return 0;
}
