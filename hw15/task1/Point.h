//
// Created by Артемий on 15.12.2017.
//

#ifndef TASK1_POINT_H
#define TASK1_POINT_H


class Point {
friend std::ostream& operator <<(std::ostream&, const Point&);
friend std::istream& operator >>(std::istream&, Point&);

public: Point(double = 0, double = 0);
    void setX(double);
    void setY(double);
    void set(double, double);
    double getX() const;
    double getY() const;
    double d0() const;
    double d(const Point&) const;
private: double x, y;

};


#endif //TASK1_POINT_H