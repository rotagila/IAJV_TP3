#ifndef RAVEN_CAMP_GOAL_EVALUATOR
#define RAVEN_CAMP_GOAL_EVALUATOR
#pragma warning (disable:4786)
//-----------------------------------------------------------------------------
//
//  Name:   CampGoal_Evaluator.h
//
//  Author: Delenclos Victor
//
//  Desc:  class to calculate how desirable the goal of campin is
//-----------------------------------------------------------------------------

#include "goals/Goal_Evaluator.h"
#include "Raven_Bot.h"


class CampGoal_Evaluator : public Goal_Evaluator
{
public:

	CampGoal_Evaluator(double bias) :Goal_Evaluator(bias) {}

	double CalculateDesirability(Raven_Bot* pBot);

	void  SetGoal(Raven_Bot* pEnt);

	void RenderInfo(Vector2D Position, Raven_Bot* pBot);
};



#endif