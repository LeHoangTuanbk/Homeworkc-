#include "Shape.h"

Rectangle::Rectangle()
{
	width = 2.0;
	height = 1.0;
}
Rectangle::Rectangle(const double& w, const double& h)
{
	initialize();
	this->width = w;
	this->height = h;
}

void Rectangle::initialize()
{
	characteristics = "A shape that has 4 90 degrees angles, 2 pairs of equal sides";
	areaFormula = "S = w x h";
	periFormula = "p = 2(w+h)";
}


double Rectangle::area() const
{
	return width * height;
}

double Rectangle::perimeter() const
{
	return 2 * (width + height);
}

void Rectangle::display() const
{
	cout << "Rectangle(" << width << ", " << height << ")" << endl;
	Shape::display();
}
Square::Square()
{
	initialize();
	width = height = 1.0;
}

Square::Square(const double& side) : Rectangle(side, side)
{
	initialize();
}

void Square::display() const
{
	cout << "Square(" << width << ")" << endl;
	Shape::display();
}

void Square::initialize()
{
	characteristics = "A shpare that has 4 rights angles, 4 equal sides";
	areaFormula = "S = a^2";
	periFormula = "p = 4*a";
}


