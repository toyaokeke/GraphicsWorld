//
// Created by toyaokeke on 2020-04-04.
//

#include "Shape.h"
#ifndef ENSF_607_PROJECT_SQUARE_H
#define ENSF_607_PROJECT_SQUARE_H

class Square:public virtual Shape{
private:
    int side_a;
    void copy(const Square&);
public:
    Square(int, int, int, char*);
    Square(const Square&);
    Square& operator =(const Square&);
    double area();
    double perimeter();
    void display();
    int getA() const;
    void setA(int);
};

#endif //ENSF_607_PROJECT_SQUARE_H
