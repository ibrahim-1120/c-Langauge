/* Write a C++ program that demonstrates the use of variables and constants. Create
variables of different data types and perform operations on them*/

#include<iostream>
using namespace std;

main()
{
	const float pi=3.14;
	int redius,r;
	cout << "\n enter your redius: ";
	cin >> r;
	
	redius=pi*r*r;
	
	cout << "Enter your redius " << r << " area of redius is  " << redius;
	
}
