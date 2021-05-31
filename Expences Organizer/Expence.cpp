#include "Expence.h"
#include "Income.h"
#include "Date.h"
#include <vector>

Expence::Expence()
{
}

Expence::~Expence()
{
	
}

void Expence::write_ex()
{
	std::string dsc;
	double c;
	Date d;

	std::cout << "Describe expece: " << std::endl;
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

void Expence::show_expences(std::vector<Expence> V)
{
	for (int i = 0; i < V.size(); i++)
	{
		if (V.empty() == true)
		{
			system("cls");
			std::cout << "No Expences!" << std::endl;
		}
		else
		{
			std::cout << std::endl;
			std::cout << "Expence No " << i + 1 << "." << std::endl;
			std::cout << "Description: " << V[i].description_ << std::endl;
			std::cout << "Price: " << V[i].cost_ << std::endl;
			std::cout << "Date: " << V[i].date_.day << "." << V[i].date_.month << "." << V[i].date_.year << std::endl;
			std::cout << std::endl;
		}
	}
}

void Expence::filter_ex(std::vector<Expence> V)
{
	int x, z;
	int y, m;
	system("cls");
	std::cout << "__________Filter___________" << std::endl;
	std::cout << "1. Filter by year" << std::endl;
	std::cout << "2. Filter by month" << std::endl;
	std::cout << "3. Show all" << std::endl << std::endl;
	std::cout << "Your choice: ";;
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
				std::cout << "No matching expences" << std::endl;
			}
			else
			{
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
				std::cout << "No matching expences" << std::endl;
			}
			else
			{
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
		system("cls");
		break;
	case 3:
		system("cls");
		std::cout << "All incomes:" << std::endl << std::endl;
		show_expences(V);
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
