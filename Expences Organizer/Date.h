#pragma once
#include "Income.h"
#include "Expence.h"
#include <vector>

class Date
{
public:
	int day, month, year;

	friend class expence;
	friend class income;
	friend void show_expences(std::vector<Expence>V);
	friend void show_incomes(std::vector<Income>V);
	friend void filter_ex(std::vector<Expence>V);
	friend void filter_in(std::vector<Income>V);

	Date();
	~Date();
};

