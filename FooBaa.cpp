/******************************************************************************

This C++ program prints each number from 1 to 100 on a new line.

For every multiple of 3, print "Foo" instead of the number.
For every multiple of 5, print "Baa" instead of the number.
For numbers that are both multiples of 3 and 5, print "FooBaa" instead of the number.

*******************************************************************************/
#include <stdio.h>
#include <iostream>


int main()
{
    for( int i = 1; i <= 100; i++ )
    {
        if( ( i%3 == 0 ) && ( i%5 == 0 ) ) std::cout << "FooBaa" << std::endl;
        else if( i%3 == 0 ) std::cout << "Foo" << std::endl;
        else if( i%5 == 0 ) std::cout << "Baa" << std::endl;
        else std::cout << i << std::endl;
    }
}
