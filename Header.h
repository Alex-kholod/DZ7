#ifndef PANEL_H
#define PANEL_H

#include <iostream>
using namespace std;

class Vector
{
private:
	double x = 0;
	double y = 0;
public:
	Vector(double x, double y)
	{
		this->x = x;
		this->y = y;
	}
	Vector(const Vector& obj)
	{
		this->x = obj.x;
		this->y = obj.y;
	}

	double GetX()
	{
		return x;
	}
	double GetY()
	{
		return y;
	}
	
	void print()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
	double multiplication();
	double vector_length();
	~Vector() {}
};

class Circle
{
private:
	double R = 0;
public:
	Circle(double R)
	{
		this->R = R;
	}
	Circle(const Circle& obj)
	{
		this->R = obj.R;
	}

	double GetR()
	{
		return R;
	}
	double square();
	double circle_length();
	~Circle() {}
};

class Complex
{
private:
	double re = 0;
	double im = 0;
public:
	Complex(double re, double im)
	{
		this->re = re;
		this->im = im;
	}
	Complex(const Complex& obj)
	{
		this->re = obj.re;
		this->im = obj.im;
	}
	double GetIM()
	{
		return im;
	}
	double GetRE()
	{
		return re;
	}
	Complex sum(Complex a);
	Complex difference(Complex a);
	Complex multip(Complex a);
	double division(Complex a);
	~Complex() {}
};
void Print(double, double);
//void Print(double x, double y);
//double absolute(Complex a);
#endif
