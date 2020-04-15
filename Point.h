//
// Created by toyaokeke on 2020-04-03.
//

#ifndef ENSF_607_PROJECT_POINT_H
#define ENSF_607_PROJECT_POINT_H

class Point{
private:
    static int currentCount, idCount;
    int x, y, id;
    void copy(const Point&);
public:
    Point(int, int);
    Point(const Point&);
    ~Point();
    Point& operator =(const Point&);
    void display();
    int getX() const;
    int getY() const;
    void setX(int);
    void setY(int);
    static int counter();
    double distance(Point&);
    static double distance(Point&, Point&);
};

#endif //ENSF_607_PROJECT_POINT_H
