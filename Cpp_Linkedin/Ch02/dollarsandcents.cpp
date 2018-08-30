/*
 * dollarsandcents.cpp
 *
 * printing dollars and cents from entered float prices.
 */

#include <iostream>
using namespace std;
int main()
{
	int dollars,cents;
	double price;
	char dollarsign = 36; //implicit conversion
	cout << "enter price in dollars and cents "<< endl;
	cin >> price;
	dollars = price;
	cents = price * 100 - dollars * 100;
	cout  << "Total Dollars" << dollarsign << dollars << " Cents: " << cents << endl;
	return 0;
}
