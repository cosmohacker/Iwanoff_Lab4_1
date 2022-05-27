#ifndef POINT_H
#define POINT_H

#include<string>
using namespace std;

//Class Point represents points in the Cartesian coordinate

class Point {
protected:
	double xCoord, yCoord;           //coordinates of the point
	string name;                     //name of the point

public:
	Point();                         //default constructor
	Point(double, double, string);    //conversion constructor

	double getX() const;
	double getY() const;

	string getName() const;

	void setX(double);
	void setY(double);

	void setName(string);

	double distanceFrom(Point&);
	void printP();
};

#endif