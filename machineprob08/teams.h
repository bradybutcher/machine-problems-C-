#pragma once
#include <string>
#include "player.h"

using namespace std;

class TeamClass
{
private:
    std::string teamName;
    std::string teamPoints;
    int numPlayers;

public:
    void setTeamName(std::string n);
    void setTeamPoints();
    string getTeamName();
    string getTeamPoints();
    int totalPoints();
};