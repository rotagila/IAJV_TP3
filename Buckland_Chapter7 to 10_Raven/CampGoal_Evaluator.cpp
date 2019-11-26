#include "CampGoal_Evaluator.h"
#include "goals/Goal_Evaluator.h"
#include "goals/Raven_Goal_Types.h"
#include "Raven_WeaponSystem.h"
#include "Raven_ObjectEnumerations.h"
#include "misc/cgdi.h"
#include "misc/Stream_Utility_Functions.h"
#include "goals/Raven_Feature.h"

#include "goals/Goal_Think.h"
#include "debug/DebugConsole.h"

//------------------ CalculateDesirability ------------------------------------
//
//  returns a value between 0 and 1 that indicates the Rating of a bot (the
//  higher the score, the stronger the bot).
//-----------------------------------------------------------------------------
double CampGoal_Evaluator::CalculateDesirability(Raven_Bot* pBot)
{
	double Desirability = 0.0;

	//only do the calculation if there is no shootable target
	if (!(pBot->GetTargetSys()->isTargetShootable()))
	{
		const double Tweaker = 1.0;
		Desirability = Tweaker * Raven_Feature::TotalWeaponStrength(pBot) * (1.5-m_dCharacterBias);

	}

	return Desirability;
}

//----------------------------- SetGoal ---------------------------------------
//-----------------------------------------------------------------------------
void CampGoal_Evaluator::SetGoal(Raven_Bot* pBot)
{
	pBot->GetBrain()->AddGoal_Camp();
}

//-------------------------- RenderInfo ---------------------------------------
//-----------------------------------------------------------------------------
void CampGoal_Evaluator::RenderInfo(Vector2D Position, Raven_Bot* pBot)
{
	gdi->TextAtPos(Position, "CP: " + ttos(CalculateDesirability(pBot), 2));
	return;
}