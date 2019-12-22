#pragma once 
#include "pch.h" 
#include <iostream> 
#include <vector> 
#include <algorithm> 

using namespace std;

class chem_composition {
private: int x;
public:
	chem_composition() { x = 0; }
	void set_x(int a) { x = a; }
	int get_x() const { return x; }
	virtual void type_of_ferroelectric() const = 0;
	virtual void form_of_phase() const = 0;
};

bool increase(const chem_composition* lhs, const chem_composition* rhs) {
	return lhs->get_x() < rhs->get_x();
}
bool decrease(const chem_composition* lhs, const chem_composition* rhs) {
	return lhs->get_x() > rhs->get_x();
}
