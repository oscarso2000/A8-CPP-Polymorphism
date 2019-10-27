//CS 2024 -- A8
//Written by Oscar So (ons4)
//October 27, 2019

#include <iostream>
#include "MenuH.h"
#include "MenuItemH.h"

using namespace std;

int main(int argc, char *argv[])
{
	MenuCommand menuCommands[] = {MenuCommand("List Accounts", '1'), MenuCommand("New Account", '2'), MenuCommand("Account>", '3'), MenuCommand("Quit", 'b')};
	Menu theMenu(menuCommands, 4);
	MenuCommand accountCommands[] = {MenuCommand("Balance Inquiry", '1'), MenuCommand("Deposit", '2'), MenuCommand("Withdrawal", '3'), MenuCommand("Back", 'b')};
	Menu accountMenu(accountCommands, 4);
	bool cont = true;
	int init = 1;
	while (cont == true)
	{
		if (init == 1)
		{
			cout << "==== Main MENU ====" << endl;
			theMenu.portray();
			switch (theMenu.promptUser())
			{
			case '1':
				theMenu.show('1');
				break;
			case '2':
				theMenu.show('2');
				break;
			case '3':
				init = 2;
				break;
			case 'b':
				cout << "Done" << endl;
				return 0;
			case (-1):
				cout << "Unknown Item" << endl;
				break;
			}
		}
		else
		{
			cout << "==== Account MENU ====" << endl;
			accountMenu.portray();
			switch (accountMenu.promptUser())
			{
			case '1':
				accountMenu.show('1');
				break;
			case '2':
				accountMenu.show('2');
				break;
			case '3':
				accountMenu.show('3');
				break;
			case 'b':
				init = 1;
				break;
			case (-1):
				cout << "Unknown Item" << endl;
				break;
			}
		}
	}
}