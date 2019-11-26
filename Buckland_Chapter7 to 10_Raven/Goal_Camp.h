#ifndef GOAL_CAMP_H
#define GOAL_CAMP_H
#pragma warning (disable:4786)
//-----------------------------------------------------------------------------
//
//  Name:   Goal_Camp.h
//
//  Author: Victor Delenclos
//
//  Desc:   
//
//-----------------------------------------------------------------------------
#include "Goals/Goal_Composite.h"
#include "goals/Raven_Goal_Types.h"
#include "Raven_Bot.h"





class Goal_Camp : public Goal_Composite<Raven_Bot>
{
public:

	Goal_Camp(Raven_Bot* pOwner) :Goal_Composite<Raven_Bot>(pOwner, goal_camp)
	{}

	void Activate();

	int  Process();

	void Terminate() { m_iStatus = completed; }

};






#endif
