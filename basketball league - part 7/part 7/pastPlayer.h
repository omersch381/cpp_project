#ifndef __PAST_PLAYER_H
#define __PAST_PLAYER_H

#include "player.h"

class PastPlayer : protected Player
{
	int retiredYear;

public:
	PastPlayer(const Player& p, int year) : Person(p),  Player(p), retiredYear(year)
	{}

};

#endif // __PAST_PLAYER_H