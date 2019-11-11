#pragma once

class Vector3 {
private:
public:
  double x;
  double y;
  double z;

  Vector3(double x1, double y1, double z1);

  Vector3 Vector3::operator+(Vector3 other);
  Vector3 Vector3::Add(Vector3 other);
};