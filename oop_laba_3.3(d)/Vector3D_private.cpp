#include "Vector3D_private.h"

Vector3D_private::Vector3D_private(const Vector3D_private& v)
{
	int a = v.get_x();
	int b = v.get_y();
	int c = v.get_z();
	set_x(a);
	set_y(b);
	set_z(c);
}

ostream& operator << (ostream& out, const Vector3D_private& f)
{
	out << string(f);
	return out;
}

istream& operator >> (istream& in, Vector3D_private& f)
{
	int a, b, c;
	cout << endl;
	cout << "x = "; in >> a;
	cout << "y = "; in >> b;
	cout << "z = "; in >> c;
	f.set_x(a); f.set_y(b); f.set_z(c);
	return in;
}

Vector3D_private::operator string() const
{
	stringstream ss;

	ss << "(" << get_x() << ", " << get_y() << ", " << get_z() << ")" << endl;

	return ss.str();
}

Vector3D_private operator + (const Vector3D_private& o, const Vector3D_private& u)
{
	Vector3D_private s;
	int a = o.get_x() + u.get_x();
	int b = o.get_y() + u.get_y();
	int c = o.get_z() + u.get_z();

	s.set_x(a);
	s.set_y(b);
	s.set_z(c);

	return s;
}

int operator * (const Vector3D_private o, const Vector3D_private u)
{
	int a = o.get_x() * u.get_x();
	int b = o.get_y() * u.get_y();
	int c = o.get_z() * u.get_z();

	int s = a + b + c;

	return s;
}