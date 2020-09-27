#include "ShapeProgram.h"
#include "Shape.h"
#include <vector>
using namespace std;

void ShapeProgram::printMenu()
{
	cout << "Demo basic shapes" << endl;
	cout << "1. Add circle" << endl;
	cout << "2. Add rectangle" << endl;
	cout << "3. Add Square" << endl;
	cout << "4. Add triangle" << endl;
	cout << "5. Show all" << endl;
}

void ShapeProgram::doTask(const int& choice)
{
	switch (choice)
	{
	case 1: addCircle(); break;
	case 2: addRectangle(); break;
	case 3: addSquare(); break;
	case 4: addTriangle(); break;
	case 5: showAll(); break;
	default:
		break;
	}
}

void ShapeProgram::addCircle()
{
	double r;
	cout << "Enter r: "; cin >> r;
	Circle* c = new Circle(r);
	shapes.push_back(c);
}

void ShapeProgram::addRectangle()
{
	double width, height;
	cout << "Enter width: "; cin >> width;
	cout << "Enter height: "; cin >> height;
	Rectangle* r = new Rectangle(width, height);
	shapes.push_back(r);

}

void ShapeProgram::addSquare()
{
	double side;
	cout << "Enter side: "; cin >> side;
	Square* s = new Square(side);
	shapes.push_back(s);
}

void ShapeProgram::addTriangle()
{
	//TriangleSubProgram sup;
	//sup.run();
	//shapes.push_back(sup.getTriangle()); // homeWork
	// i do a simplier things with triangle =)))). I will applied this technique in the miniproject

	double sidea, sideb, sidec;
	cout << "Enter 3 sides of triangle: "; cin >> sidea >> sideb >> sidec;
	Triangle* t = new Triangle(sidea, sideb, sidec);
	shapes.push_back(t);
}

void ShapeProgram::showAll()
{
	for (size_t i = 0; i < shapes.size(); i++)
	{
		shapes[i]->display();
		
	}
	
}

ShapeProgram::~ShapeProgram()
{
	for (int i = 0; i < shapes.size(); i++)
	{
		delete shapes[i]; // deallocate memory where shapes[i], points to 
	}
}

