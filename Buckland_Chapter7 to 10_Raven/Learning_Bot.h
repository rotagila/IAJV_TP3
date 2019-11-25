#pragma once
#include "Raven_Bot.h"
#include "Raven_Game.h"
#include "neuralnetwork/CData.h"
#include "neuralnetwork/CNeuralNet.h"

class Learning_Bot : public Raven_Bot
{
private:
	CNeuralNet modeleAppris;

public:

	Learning_Bot(Raven_Game* world, Vector2D pos);
	~Learning_Bot();


	void Update();


};
