//////////////
// Source.cpp
//////////////

#include <iostream>	
#include "Time.h"
#include "Triad.h"
#include "TimeP.h"

using namespace std;

int main()
{
	Triad t1(44, 66, 99), t2(55, 99, 100);
	cout << t1 << t2;
	bool t = t1 > t2;
	cout << "t1 > t2 = " << t << endl << endl;

	Time a(1, 2, 3), b(4, 6, 2);
	cin >> a;
	cout << "a    " << a;
	cout << "++a  " << ++a;
	cout << "--a  " << --a;
	cout << "a--  " << a--;
	cout << "a    " << a;
	cout << "a++  " << a++;
	cout << "a    " << a << endl;

	t = a == b;
	cout << "a == b    " << t << endl;
	t = a > b;
	cout << "a > b     " << t << endl;
	t = a < b;
	cout << "a < b     " << t << endl;

	////////////////////////////////////////
	//////////////////////////////////
	TimeP a1(1, 2, 3), b1(4, 6, 2);
	cin >> a1;
	cout << "a1    " << a1;
	cout << "++a1  " << ++a1;
	cout << "--a1  " << --a1;
	cout << "a1--  " << a1--;
	cout << "a1    " << a1;
	cout << "a1++  " << a1++;
	cout << "a1    " << a1 << endl;

	t = a1 == b1;
	cout << "a1 == b1    " << t << endl;
	t = a1 > b1;
	cout << "a1 > b1     " << t << endl;
	t = a1 < b1;
	cout << "a1 < b1     " << t << endl;

	return 0;
}