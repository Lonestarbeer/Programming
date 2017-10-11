// test_1_p_2.cpp

#include "stdafx.h" //***MUST be at the top of the #includes***
#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;

void calc(double r);
void calc(double w, double h);
void calc(double w, double h, bool isCircle);
void calc(double s1, double s2, double s3);

int main()
{
	int ch = NULL;
	
	do
	{
		cout << "Which would you like to calculate the area of?\n\n";
		cout << "1. Rectangle\n";
		cout << "2. Square\n";					
		cout << "3. Circle\n";
		cout << "4. Triangle\n";

			while ((ch < 1) || (ch > 4))  
		{
			cout << "Make your selection 1, 2, 3, or 4: ";	
			cin >> ch;										 
															
		}																		
		if (ch == 1 || ch == 2)
		{
			double height, width;
			cout << "Enter the width: ";
			cin >> width;
			cout << "Enter the height: ";
			cin >> height;
			calc(width, height);
			cout << endl;
		}
		if (ch == 3)
		{
			cout << "Enter the circle's radius: ";
			double radius;
			cin >> radius;
			calc(radius);
		}

		if (ch == 4)
		{
			double s1, s2, s3;

			cout << "Enter the length of triangle side 1: ";
			cin >> s1;
			cout << "Enter the length of triangle side 2: ";
			cin >> s2;
			cout << "Enter the length of triangle side 3: ";
			cin >> s3;
			calc(s1, s2, s3);
		}
		ch = NULL;
	} while (true);
}

void calc(double r)
{
	calc(3.14159, r, true);
}
void calc(double w, double h)
{
	calc(w, h, false);
}

void calc(double w, double h, bool isCircle)
{
	double answer;
	if (isCircle)
	{
		answer = (w * h * h);

	}
	else answer = (w * h);
	cout << "The area is " << (answer);
}

void calc(double s1, double s2, double s3)
{
	double sum = (s1 + s2 + s3) / 2;
	cout << "The area is: " << sqrt(sum*(sum - s1)*(sum - s2)*(sum - s3));

}
