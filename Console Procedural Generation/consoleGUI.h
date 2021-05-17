#pragma once
#ifndef consoleGUI

#include <windows.h>
#include <vector>
#include <string>

//
class Button
{
public:
	//Default Constructor, no set name
	//Button();
	//Constructor with input name
	Button(std::string name);
	//returns the display name of the button
	std::string getName();
private:
	//the displayed name of this button
	std::string name_;

};

class ButtonWindow
{
public:
	//Constructor with input array of Buttons and array length
	ButtonWindow(Button* buttons, int numButtons);
	//returns string of buttons to display within max row length
	std::string getDisplay(int rowLength);
private:
	//List of buttons to print
	std::vector<Button*> buttons_;

};


#endif // !consoleGUI
