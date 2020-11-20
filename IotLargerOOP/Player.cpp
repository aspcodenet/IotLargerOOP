#include "Player.h"

void Player::SetJerseyNumber(int n)
{
	this->jerseynumber = n;
}

Player::Player(string namn, int jerseyNumber, int age, POSITION pos)
{
	this->position = pos;
	this->namn = namn;
	this->jerseynumber = jerseyNumber;
	this->age = age;
}


string Player::GetBla()
{
	return "31212";
}



string Player::GetNamn()
{
	return namn;
}



int Player::GetAge()
{
	return age;
}
