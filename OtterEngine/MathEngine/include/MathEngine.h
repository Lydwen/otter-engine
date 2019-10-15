#pragma once

#include <iostream>

class Vector {
private:
  double x;
  double y;
  double z;
public:
  Vector(double x1, double y1, double z1) {
    x = x1;
    y = y1;
    z = z1;
  }

  double Vector::GetX() {
    return x;
  }
  
  double Vector::GetY() {
    return y;
  }
  
  double Vector::GetZ() {
    return z;
  }

  Vector Vector::Add(Vector other);
};