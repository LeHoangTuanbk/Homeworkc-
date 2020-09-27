#include "Shape.h"
#define PI 3.14;

Circle::Circle()
{
	initialize();
	this->r = 1;
}

Circle::Circle(const double& r)
{
	initialize();
	this->r = r;
}

double Circle::area() const
{
	double area = this->r * this->r * PI;
	return area;
}

double Circle::perimeter() const
{
	return 2 * (this->r) * PI;
}

void Circle::display() const
{
	cout << "Circle(" << this->r << ")" << endl;
	Shape::display();
}
void Circle::initialize()
{
	characteristics = "This is a circle";
	areaFormula = "PI*r^2";
	periFormula = "P = 2*PI*r";
}
