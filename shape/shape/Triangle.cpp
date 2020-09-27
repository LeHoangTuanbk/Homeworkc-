#include "shape.h"
#include <math.h>
Triangle::Triangle()
{
	this->sidea = 1;
	this->sideb = 1;
	this->sidec = 1;
}

Triangle::Triangle(const double& sidea, const double& sideb, const double& sidec)
{
	this->sidea = sidea;
	this->sideb = sideb;
	this->sidec = sidec;
}

double Triangle::area() const
{
	double p = this->perimeter();
	return sqrt(p*(p-this->sidea)*(p-this->sideb)*(p-this->sidec));
}

double Triangle::perimeter() const
{
	return this->sidea + this->sideb + this->sidec;
}

void Triangle::display() const
{
	cout << "Triangle has side a: " << this->sidea << " side b: " << this->sideb << " side c: " << this->sidec << endl;
	// need add peri, area
}

void Triangle::initialize() 
{
	characteristics = "A shape that has 3 side, total of degresss is 180 degresses";
	areaFormula = "sqrt(p*(p-a)*(p-b)*(p-c)";
	periFormula = "p = a+b+c";
}





