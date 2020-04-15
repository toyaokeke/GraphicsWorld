//
// Created by toyaokeke on 2020-04-05.
//

#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle(int a, int b, int x, int y, char *name ): Square(a, x, y, name), Shape(x, y, name) {
    side_b = b;
}

Rectangle& Rectangle::operator=(const Rectangle &rhs) {
    copy(rhs);
    return *this;
}

double Rectangle::area() {
    return side_b * getA();
}

double Rectangle::perimeter() {
    return 2 * (side_b + getA());
}

void Rectangle::display() {
    cout << "Rectangle Name: " << getName() << endl;
    getOrigin().display();
    cout << "Side A (Length): " << getA() << endl;
    cout << "Side B (Width): " << side_b << endl;
}

Rectangle::Rectangle(const Rectangle &source): Square(source), Shape(source) {
    side_b = source.side_b;
}

void Rectangle::copy(const Rectangle &source) {
    setOrigin(source.getOrigin());
    setA(source.getA());
    side_b = source.side_b;
}

void Rectangle::setB(int b) {
    side_b = b;
}

int Rectangle::getB() const {
    return side_b;
}