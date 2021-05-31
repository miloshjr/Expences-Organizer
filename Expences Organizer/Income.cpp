#include "Income.h"
#include "Expence.h"
#include "Date.h"
#include <vector>

Income::Income()
{
}


Income::~Income()
{
}

void Income::write_in()
{
	std::string dsc;
	double c;
	Date d;

	std::cout << "Describe income: " << std::endl;
	std::cin >> dsc;
	std::cout << "Name a price (PLN): " << std::endl;
	std::cin >> c;
	std::cout << "Name a day: " << std::endl;
	std::cin >> d.day;
	std::cout << "Name a month: " << std::endl;
	std::cin >> d.month;
	std::cout << "Name a year: " << std::endl;
	std::cin >> d.year;

	description_ = dsc;
	cost_ = c;
	date_.day = d.day;
	date_.month = d.month;
	date_.year = d.year;
}

void Income::show_incomes(std::vector<Income> V)
{
	for (int i = 0; i < V.size(); i++)
	{
		if (V.empty() == true)
		{
			std::cout << "No incomes!" << std::endl;
		}
		else
		{
			std::cout << std::endl;
			std::cout << "Income No " << i + 1 << "." << std::endl;
			std::cout << "Description: " << V[i].description_ << std::endl;
			std::cout << "Price: " << V[i].cost_ << std::endl;
			std::cout << "Date: " << V[i].date_.day << "." << V[i].date_.month << "." << V[i].date_.year << std::endl;
			std::cout << std::endl;
		}
	}
}

void Income::filter_in(std::vector<Income> V)
{
	int x, z;
	int m, y;
	system("cls");
	std::cout << "__________Filter___________" << std::endl;
	std::cout << "1. Filter by year" << std::endl;
	std::cout << "2. Filter by month" << std::endl;
	std::cout << "3. Show all" << std::endl << std::endl;
	std::cout << "Your choice: ";
	std::cin >> x;
	if ((x != 1) && (x != 2) && (x != 3))
	{
		system("cls");
		std::cout << "Error: invalid number!" << std::endl << "Try again!" << std::endl << std::endl;
	}
	switch (x)
	{
	case 1:
		system("cls");
		std::cout << "Year: " << std::endl;
		std::cin >> y;
		for (int i = 0; i < V.size(); i++)
		{
			if (V[i].date_.year != y)
			{
				system("cls");
				std::cout << "No matching expences" << std::endl;
			}
			else
			{
				system("cls");
				std::cout << std::endl;
				std::cout << "Expence No " << i + 1 << "." << std::endl;
				std::cout << "Description: " << V[i].description_ << std::endl;
				std::cout << "Worth: " << V[i].cost_ << std::endl;
				std::cout << "Date: " << V[i].date_.day << "." << V[i].date_.month << "." << V[i].date_.year << std::endl;
				std::cout << std::endl;
			}
		}
		std::cout << "Return to MAIN MENU -> press 0" << std::endl;
		std::cin >> z;
		if (z != 0)
		{
			std::cout << "Error: invalid number!" << std::endl;
		}
		else
			switch (z)
			{
			case 0: {system("cls"); }
			}
		break;
	case 2:
		system("cls");
		std::cout << "Month: " << std::endl;
		std::cin >> m;
		for (int i = 0; i < V.size(); i++)
		{
			if (V[i].date_.month != m)
			{
				system("cls");
				std::cout << "No matching expences" << std::endl;
			}
			else
			{
				system("cls");
				std::cout << std::endl;
				std::cout << "Expence No " << i + 1 << "." << std::endl;
				std::cout << "Description: " << V[i].description_ << std::endl;
				std::cout << "Worth: " << V[i].cost_ << std::endl;
				std::cout << "Date: " << V[i].date_.day << "." << V[i].date_.month << "." << V[i].date_.year << std::endl;
				std::cout << std::endl;
			}
		}
		std::cout << "Return to MAIN MENU -> press 0" << std::endl;
		std::cin >> z;
		if (z != 0)
		{
			std::cout << "Error: invalid number!" << std::endl;
		}
		else
			switch (z)
			{
			case 0: {system("cls"); }
			}
		break;
	case 3:
		system("cls");
		std::cout << "All incomes:" << std::endl << std::endl;
		show_incomes(V);

		std::cout << "Return to MAIN MENU -> press 0" << std::endl;
		std::cin >> z;
		if (z != 0)
		{
			std::cout << "Error: invalid number!" << std::endl;
		}
		else
			switch (z)
			{
			case 0: {system("cls"); }
			}

		break;
	}
}
