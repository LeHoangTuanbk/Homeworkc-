#pragma once
#include "menuProgram.h"
#include <vector>
#include "Shape.h"
using namespace std;
class ShapeProgram : public MenuProgram
{
private:
	vector<Shape*> shapes;
protected:
	void printMenu(); //overide from MenuProgram
	void doTask(const int& choice); // overide from Menu Program
private:
	void addCircle();
	void addRectangle();
	void addSquare();
	void addTriangle();
	void showAll();
public:
	~ShapeProgram();
};

