//
// Created by toyaokeke on 2020-04-03.
//
#include "Point.h"
#include <iostream>
#include <cmath>
using namespace std;

int Point:: currentCount = 0;
int Point:: idCount = 1000;

Point::Point(int x, int y): x(x), y(y) {
    id = ++idCount;
    currentCount++;
}

Point::~Point() {
    currentCount--;
}

Point& Point::operator=(const Point& rhs) {
    copy(rhs);
    return *this;
}

void Point::display() {
    cout << "X-coordinate: " << x << endl;
    cout << "Y-coordinate: " << y << endl;
}

int Point::getX() const {
    return x;
}

int Point::getY() const {
    return y;
}

void Point::setX(int x) {
    this -> x = x;
}

void Point::setY(int y) {
    this -> y = y;
}

int Point::counter() {
    return currentCount;
}

double Point::distance(Point &other) {
    return sqrt(pow(other.x - x, 2) + pow(other.y - y, 2));
}

double  Point::distance(Point &p1, Point &p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

void Point::copy(const Point &source) {
    x = source.x;
    y = source.y;
}

Point::Point(const Point &source) {
    copy(source);
    id = ++idCount;
    currentCount++;
}