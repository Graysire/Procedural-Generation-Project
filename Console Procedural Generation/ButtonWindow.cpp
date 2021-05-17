#include "consoleGUI.h"
#include <iostream>

ButtonWindow::ButtonWindow(Button* buttons, int numbuttons)
{
	for (int i = 0; i < numbuttons; i++)
	{
		buttons_.push_back(&buttons[i]);
	}
}

std::string ButtonWindow::getDisplay(int rowLength)
{
	std::string output = "";
	int rowSpaceUsed = 0;


	for (int i = 0; i < buttons_.size(); i++)
	{
		std::string buttonName = buttons_[i]->getName();

		if (rowSpaceUsed + buttonName.size() + 1 >= rowLength)
		{
			output += "\n" + buttonName + " ";
			rowSpaceUsed = 1 + buttonName.size();
		}
		else
		{
			output += buttonName + " ";
			rowSpaceUsed += buttonName.size() + 1;
		}
	}

	return output;
}