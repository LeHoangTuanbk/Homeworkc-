#include "shape.h"
#include <math.h>
Triangle::Triangle()
{
	initialize();
	this->sidea = 1;
	this->sideb = 1;
	this->sidec = 1;
}

Triangle::Triangle(const double& sidea, const double& sideb, const double& sidec)
{
	if ((sidea + sideb) > sidec && (sidea + sidec) > sideb && (sideb + sideb) > sidea)
	{
		initialize();
		this->sidea = sidea;
		this->sideb = sideb;
		this->sidec = sidec;
	}
	else cout << "Cant initialize triangle with that 3 sides" << endl;
	
}

double Triangle::area() const
{
	double p = this->perimeter()/2;
	return sqrt(p*(p - this->sidea)*(p - this->sideb)*(p - this->sidec));
}

double Triangle::perimeter() const
{
	return this->sidea + this->sideb + this->sidec;
}

void Triangle::display() const
{
	cout << "Triangle(" << this->sidea << "," << this->sideb << "," << this->sidec << ")" << endl;
	Shape::display();
}

void Triangle::initialize()
{
	characteristics = "A shape that has 3 sides, total of degresss is 180 degresses";
	areaFormula = "sqrt(p*(p-a)*(p-b)*(p-c)";
	periFormula = "p = a+b+c";
}





