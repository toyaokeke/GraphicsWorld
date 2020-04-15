//
// Created by toyaokeke on 2020-04-06.
//

#include "Circle.h"
#include "Rectangle.h"
#ifndef ENSF_607_PROJECT_CORNERCUT_H
#define ENSF_607_PROJECT_CORNERCUT_H

class Cornercut: public Rectangle, public Circle{
private:
    void copy(const Cornercut&);
public:
    Cornercut(int, int, int, int, int, char*);
    Cornercut(const Cornercut&);
    double area();
    double perimeter();
    void display();
    Cornercut& operator =(const Cornercut&);
};

#endif //ENSF_607_PROJECT_CORNERCUT_H
