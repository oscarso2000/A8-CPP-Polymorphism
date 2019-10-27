//CS 2024 -- A8
//Written by Oscar So (ons4)
//October 27, 2019
#include <iostream>
#include <vector>
#include "MenuCommandH.h"
#include "MenuItemH.h"
using namespace std;

MenuCommand::MenuCommand(string s, char c) : MenuItem(s,c)
{
    mTitle = s;
    mCommandCharacter = c;
}