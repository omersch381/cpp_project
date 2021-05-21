#ifndef  __NBA_TEAM_H
#define __NBA_TEAM_H

#include "topTeam.h"

class NBATeam : public TopTeam
{
	int draft;
public:
	NBATeam(const TopTeam& theTeam, int draft) : TopTeam(theTeam), draft(draft)
	{

	}

	friend ostream& operator<<(ostream& os, const NBATeam& nbaTeam)
	{
		os << (TopTeam&)nbaTeam << ", draft: " << nbaTeam.draft;
		return os;
	}
};
#endif // __NBA_TEAM_H
