#include "menuProgram.h"

void MenuProgram::run()
{
	bool running = true;
	while (running)
	{
		printMenu();
		int choice = getChoice();
		doTask(choice);
		if (choice == EXIT) running = false;
	}
}

int MenuProgram::getChoice()
{
	cout << "Choose an option (0 to quit): ";
	int choice;
	cin >> choice;

	return choice;
}