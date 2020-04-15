//
// Created by toyaokeke on 2020-04-06.
//

#include "Cornercut.h"
#include <cmath>
#include <iostream>
using namespace std;

Cornercut::Cornercut(int a, int b, int r, int x, int y, char *name): Rectangle(a, b, x, y, name), Circle(r, x, y, name), Shape(x, y, name) {
    if (r > b){
        cerr << "Error! Radius of cornercut cannot be greater than side b. Shutting down the program" << endl;
        exit(1);
    }
}

Cornercut::Cornercut(const Cornercut &source): Rectangle(source), Circle(source), Shape(source) {
    if (source.getRadius() > source.getB()){
        cerr << "Error! Radius of cornercut cannot be greater than side b. Shutting down the program" << endl;
        exit(1);
    }
}

double Cornercut::area() {
    return Rectangle::area() - (Circle::area() / 4);
}

double Cornercut::perimeter() {
    return 2 * (getA() + getB() - getRadius()) + (Circle::perimeter() / 4);
}

void Cornercut::display() {
    cout << "Cornercut Name: " << getName() << endl;
    getOrigin().display();
    cout << "Side A (Length): " << getA() << endl;
    cout << "Side B (Width): " << getB() << endl;
    cout << "Radius of the cut: " << getRadius() << endl;
}

Cornercut& Cornercut::operator=(const Cornercut &rhs) {
    copy(rhs);
    return *this;
}

void Cornercut::copy(const Cornercut &source) {
    setOrigin(source.getOrigin());
    setA(source.getA());
    setB(source.getB());
    setRadius(source.getRadius());
}

