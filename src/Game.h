#pragma once
#include "SDL2/SDL.h"

class GameStart
{
public:
    GameStart();
	bool Initialize();
	void RunLoop();
	void ShutDown();

private:
	void ProcessInput();
	void UpdateGame();
	void GenerateOutput();
	
    SDL_Window* mWindow;

	bool mIsRunning;
};

