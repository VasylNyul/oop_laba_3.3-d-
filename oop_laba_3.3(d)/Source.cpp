#include "Triad.h"
#include <iostream>
#include "Vector3D_private.h"

int main()
{
	Vector3D_private a, b;
	cout << "First vector : "; cin >> a; cout << endl;
	cout << "Second vector : "; cin >> b; cout << endl;

	cout << a << endl;
	cout << b << endl;

	cout << "Add vectors :" << endl;
	cout << a + b;

	cout << "Scalar product of vectors:" << endl;
	cout << a * b << endl;

	Triad t, r, t1(10, 5, 4);
	cout << "t1 = " << t1 << endl;
	cout << " ++ of t1 = " << ++t1 << endl;
	cout << " -- of t1 = " << --t1 << endl;


	cout << "First vector : "; cin >> t; cout << endl;
	cout << "Second vector : "; cin >> r; cout << endl;
	int f;
	cout << "Rivnistb :" << endl;
	f = t == r;
	cout << "First vector == Second vector: " << f << endl;
	f = t != r;
	cout << "First vector != Second vector: " << f << endl;
	
	return 0;

}