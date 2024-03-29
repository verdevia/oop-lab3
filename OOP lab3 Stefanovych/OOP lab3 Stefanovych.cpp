#include <iostream>
#include "complex.h"
using namespace std;

int main()
{
	complex comp1, comp2, res;
	cout << "Enter first complex number" << endl;
	comp1.read();
	comp1.display();
	cout << endl << "Enter second complex number" << endl;
	comp2.read();
	comp2.display();
	cout << endl;

	complex comp3(2.0);
	cout << "Set complex number n3: ";
	comp3.display();
	cout << endl;
	// set complex number with constant imaginary value
	complex comp4 = comp2;

	res = comp1.add(comp2);
	cout << "Sum:";
	res.display();
	cout << endl;

	res = comp1.sub(comp2);
	cout << "Dif:";
	res.display();
	cout << endl;

	res = comp1.mul(comp3);
	cout << "Prod1:";
	res.display();
	cout << endl;

	res = comp2.mul(comp3);
	cout << "Prod2:";
	res.display();
	cout << endl;

	res = comp1.div(comp3);
	cout << "Quot1: ";
	res.display();
	cout << endl;

	res = comp2.div(comp3);
	cout << "Quot2: ";
	res.display();
	cout << endl;

	res = comp4.conj();
	cout << "Conjoined: ";
	res.display();
	cout << endl;

	if (comp1.equ(comp2))
		cout << "Numbers are equal" << endl;
	else
		cout << "Numbers aren't equal" << endl;

	cout << "String representation of 1st number: " << comp1.tostr() << endl;
	cout << "String representation of 2st number: " << comp2.tostr() << endl;
}
