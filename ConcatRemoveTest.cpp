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

#include <bits/stdc++.h>
#include <gtest/gtest.h>

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

TEST(ConcatRemoveTest, ViniciusTests) {
  EXPECT_EQ("Yes", ConcatRemove("vinicius", "mariana", 15));
  EXPECT_EQ("Yes", ConcatRemove("teste123", "teste", 3));
  EXPECT_EQ("Yes", ConcatRemove("testesegundo", "testesegundonovo", 4));
  EXPECT_EQ("No", ConcatRemove("teste", "testetal", 2));
  EXPECT_EQ("No", ConcatRemove("vinicius", "mariana", 10));

  EXPECT_NE("Yes", ConcatRemove("novoaqui", "novo", 2));
  EXPECT_NE("Yes", ConcatRemove("vinicius", "viniciusferreiraribeiro", 10));
  EXPECT_NE("No", ConcatRemove("temnovo", "tem", 4));
  EXPECT_NE("No", ConcatRemove("maisumteste", "maisum", 5));
}

TEST(ConcatRemoveTest, Examples) {
  EXPECT_EQ("Yes", ConcatRemove("blablablabla", "blablabcde", 8));
  EXPECT_EQ("Yes", ConcatRemove("tab", "tab", 7));
}

int main( int argc, char** argv ) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
