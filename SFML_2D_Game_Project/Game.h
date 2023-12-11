#pragma once


class Game
{
private:
	// Private Functions
	void initVariables();
	void initWindow();


public:
	// Counstructor & Destructor

	Game();
	~Game();

	// Functions

	void update();
	void render();


};

