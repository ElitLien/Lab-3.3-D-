//////////////
// Time.cpp
//////////////

#include<sstream>
#include<string>
#include "Time.h"
#include<iostream>	
#include "Triad.h"

using namespace std;

Time::Time(int f, int s, int t)
{
	setF(f);
	setS(s);
	setT(t);
}
Time::Time(const Time& a)
	:Triad(a) {}
Time& Time:: operator = (const Time& a)
{
	Triad::operator=(a);
	return *this;
}
ostream& operator << (ostream& out, const Time& m)
{
	out << string(m);
	return out;
}
istream& operator >> (istream& in, Time& m)
{
	int f, s, t;

	cout << "Hour: "; cin >> f;
	cout << "Minute: "; cin >> s;
	cout << "Seconds: "; cin >> t;
	cout << endl;

	m.setF(f), m.setS(s), m.setT(t);
	return in;
}
string Format(int k)
{
	stringstream sout;
	if (k < 10)
		sout << "0";
	sout << k;
	return sout.str();
}
Time :: operator string () const
{
	stringstream sout;
	sout << Format(getF()) << " : " << Format(getS()) << " : " << Format(getT()) << endl;
	return sout.str();

}
void Time::setF(int value)
{
	if (value > -1 && value < 24)
		Triad::setF(value);
	else
	{
		value = 0;
		Triad::setF(value);
	}
}

void Time::setS(int value)
{

	if (value > -1 && value < 60)
		Triad::setS(value);
	else
	{
		value = 0;
		Triad::setS(value);
	}
}

void Time::setT(int value)
{
	if (value > -1 && value < 60)
		Triad::setT(value);
	else
	{
		value = 0;
		Triad::setT(value);
	}
}

bool operator ==(const Time& t1, const Time& t2)
{
	return (t1.getF() == t2.getF() && t1.getS() == t2.getS() && t1.getT() == t2.getT());
}
bool operator >(const Time& t1, const Time& t2)
{
	return (t1.getF() > t2.getF() ||
		t1.getF() == t2.getF() && t1.getS() > t2.getS() ||
		t1.getF() == t2.getF() && t1.getS() == t2.getS() && t1.getT() > t2.getT());
}
bool operator <(const Time& t1, const Time& t2)
{
	return (t1.getF() < t2.getF() ||
		t1.getF() == t2.getF() && t1.getS() < t2.getS() ||
		t1.getF() == t2.getF() && t1.getS() == t2.getS() && t1.getT() < t2.getT());
}
bool operator >=(const Time& t1, const Time& t2)
{
	return !(t1 < t2);
}
bool operator <=(const Time& t1, const Time& t2)
{
	return !(t1 > t2);
}
bool operator !=(const Time& t1, const Time& t2)
{
	return !(t1 == t2);
}
Time& Time::operator ++ ()
{
	setF(getF() + 1);
	if (getF() == 24)
		setF(0);
	return *this;
}
Time& Time::operator -- ()
{
	setF(getF() - 1);
	if (getF() == -1)
		setF(23);
	return *this;
}
Time Time::operator ++ (int)
{
	Time a(*this);
	setF(getF() + 1);
	if (getF() == 24)
		setF(0);
	return a;
}
Time Time::operator -- (int)
{
	Time a(*this);
	setF(getF() - 1);
	if (getF() == -1)
		setF(23);
	return a;
}
