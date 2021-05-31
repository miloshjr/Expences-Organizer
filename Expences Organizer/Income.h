#pragma once
#include <iostream>
#include "Date.h"
#include <vector>

class Income
{
public:
	std::string description_;
	double cost_;
	Date date_;

	Income();
	~Income();
	void write_in();
	void show_incomes(std::vector<Income>V);
	void filter_in(std::vector<Income>V);
	friend void main_menu(std::vector<Expence>L,std::vector<Income>E);
};