#ifndef POINT2D_H_
#define POINT2D_H_

#include <iostream>
using namespace std;

class Point2D{
  private:
    double x, y;

  public:
    Point2D(){

    }

    Point2D(double xcoord, double ycoord)
    {
      x = xcoord;
      y = ycoord;
    }

    double getX() const { return x; }
    double getY() const { return y; }
    friend ostream& operator<<(ostream& out, const Point2D& q)
    {
      out << q.getX() << " " << q.getY();
      return out;
    }
};

class LeftRight
{
  public:
    bool operator()(const Point2D& p, const Point2D& q) const
//ex: bool operator()(const T& a, const T& b) const {
    {
      return p.getX() < q.getX();
      //ex:   return a < b;
    }
};


class BottomUp {
public:
bool operator()(const Point2D& p, const Point2D& q) const {
    //ex:  bool operator()(const T& a, const T& b) const {
        // Implement your comparison logic here (BottomUp comparison)
        // Return true if 'a' has higher priority (comes before) 'b'
        // Else, return false
  
  return p.getX() > q.getX();
      //ex:  return a > b;
    }
};

#endif
