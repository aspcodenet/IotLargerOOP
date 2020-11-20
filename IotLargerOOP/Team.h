#ifndef _TEAM_H
#define _TEAM_H
#include <vector>
#include <string>
#include "player.h"

class Team
{
private:
	std::string namn;
	std::vector<Player> players;
public:

	int NumberOfPlayers();
	Player GetPlayerByIndex(int index);
	void AddPlayer(Player p);
	Team(std::string namn);
};




#endif
