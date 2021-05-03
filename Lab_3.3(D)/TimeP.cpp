//////////////
// TimeP.cpp
//////////////

#include<sstream>
#include<string>
#include "TimeP.h"
#include<iostream>	
#include "Triad.h"

using namespace std;

TimeP::TimeP(int f, int s, int t)
{
	setF(f);
	setS(s);
	setT(t);
}
TimeP::TimeP(const TimeP& a)
	:Triad(a) {}
TimeP& TimeP:: operator = (const TimeP& a)
{
	Triad::operator=(a);
	return *this;
}
ostream& operator << (ostream& out, const TimeP& m)
{
	out << string(m);
	return out;
}
istream& operator >> (istream& in, TimeP& m)
{
	int f, s, t;

	cout << "Hour: "; cin >> f;
	cout << "Minute: "; cin >> s;
	cout << "Seconds: "; cin >> t;
	cout << endl;

	m.setF(f), m.setS(s), m.setT(t);
	return in;
}
string Format1(int k)
{
	stringstream sout;
	if (k < 10)
		sout << "0";
	sout << k;
	return sout.str();
}
TimeP :: operator string () const
{
	stringstream sout;
	sout << Format1(getF()) << " : " << Format1(getS()) << " : " << Format1(getT()) << endl;
	return sout.str();

}
void TimeP::setF(int value)
{
	if (value > -1 && value < 24)
		Triad::setF(value);
	else
	{
		value = 0;
		Triad::setF(value);
	}
}

void TimeP::setS(int value)
{

	if (value > -1 && value < 60)
		Triad::setS(value);
	else
	{
		value = 0;
		Triad::setS(value);
	}
}

void TimeP::setT(int value)
{
	if (value > -1 && value < 60)
		Triad::setT(value);
	else
	{
		value = 0;
		Triad::setT(value);
	}
}

bool operator ==(const TimeP& t1, const TimeP& t2)
{
	return (t1.getF() == t2.getF() && t1.getS() == t2.getS() && t1.getT() == t2.getT());
}
bool operator >(const TimeP& t1, const TimeP& t2)
{
	return (t1.getF() > t2.getF() ||
		t1.getF() == t2.getF() && t1.getS() > t2.getS() ||
		t1.getF() == t2.getF() && t1.getS() == t2.getS() && t1.getT() > t2.getT());
}
bool operator <(const TimeP& t1, const TimeP& t2)
{
	return (t1.getF() < t2.getF() ||
		t1.getF() == t2.getF() && t1.getS() < t2.getS() ||
		t1.getF() == t2.getF() && t1.getS() == t2.getS() && t1.getT() < t2.getT());
}
bool operator >=(const TimeP& t1, const TimeP& t2)
{
	return !(t1 < t2);
}
bool operator <=(const TimeP& t1, const TimeP& t2)
{
	return !(t1 > t2);
}
bool operator !=(const TimeP& t1, const TimeP& t2)
{
	return !(t1 == t2);
}
TimeP& TimeP::operator ++ ()
{
	setF(getF() + 1);
	if (getF() == 24)
		setF(0);
	return *this;
}
TimeP& TimeP::operator -- ()
{
	setF(getF() - 1);
	if (getF() == -1)
		setF(23);
	return *this;
}
TimeP TimeP::operator ++ (int)
{
	TimeP a(*this);
	setF(getF() + 1);
	if (getF() == 24)
		setF(0);
	return a;
}
TimeP TimeP::operator -- (int)
{
	TimeP a(*this);
	setF(getF() - 1);
	if (getF() == -1)
		setF(23);
	return a;
}
