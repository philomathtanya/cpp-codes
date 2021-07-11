#include <iostream>

using namespace std;
 
// Function to check for consonant

bool isConsonant(char ch)
{

    // To handle lower case

    ch = toupper(ch);
 

    return !(ch == 'A' || ch == 'E' || 

            ch == 'I' || ch == 'O' || 

            ch == 'U') && ch >= 65 && ch <= 90;
}
 

int totalConsonants(string str)
{

    int count = 0;

    for (int i = 0; i < str.length(); i++) 
 

        // To check is character is Consonant

        if (isConsonant(str[i]))

            ++count;

    return count;
}
 
// Driver code

int main()
{

    string str = "abc de";

    cout << totalConsonants(str);

    return 0;
}
