#include <iostream>
#include <string.h>

using namespace std;

int stringCount( string calcString)
{
    string::iterator it;
    int count = 0;
    for (it = calcString.begin (); it != calcString.end (); it++) count++;
    return count;
    
}

int main()
{
    string strLenght;
    cout << "Enter the string: " << endl;
    getline(cin, strLenght);
    
    int lenghtString = stringCount( strLenght );
    
    cout << "Length the string is " << lenghtString << endl;
    return 0;
}