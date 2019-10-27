//CS 2024 -- A8
//Written by Oscar So (ons4)
//October 27, 2019

#pragma once
#include <iostream>
#include <vector>
#include "MenuItemH.h"
using namespace std;

class MenuCommand : public MenuItem
{
public:
    MenuCommand(string, char);
    void display()
    {
        cout << "You Selected: " << mTitle << "!!!" << endl;
    }
    bool select()
    {
        if (mTitle == "Quit" || mTitle == "Back")
        {
            return false;
        }
        else
        {
            display();
            return true;
        }
    }
    char getCommandChar() { return mCommandCharacter; }
    string getTitle() { return mTitle; }
};