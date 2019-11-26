#include "Goal_Camp.h"
#include "goals/Goal_SeekToPosition.h"
//#include "goals/Goal_HuntTarget.h"
//#include "goals/Goal_DodgeSideToSide.h"
#include "Raven_Bot.h"






//------------------------------- Activate ------------------------------------
//-----------------------------------------------------------------------------
void Goal_Camp::Activate()
{
	m_iStatus = active;

	//if this goal is reactivated then there may be some existing subgoals that
	//must be removed
	RemoveAllSubgoals();

	AddSubgoal(new Goal_SeekToPosition(m_pOwner, m_pOwner->Pos()));
}

//-------------------------- Process ------------------------------------------
//-----------------------------------------------------------------------------
int Goal_Camp::Process()
{
	//if status is inactive, call Activate()
	ActivateIfInactive();

	//process the subgoals
	m_iStatus = ProcessSubgoals();

	//ReactivateIfFailed();

	return m_iStatus;
}




