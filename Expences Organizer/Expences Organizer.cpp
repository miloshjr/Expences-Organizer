#include <iostream>
#include <vector>
#include "Income.h"
#include "Expence.h"

using namespace std;
void main_menu(vector<Expence>L, vector<Income>E)
{	Expence exp;
	Income inc;
	int x = 0;
	for (int i = 1; i > 0; i++)
	{ 
		cout << "___________MENU_____________" << endl;
		cout << "1. Add new expence" << endl;
		cout << "2. View expences" << endl;
		cout << "3. Add new income" << endl;
		cout << "4. View incomes" << endl << endl;
		cout << "Your choice: ";
		cin >> x;
		if ((x != 1) && (x != 2) && (x != 3) && (x != 4))
		{
			system("cls");
			cout << "Error: invalid number!" << endl << "Try again!" << endl << endl;	
		}
		switch (x)
		{
		case 1:
			system("cls");
			exp.write_ex();
			L.push_back(exp);
			system("cls");
			break;
		case 2:
			exp.filter_ex(L);
			break;
		case 3:
			system("cls");
			inc.write_in();
			E.push_back(inc);
			system("cls");
			break;
		case 4:
			inc.filter_in(E);
			break;
		}
	}
}
int main()
{
	vector<Expence>List;
	vector<Income>Enumeration;
	main_menu(List,Enumeration);
	return 0;
}