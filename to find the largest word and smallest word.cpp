/* Program to Find Smallest and Largest Word in String */
#include<bits/stdc++.h>  
using namespace std;  
int main()  
{  
    string str;  
    /* Scan the String */  
    cout<<"Enter a string:\n";  
    getline(cin,str);  
      
    /* Word Variable to store word */  
    string word;  
      
    /* Making Stirng stream */  
    stringstream iss(str);   
      
    string smallest;  
    string largest;  
    int flag = 0;  
      
    /* Scanning each word of the string and 
       storing the result in temporary variables */  
    while (iss >> word)   
    {  
        if(flag == 0)  
        {  
            smallest = word;  
            largest = word;  
            flag = 1;  
        }  
        else  
        {  
            if(smallest.length() > word.length())  
            smallest = word;  
            else if(word.length() > largest.length())  
            largest = word;  
        }  
    }  
    /* Printing the Result */  
    cout<<"Smallest Word: "<<smallest;  
    cout<<"\nLargest Word: "<<largest;  
}  
