#pragma once
#include <vector>

#include "team.h"

class Meny
{
	vector<Team> teams;
public:

	Meny(std::vector<Team> &teams);
	void ShowHuvudMeny();
};
