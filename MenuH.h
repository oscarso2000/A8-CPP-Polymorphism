//CS 2024 -- A8
//Written by Oscar So (ons4)
//October 27, 2019

#pragma once
#include <iostream>
#include <vector>
#include "MenuItemH.h"
#include "MenuCommandH.h"
using namespace std;

class Menu {
	public:
		Menu(MenuCommand [], int);
		char promptUser();
		void show(char);
		void portray();
	private:
		int mSize;
		vector<MenuCommand> itemStack;
};
