#pragma once
#include "pch.h" 
#include "chem_composition.h"
#include <iostream> 
#include <vector> 
#include <algorithm> 

class classic : public chem_composition {
public:
	void type_of_ferroelectric() const override {
		cout << "type of ferroelectric: classic" << endl;
	}
	void form_of_phase() const override {
		cout << "form of phase transition: acute\n" << endl;
	}
};