/*
asciitable.cpp
This program prints ascii chars and their values.
*/
#include <iostream>
using namespace std;
int main()
{
	char temp;
	for(int num = 0; num < 128; num++)
	{
		temp = num;
		cout<<num<<" : "<<temp<<endl;
	}
return 0;
}
