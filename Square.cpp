//
// Created by toyaokeke on 2020-04-05.
//

#include "Square.h"
#include <iostream>
#include <cmath>
using namespace std;

Square::Square(int a, int x, int y, char *name ): Shape(x, y, name) {
    side_a = a;
}

Square& Square::operator=(const Square &rhs) {
    copy(rhs);
    return *this;
}

double Square::area() {
    return pow(side_a, 2);
}

double Square::perimeter() {
    return 4 * side_a;
}

void Square::display() {
    cout << "Square Name: " << getName() << endl;
    getOrigin().display();
    cout << "Side A: " << side_a << endl;
}

int Square::getA() const {
    return side_a;
}

Square::Square(const Square &source): Shape(source) {
    side_a = source.side_a;
}

void Square::copy(const Square &source) {
    setOrigin(source.getOrigin());
    side_a = source.side_a;
}

void Square::setA(int a) {
    side_a = a;
}