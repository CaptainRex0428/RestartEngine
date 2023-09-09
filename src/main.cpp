#include "Game.h"

int main(int argc, char** argv) 
{
	GameStart game;
	bool success = game.Initialize();
	if (success)
	{
		game.RunLoop();
	}
	game.ShutDown();
	return 0;
}