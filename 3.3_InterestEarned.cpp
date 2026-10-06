// This program calculates balance in an account after compounding interest for a year.

#include <iostream>
using namespace std;

int main()
{
	double principal;
	double rateP;
	int compoundInput;
	
	cout << "How much is in your savings account?" << endl;
	cin >> principal;

	cout << endl << "What is your interest rate?" << endl;
	cin >> rateP;
	double rateD = rateP / 100;

	cout << endl << "How many times is the interest compounded per year?" << endl;
	cin >> compoundInput;

	double finalAmount = principal * pow(1 + (rateD / compoundInput), compoundInput);
	double interest = finalAmount - principal;

	cout << endl << "Final Amount: $" << finalAmount << endl;
	cout << "Interest Earned: $" << interest << endl;

	return 0;
}
