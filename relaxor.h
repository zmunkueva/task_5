#pragma once
#include "pch.h" 
#include "chem_composition.h"
#include <iostream> 
#include <vector> 
#include <algorithm> 

class relaxor : public chem_composition {
public:
	void type_of_ferroelectric() const override {
		cout << "type of ferroelectric: relaxor" << endl;
	}
	void form_of_phase() const override {
		cout << "form of phase transition: blurred\n" << endl;
	}
};