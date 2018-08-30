/*
datatypes.cpp
All basic data type examples.
*/
#include <iostream>
using namespace std;
int main()
{
	char letter = 'a';
	short age = 10;
	int count = 575;
	long numStars = 985467528;
	float pi = 3.14;
	double price = 89.65;
	string season = "summer";
	bool dead = true;

	cout<<"Letter: "<<letter<<endl;
	cout<<"Age: "<<age<<endl;
	cout<<"Count: "<<count<<endl;
	cout<<"Number of stars in the sky: "<<numStars<<endl;
	cout<<"Pi: "<<pi<<endl;
	cout<<"Price: "<<price<<endl;
	cout<<season<<endl;
	cout<<"Dead?: "<<!(dead)<<endl;

	return 0;
}
