//////////////
// TimeP.h
//////////////

#pragma once
#include<sstream>
#include<string> 
#include "Triad.h"

using namespace std;

class TimeP :private Triad
{
public:
	TimeP() {}
	TimeP(int first, int second, int third);
	TimeP(const TimeP& tri);
	TimeP& operator = (const TimeP& tri);

	operator string () const;

	friend ostream& operator << (ostream& out, const TimeP& m);
	friend istream& operator >> (istream& in, TimeP& m);

	void setF(int value);
	void setS(int value);
	void setT(int value);

	TimeP& operator ++ ();
	TimeP& operator -- ();
	TimeP operator ++ (int);
	TimeP operator -- (int);

	friend bool operator ==(const TimeP& t1, const TimeP& t2);
	friend bool operator >(const TimeP& t1, const TimeP& t2);
	friend bool operator <(const TimeP& t1, const TimeP& t2);
	friend bool operator >=(const TimeP& t1, const TimeP& t2);
	friend bool operator <=(const TimeP& t1, const TimeP& t2);
	friend bool operator !=(const TimeP& t1, const TimeP& t2);

};
