#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <limits>

using namespace std;

std::string ConcatRemove( string s, string t, int k)
{
    int counter=0;
    while( counter<s.size() && counter < t.size() ){
           if( s[ counter ] != t[ counter ]) break;
               counter++;
    }

    if( s.size() - counter + t.size() - counter <= k && ( s.size() - counter + t.size() - counter )%2 == k%2 ) return "Yes";
    else if( s.size() + t.size() <= k ) return "Yes";
    else return "No";
}

int main()
{
    string s, t;
    int k;
    do
    {
        cin.clear();
        cout << "Write the initial string: ";
        cin >> s;
    }while( s.size() < 1 || s.size() > 100 );
    
    do
    {
        cin.clear();
        cout << "Write target string: ";
        cin >> t;
    }while( t.size() < 1 || t.size() > 100 );
    
    do
    {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "Write the number of operations: ";
        cin >> k;
    }while( ( int(k) <= 0 || int(k) > 100 ) || !cin.good() );
    
    std::cout << ConcatRemove( s, t, k) << std::endl;
}
