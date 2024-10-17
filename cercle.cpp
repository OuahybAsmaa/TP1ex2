#include "cercle.h"
#include<iostream>
#include<cmath>
const double cercle:: pi = 3.14;


//class point





point::point(int x, int y):x(x),y(y)
{
	
}

point::point(const point& p):x(p.x),y(p.y)
{
	std::cout << "constructeur de recopie" << std::endl;
}

void point::afficher()
{
	std::cout << "x=" << this->x << std::endl;
	std::cout << "y=" << this->y << std::endl;
}

double point::distance(const point& p) const
{
	return sqrt(pow(this->x - p.x, 2) + pow(this->y - p.y, 2));	
}

void point::translate(double dx, double dy)
{
	this->x += dx;
	this->y += dy;
}

bool point::operator==(const point& p) const
{

	return this->x==p.x && this->y==p.y;
}

point::~point()
{
	std::cout << "dustructeur point" << std::endl;
}



//class cercle

cercle::cercle(int id, int r, point c):id(id),rayou(r),centre(c)
{
}

void cercle::afficher()
{
	std::cout << "id=" << this->id << std::endl;
	std::cout << "rayou=" << this->rayou << std::endl;
	std::cout << "centre:" << std::endl;
	this->centre.afficher();
}

void cercle::modifier_rayou(int dr)
{
	this->rayou += dr;
}

void cercle::translate(double dx,double dy)
{
	this->centre.translate(dx,dy);

}

bool cercle::operator==(const cercle& c) const
{
	return this->centre==c.centre && this->rayou==c.rayou;
}

bool cercle::appart(point& p) const
{
	return this->centre.distance(p)<=this->rayou;
}

double cercle::surface() const
{
	return pow(this->rayou, 2)*pi;
}

double cercle::perimetre() const
{
	return 2*pi*this->rayou;
}

cercle::~cercle()
{
	std::cout << "dustructeur cercle" << std::endl;
}
