#pragma once
#include <iostream>
#include "Date.h"
#include <vector>

class Expence
{
public:
	std::string description_;
	double cost_;
	Date date_;

	Expence();
	~Expence();
	void write_ex();
	void show_expences(std::vector<Expence>V);
	void filter_ex(std::vector<Expence>V);
	friend void main_menu(std::vector<Expence>L,std::vector<Income>E);
};