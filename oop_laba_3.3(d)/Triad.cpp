#include "Triad.h"
#include <iostream>
#include <string> 
#include <sstream>

#pragma once

using namespace std;


Triad::Triad()
	: x(0), y(0), z(0)
{}

Triad::Triad(int a, int b, int c)
	: x(a), y(b), z(c)
{}

Triad::Triad(const Triad& f)
	: x(f.x), y(f.y), z(f.z)
{}

Triad& Triad::operator = (const Triad& f)
{
	this->x = f.x;
	this->y = f.y;
	this->z = f.z;

	return *this;
}

Triad::operator string() const
{
	stringstream ss;

	ss << "(" << x << ", " << y << ", " << z << ")" << endl;

	return ss.str();
}

Triad& Triad::operator ++()
{
	x++;
	return *this;
}

Triad& Triad::operator --()
{
	x--;
	return *this;
}

Triad Triad::operator ++(int)
{
	Triad t(*this);

	y++;

	return t;
}

Triad Triad::operator --(int)
{
	Triad t(*this);

	y--;

	return t;
}

ostream& operator <<(ostream& out, const Triad& f)
{
	out << string(f);
	return out;
}
istream& operator >>(istream& in, Triad& f)
{
	cout << endl;
	cout << "x = "; in >> f.x;
	cout << "y = "; in >> f.y;
	cout << "z = "; in >> f.z;

	return in;
}

Triad operator + (const Triad& a, const int h)
{
	Triad t;
	t.x = a.x + h;
	t.y = a.y + h;
	t.z = a.z + h;
	return t;
}


Triad operator * (const Triad& a, const int h)
{
	Triad t;
	t.x = a.x * h;
	t.y = a.y * h;
	t.z = a.z * h;
	return t;
}


bool operator == (Triad& f, Triad& s)
{
	return f.x == s.x && f.y == s.y && f.z == s.z;
}

bool operator != (Triad& f, Triad& s)
{
	return !(f.x == s.x && f.y == s.y && f.z == s.z);
}