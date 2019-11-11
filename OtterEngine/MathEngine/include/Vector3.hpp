#pragma once

class Vector3 {
private:
public:
  Vector3(double x1, double y1, double z1) {
    x = x1;
    y = y1;
    z = z1;
  }

  double x;
  double y;
  double z;

  Vector3 Vector3::Add(Vector3 other);
};