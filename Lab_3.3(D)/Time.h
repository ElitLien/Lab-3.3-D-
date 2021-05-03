//////////////
// Time.h
//////////////

#pragma once
#include "Triad.h"
#include<sstream>
#include<string> 

using namespace std;

class Time :public Triad
{
public:
	Time() {}
	Time(int first, int second, int third);
	Time(const Time& tri);
	Time& operator = (const Time& tri);

	operator string () const;

	friend ostream& operator << (ostream& out, const Time& m);
	friend istream& operator >> (istream& in, Time& m);

	void setF(int value);
	void setS(int value);
	void setT(int value);

	Time& operator ++ ();
	Time& operator -- ();
	Time operator ++ (int);
	Time operator -- (int);

	friend bool operator ==(const Time& t1, const Time& t2);
	friend bool operator >(const Time& t1, const Time& t2);
	friend bool operator <(const Time& t1, const Time& t2);
	friend bool operator >=(const Time& t1, const Time& t2);
	friend bool operator <=(const Time& t1, const Time& t2);
	friend bool operator !=(const Time& t1, const Time& t2);

};

