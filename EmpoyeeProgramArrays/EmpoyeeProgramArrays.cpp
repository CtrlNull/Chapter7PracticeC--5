/*
	This program asls for the number of hours worked by
	six employees. It stores the values in an array
*/
#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	const int NUM_Employees = 6;		// Number of employee
	int hours[NUM_Employees];			// each employee's hours
	int count;							// Loop counter


	// Input the hours worked[
	for (count = 0; count < NUM_Employees; count++)
	{
		cout << "Enter the hours worked by emplyee "
			<< (count + 1) << ": ";
		cin >> hours[count];
	}

	// Display the contents of the array
	cout << "The hours you entered are: ";
	for (count = 0; count < NUM_Employees; count++)
		cout << " " << hours[count];
	cout << endl;
    return 0;
}

