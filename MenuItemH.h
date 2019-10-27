//CS 2024 -- A8
//Written by Oscar So (ons4)
//October 27, 2019

#pragma once
#include <iostream>
using namespace std;

//class MenuItem
//{
//public:
//  MenuItem(string title, char prompt);
//  char getPromptChar();
//  void display();
//  friend ostream &operator<<(ostream &os, const MenuItem &mMenuItem)
//  {
//    os << mMenuItem.mPrompt << ") " << mMenuItem.mTitle << endl;
//    return os;
//  }
//
//private:
//  string mTitle;
//  char mPrompt;
//};

class MenuItem
{
public:
  MenuItem(string, char);
  virtual bool select() = 0;
  virtual void display() = 0;
  char getCommandChar() { return mCommandCharacter; }

protected:
  char mCommandCharacter;
  std::string mTitle;
};