//
// Created by toyaokeke on 2020-04-04.
//

#include "Shape.h"
#include <iostream>
using namespace std;

Shape::Shape(int x, int y, char *name): origin(x, y) {
    shapeName = new char;
    shapeName = name;
}

Shape::~Shape() {
    delete [] shapeName;
}

Point Shape::getOrigin() const {
    return origin;
}

char* Shape::getName() const{
    return shapeName;
}

double Shape::distance(Shape & other) {
    return origin.distance(other.origin);
}

double Shape::distance(Shape &s1, Shape &s2) {
    return Point::distance(s1.origin, s2.origin);
}

void Shape::move(double dx, double dy) {
    origin.setX(origin.getX() + dx);
    origin.setY(origin.getY() + dy);
}

void Shape::display() {
    cout << "Shape Name: " << &shapeName << endl;
    origin.display();
}

Shape::Shape(const Shape &source): origin(source.origin) {
    shapeName = new char;
    shapeName = source.shapeName;
}

void Shape::copy(const Shape &source) {
    origin = source.origin;
}

void Shape::setName(char *name) {
    delete [] shapeName;
    shapeName = new char;
    shapeName = name;
}

void Shape::setOrigin(Point point) {
    origin = point;
}