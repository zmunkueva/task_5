#include "pch.h" 
#include <iostream> 
#include "chem_composition.h" 
#include "classic.h"
#include "expansion.h"
#include "relaxor.h"
#include <vector> 
#include <algorithm> 


int main()
{
	cout << "ferroelectric niobate barium strontium (sbn) depending on the chemical composition (x) can change the dielectric properties" << endl;
	cout << "for example, the temperature behavior of the dielectric constant near the phase transition can be of different forms" << endl;

	classic a;
	expansion b;
	relaxor c;

	a.set_x(33);
	cout << "chemical composition: 33 " << endl;
	a.type_of_ferroelectric();
	a.form_of_phase();
	b.set_x(61);
	cout << "chemical composition: 61 " << endl;
	b.type_of_ferroelectric();
	b.form_of_phase();
	c.set_x(75);	
	cout << "chemical composition: 75 " << endl;
	c.type_of_ferroelectric();
	c.form_of_phase();

	vector<chem_composition*> list;
	list.push_back(&a);
	list.push_back(&b);
	list.push_back(&c);

	sort(list.begin(), list.end(), increase);
	for (auto q : list) {
		cout << "chemical composition: " << q->get_x() << endl;
	}
	cout << endl;
	sort(list.begin(), list.end(), decrease);
	for (auto k : list) {
		cout << "chemical composition: " << k->get_x() << endl;
	}

	return 0;
}
