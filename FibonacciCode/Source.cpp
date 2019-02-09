/*
Program name : Source.cpp
Program date : 02/07/2019
Developer : Michael Yalda.
Description : Fibonacci Sequence.
*/


#include <iostream>
using namespace std;
void FibCode(int n);
int main()
{
	int result, nth;

	cout << "Enter a Nth number: ";
	cin >> nth;
	cout << "\n" << endl;
	FibCode(nth);

	system("pause");

	return 0;
}

void FibCode(int nth) {

	int F_No = 0;
	int S_No = 1;
	int nextNum = 0;
	nextNum = F_No + S_No;

	while (nextNum <= nth)
	{
		cout << "Fibonacci Series: " << F_No << " + " << S_No << " = " << nextNum << endl;
		F_No = S_No;
		S_No = nextNum;
		nextNum = F_No + S_No;
	}
	cout << "\n";
}