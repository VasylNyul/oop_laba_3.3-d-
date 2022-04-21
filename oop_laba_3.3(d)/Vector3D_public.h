#include "Triad.h"

#pragma once
class Vector3D_public: public Triad
{
public:
	Vector3D_public() :Triad() {}
	Vector3D_public(const Triad t) : Triad(t) {}
	Vector3D_public(const Vector3D_public&);
	
	operator string() const;

	friend ostream& operator <<(ostream&, const Vector3D_public&);
	friend istream& operator >>(istream&, Vector3D_public&);

	friend Vector3D_public operator + (const Vector3D_public&, const Vector3D_public&);
	friend int operator * (const Vector3D_public, const Vector3D_public);

};

