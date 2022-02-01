#include<cstdio> //for using getline function to input string

using namespace std;

int main()

{   string s1,s2;

    cout<<"Enter First string\n"; //inputting string1

    getline(cin,s1);

    cout<<"Enter Second string\n"; //inputting string 2

    getline(cin,s2);

    if(s1.length()!=s2.length()) //comparing the string length

        cout<<"The given strings are unequal";

    else

    {   int ctr=0; //comparing each character of the two strings

        for(int i=0;i<s1.length();++i)

        {   if(s1[i]!=s2[i])

            {   ctr=1;

                break;

            }

        }

        if(ctr==0) //printing the result

            cout<<"The given Strings are equal\n";

        else

            cout<<"The given strings are unequal";

    }

    return 0;

}
