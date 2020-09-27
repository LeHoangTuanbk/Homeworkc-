#pragma once
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

class Shape
{
protected:
	string characteristics;
	string areaFormula;
	string periFormula;
public:
	Shape();
	virtual double area() const = 0;
	virtual double perimeter() const = 0;
	virtual void display() const;
	virtual ~Shape();
};

class Rectangle : public Shape
{
protected:
	double width;
	double height;
public:
	Rectangle();
	Rectangle(const double& w, const double& h);

	double area() const;
	double perimeter() const;
	void display() const;
private:
	void initialize();
};

class Square : public Rectangle
{
public:
	Square();
	Square(const double& side);
	void display() const;
private:
	void initialize();
};

class Triangle : public Shape
{
protected:
	double sidea;
	double sideb;
	double sidec;
public:
	Triangle();
	Triangle(const double& sidea, const double& sideb, const double& sidec);
	double area() const;
	double perimeter() const;
	void display() const;
private:
	void initialize();

};

class Circle : public Shape
{
protected:
	double r;
public:
	Circle();
	Circle(const double& r);
	double area() const;
	double perimeter() const;
	void display() const;
private:
	void initialize();
};
