#ifndef POINT3D_H
#define POINT3D_H

#include<string>
using namespace std;


//Class Point represents points in the Cartesian coordinate

class Point3D : public Point {
private:
    double zCoord;           //coordinates of the point

public:
    Point3D();                         //default constructor
    Point3D(double, double, double, string);    //conversion constructor

    double getZ() const;
    void setZ(double);

    double distanceFrom(Point3D&);
    string getName() const;
    void printP();

};


#endif