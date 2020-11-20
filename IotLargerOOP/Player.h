#ifndef _PLAYER_H
#define _PLAYER_H
#include <string>
using namespace std;

typedef enum
{
	Goalie,
	Defence,
	Forward
}POSITION;



class Player
{
private:
	int jerseynumber;
	string namn;
	int age;
	POSITION position;
public:
	void SetJerseyNumber(int n);
	Player(string namn, int jerseyNumber, int age, POSITION pos);
	int GetAge();
	string GetNamn();
	string GetBla();
};



#endif
