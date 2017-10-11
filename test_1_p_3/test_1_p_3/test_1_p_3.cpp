// test_1_p_3
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;


int main()
{
	int Me = 0; //Mcov(erage)
	int Ms = 50;		
	int Mc = 100;
	int Mf = 200;

	int De = 50; //Dcov
	int Ds = 125;
	int Dc = 225;
	int Df = 325;

	int Ve = 25; //Vcov
	int Vs = 60;
	int Vc = 110;
	int Vf = 185;

	double Fp = .10; //Prem
	double Hp = .20;

	int e1 = Me; //User input-> e -> Me
	int s1 = Ms; //User input-> s -> Ms
	int c1 = Mc; //User input-> c -> Mc
	int f1 = Mf; //User input-> f -> Mf

	int e2 = De; //Same as above		
	int s2 = Ds;
	int c2 = Dc;
	int f2 = Df;

	int e3 = Ve; //Same as above
	int s3 = Vs;
	int c3 = Vc;
	int f3 = Vf;
																
	int Mcov[4] = { Me, Ms, Mc, Mf };
	int Dcov[4] = { De, Ds, Dc, Df };
	int Vcov[4] = { Ve, Vs, Vc, Vf };

	double Prem[3] = { Fp, Hp, 0 };
	
		cout << "Employee Benefit Calculator\n\n";

		cout << "\tMedical\n" // int Mcov
		 "\tSelf: $0\n" // Me
		 "\tAdd Spouse: $50\n" // Ms 
		"\tAdd Child(ren): $100\n" // Mc
		 "\tAdd Family: $200\n\n"; // Mf

		cout << "Dental\n" // int Dcov
		 "\tSelf: $50\n" // De
		 "\tAdd Spouse: $125\n" // Ds
		 "\tAdd Child(ren): $225\n" // Dc
		 "\tAdd Family: $325\n\n"; // Df

		cout << "Vision\n" // int Vcov
		 "\tSelf: $25\n" // Ve
		 "\tAdd Spouse: $60\n" // Vs
		 "\tAdd Child(ren): $110\n" // Vc
		 "\tAdd Family: $185\n\n\n"; // Vf

		cout << "Premium Discount\n" //int Prem
			"Over 20 Years of Service (-20%)\n" // Fp
			"10-20 Years of Service (-10%)\n"; // Hp

		cout << "Benefits Options\n\n"
			"Self Coverage - enter: 'e'\n"
			"Add Spouse - enter: 's'\n"
			"Add Child(ren) - enter: 'c'\n"
			"Family Coverage - enter: 'f'\n"
			"Years of service - Enter Numerical Value: \n\n\n";

		//User Input
		cout << "Select Your Coverage:\n\n";

		cout << "Medical:";
		cin >> e1, s1, c1, f1;
		cout << "Dental";
		cin >> e2, s2, c2, f2;
		cout << "Vision";
		cin >> e3, s3, c3, f3;
		cout << "Years of Service";
		cin >> Fp, Hp;

return 0;
}

//e = Me = 100 >>>> (100 + Dcov + Vcov)
//s = Ms = 100 >>>> (100 + Dcov + Vcov)
//c = Mc = 100 >>>> (100 + Dcov + Vcov)
//f = Mf = 100 >>>> (100 + Dcov + Vcov)


//int Me = 0; //Mcov
//int Ms = 50;
//int Mc = 100;
//int Mf = 200;
//
//int De = 50; //Dcov
//int Ds = 125;
//int Dc = 225;
//int Df = 325;
//
//int Ve = 25; //Vcov
//int Vs = 60;
//int Vc = 110;
//int Vf = 185;
//
//int Fp = .10; //Prem
//int Hp = .20;
//
//
//int Mcov[4] = { Me, Ms, Mc, Mf };
//int Dcov[4] = { De, Ds, Dc, Df };
//int Vcov[4] = { Ve, Vs, Vc, Vf };
//
//int Prem[3] = { Fp, Hp, 0};

//calc((Mcov + Dcov + Vcov) - (Prem * (Mcov + Dcov + Vcov)))

