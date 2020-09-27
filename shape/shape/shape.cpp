#include "shape.h"

Shape::Shape()
{
	characteristics = "None";
	areaFormula = "None";
	periFormula = "None";
}

double Shape::area() const
{
	return 0.0;
}

double Shape::perimeter() const
{
	return 0.0;
}

void Shape::display() const
{
	cout << "Characteristics: " << characteristics << endl;
	cout << "Area formula: " << areaFormula << ", area = " << area() << endl;
	cout << "Perimeter formula: " << periFormula << ", perimeter =  " << perimeter() << endl;
}