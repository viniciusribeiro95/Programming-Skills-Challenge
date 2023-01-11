#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int stringCount( string calcString)
{
    string::iterator it;
    int count = 0;
    for (it = calcString.begin (); it != calcString.end (); it++) count++;
    return count;
    
}

string reversingString(string strInput, int start, int end)
{
    while (start < end)
    {
        // XOR for swapping the variable
        strInput[start] ^= strInput[end];
        strInput[end] ^= strInput[start];
        strInput[start] ^= strInput[end];
  
        start++;
        end--;
    }
    return strInput;
}
  

int main()
{
    string stringTest;
    cout << "Enter the string to reverse: " << endl;
    getline(cin, stringTest);
    
    int lenghtString = stringCount( stringTest );
    
    cout << reversingString(stringTest, -1, lenghtString);
    
    return 0;
}