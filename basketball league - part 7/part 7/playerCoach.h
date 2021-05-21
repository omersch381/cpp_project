#ifndef __PLAYER_COACH_H
#define __PLAYER_COACH_H

#include "player.h"
#include "coach.h"

class PlayerCoach : public Player, public Coach
{
public:
	PlayerCoach(const Player& player, const Coach& coach) : Person(player),  Player(player), Coach(coach)
	{
		cout << "PlayerCoach" << endl;
	}

};
#endif // __PLAYER_COACH_H