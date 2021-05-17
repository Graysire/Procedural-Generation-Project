#include "consoleGUI.h"


Button::Button(std::string name)
{
	name_ = name;
}

std::string Button::getName()
{
	return name_;
}