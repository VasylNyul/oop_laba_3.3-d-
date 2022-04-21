#include "Triad.h"
#pragma once
class Vector3D_private :
	private Triad
{
public:
	Vector3D_private() :Triad() {}
	Vector3D_private(const Triad t) : Triad(t) {}
	Vector3D_private(const Vector3D_private& t);

	operator string() const;

	friend ostream& operator <<(ostream&, const Vector3D_private&);
	friend istream& operator >>(istream&, Vector3D_private&);

	friend Vector3D_private operator + (const Vector3D_private&, const Vector3D_private&);
	friend int operator * (const Vector3D_private, const Vector3D_private);
};

