#include "Shape.h"
#include "shape.h"

Shape::Shape()
{
	characteristics = "None";
	areaFormula = "None";
	periFormula = "None";
}

void Shape::display() const
{
	cout << "Characteristics: " << characteristics << endl;
	cout << "Area formula: " << areaFormula << ", area = " << area() << endl;
	cout << "Perimeter formula: " << periFormula << ", perimeter =  " << perimeter() << endl;
	cout << endl;
}

Shape::~Shape()
{

}

