//
// Created by Артемий on 15.12.2017.
//

#include <cmath>
#include <ostream>
#include <iostream>
#include "Point.h"

using namespace std;

Point::Point(double xArg, double yArg): x(xArg), y(yArg) {}

void Point::setX(double xArg) {
    x = xArg;
}

void Point::setY(double yArg) {
    y = yArg;
}

double Point::getX() const {
    return x;
}

double Point::getY() const {
    return y;
}

double Point::d0() const {
    return sqrt(pow(x, 2) + pow(y, 2));
}

double Point::d(const Point &otherPoint) const {
    return sqrt(pow(otherPoint.getX() - x, 2) + pow(otherPoint.getY() - y, 2));
}

ostream& operator <<(ostream &s, const Point &p) {
    s << '(' << p.x << ", " << p.y << ')';
    return s;
}

istream& operator >>(istream &s, Point &p) {
    s >> p.x >> p.y;
    return s;
}