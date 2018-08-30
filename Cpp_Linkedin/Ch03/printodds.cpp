/*
 * printodds.cpp
 *
 *  For loop
 *	printing odd numbers till 100
 */

#include <iostream>
using namespace std;
int main()
{

	for(int num = 1; num <= 100; num++)
	{
		if(num %2 != 0)
			cout<<num<<endl;
	}
}
