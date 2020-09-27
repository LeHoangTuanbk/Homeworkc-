#pragma once
#include <iostream>
#include <string>
using namespace std;
#define EXIT 0

class MenuProgram
{
public:
	void run();
protected:
	virtual void printMenu() = 0;
	virtual int getChoice();
	virtual void doTask(const int& choice) = 0;
};