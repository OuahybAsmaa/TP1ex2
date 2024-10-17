#pragma once
class point
{

	int x;
	int y;
public:
	point(int, int);
	point(const point& p);
	void afficher();
	double distance(const point& p) const;
	void translate(double dx , double dy);
	bool operator==(const point& p) const;
	~point();
};


class cercle
{
	const static double pi;
	int id;
	int rayou;
	point centre;
	
public:
	
	cercle(int,int, point);
	void afficher();
	void modifier_rayou(int);
	void translate(double ,double);
	bool operator==(const cercle&) const;
	bool appart(point&) const;
	double surface() const;
	double perimetre() const;
	~cercle();
		


};

