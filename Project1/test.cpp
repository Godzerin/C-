#include <iostream>
using namespace std;


void var() {
	std::cout << "hello world\n";
	cout << "goodbye world\n";
	cout << 3 << '\n';
	cout << 3 + 6 << '\n';
	cout << 5 * 5 << endl;
	cout << 7 / 7 << endl;
	int Num = 12;
	cout << "the number is " << Num << endl;
	int x = 5;
	int y = 7;
	int Mult = x * y;
	cout << Mult << endl;
	const int SpeedLimit = 60; // this can't be changed
	
	cout << "input a number "; cin >> x; // takes in the number [input]
	cout << "The num is " << x << endl; //outputs the number [output]

	string Fname = "L";
	string Lname = "K";
	string Name = Fname.append(Lname);
	cout << Name << endl;

	cout << "Give a number "; int fnum; cin >> fnum;
	cout << "Give a second number "; int snum; cin >> snum;
	if (fnum > snum) {
		cout << fnum << " is greater than " << snum;
	}
	else {
		cout << snum << " is greater than " << fnum;
	}
	
}

int main() {
	var();
}
/*
C++ notes

cin = input
cout = ouput
value type before variable,
EX = int,bool,float,double,string,char = x

Same ops, +=, -=, ==, >, etc
&& = and
|| = or
! = not

*/