#ifndef __TOP_TEAM
#define __TOP_TEAM

#include "team.h"
#include <iostream>
using namespace std;

class TopTeam : public Team
{
	char* country;

public:
	TopTeam(const char* name, const char* country);
	TopTeam(const Team& theTeam, const char* country);
	TopTeam(const TopTeam& other);
	TopTeam(TopTeam&& other);
	~TopTeam();

	const TopTeam& operator=(const TopTeam& other);
	const TopTeam& operator=(TopTeam&& other);

	void setCountry(const char* country);
	const char* getCountry() const { return country; }

	friend ostream& operator<<(ostream& os, const TopTeam& t);
};
#endif // __TOP_TEAM