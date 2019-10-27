//CS 2024 -- A8
//Written by Oscar So (ons4)
//October 27, 2019

#include <iostream>
#include <vector>
#include "MenuH.h"
#include "MenuItemH.h"
#include "MenuCommandH.h"
using namespace std;

Menu::Menu(MenuCommand a[], int i)
{
	mSize = i;
	itemStack.assign(a, a + i);
}

char Menu::promptUser()
{
	cout << "Enter Choice> ";
	char choice;
	cin >> choice;
	bool check = false;
	for (MenuCommand i : itemStack)
	{
		if (choice == i.getCommandChar())
		{
			check = true;
		}
	}
	if (check == true)
	{
		return choice;
	}
	else
	{
		return -1;
	}
}

void Menu::show(char c){
	for (MenuCommand i : itemStack)
	{
		if (c == i.getCommandChar())
		{
			i.display();
		}
	}
}

void Menu::portray(){
	for (MenuCommand i:itemStack){
		cout << i.getCommandChar() << "> " << i.getTitle() << endl;
	}
}