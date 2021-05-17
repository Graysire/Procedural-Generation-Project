#pragma once
#ifndef randomnum

class RNG
{
public:
	//returns the result of dice roll XdY, X dice of Y sides
	static int GetDiceRoll(int numDice, int numSides);
};

#endif // !randomnum
