#pragma once
#include "pch.h" 
#include "chem_composition.h"
#include <iostream> 
#include <vector> 
#include <algorithm> 

class expansion : public chem_composition {
public:
	void type_of_ferroelectric() const override {
		cout << "type of ferroelectric: ferroelectric with a broad phase transition" << endl;
	}
	void form_of_phase() const override {
		cout << "form of phase transition: gentle\n" << endl;
	}
};