//CS 2024 -- A8
//Written by Oscar So (ons4)
//October 27, 2019

#include <iostream>
#include "MenuH.h"
#include "MenuItemH.h"
using namespace std;

MenuItem::MenuItem(string title, char c){
    mTitle = title;
    mCommandCharacter = c;
}