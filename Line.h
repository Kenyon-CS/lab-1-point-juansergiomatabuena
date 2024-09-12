// Line.h
#ifndef LINE_H
#define LINE_H

#include "Point.h"

class lineType {
private:
    double a;
    double b;
    double c;

public:
    // Default constructor
    lineType();

    // Parameterized constructor
    lineType(double a, double b, double c);

    // Defining the slope
    double slope() const;

    // Overloading the equality operator
    bool operator==(const lineType& other) const;

    // Overloading the parallel operator
    bool operator||(const lineType& other) const;

    // Overloading the perpendicular operator
    bool operator|(const lineType& other) const;

    // Finding the intersection
    Point* intersect(const lineType& other) const;

    //Printing the line information
    void print() const;

};

#endif