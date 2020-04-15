//
// Created by toyaokeke on 2020-04-06.
//

#include "Circle.h"
#include <cmath>
#include <iostream>
using namespace std;

Circle::Circle(int r, int x, int y, char *name ): Shape(x, y, name) {
    radius = r;
}

Circle& Circle::operator=(const Circle &rhs) {
    copy(rhs);
    return *this;
}

double Circle::area() {
    return M_PI * pow(radius, 2);
}

double Circle::perimeter() {
    return 2 * M_PI * radius;
}

void Circle::display() {
    cout << "Circle Name: " << getName() << endl;
    getOrigin().display();
    cout << "Radius: " << radius << endl;
}

int Circle::getRadius() const {
    return radius;
}

Circle::Circle(const Circle &source): Shape(source) {
    radius = source.radius;
}

void Circle::copy(const Circle &source) {
    setOrigin(source.getOrigin());
    radius = source.radius;
}

void Circle::setRadius(int r){
    radius = r;
}
