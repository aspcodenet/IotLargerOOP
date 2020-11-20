#include "team.h"

int Team::NumberOfPlayers()
{
	return players.size();
}

Player Team::GetPlayerByIndex(int index)
{
	return players[index];
}
void Team::AddPlayer(Player p)
{
	if (players.size() > 5)
		throw std::exception("Too manby players");
	players.push_back(p);
}
Team::Team(std::string namn)
{
	this->namn = namn;
}
