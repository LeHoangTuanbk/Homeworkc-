#pragma once
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

class Shape
{
private:
	string tuan = "LeHoangTuan";
protected:
	string characteristics;
	string areaFormula;
	string periFormula;
public:
	Shape();
	virtual double area() const;
	virtual double perimeter() const;
	void display() const;
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
public:
	Triangle();
	Triangle(const double& sidea, const double& sideb, const double& sidec);
	double area() const;
	double perimeter() const;
	void display() const;
private:
	void initialize();
protected:
	double sidea;
	double sideb;
	double sidec;

};

