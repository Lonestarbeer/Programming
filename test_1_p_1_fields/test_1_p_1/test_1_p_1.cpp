// Test 1 Problem 1
//
#include <iostream>
#include "stdafx.h"
#include <iomanip>
using namespace std;


	int encryption(int e)
	{
		int first = e / 1000;
		int second = (e % 1000) / 100;
		int third = (e % 1000) / 10;
		int fourth = e % 10;

		first = (first + 7) % 10;
		second = (second + 7) % 10;
		third = (third + 7) % 10;
		fourth = (fourth + 7) % 10;
		return(third * 1000  + fourth * 100 + first * 10 + second);
	}

#include <iostream>
#include "stdafx.h"
	using namespace std;

	int main()
	{
		int e;
		cout << "Enter the four digit number you'd like to encrypt: ";
		cin >> e;
		cout << "Your secure number is: " << setfill('0') << setw(4) << encryption(e) << endl;
		system("PAUSE");
		return 0;
	}
	