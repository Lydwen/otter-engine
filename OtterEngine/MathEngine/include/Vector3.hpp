#pragma once

class Vector3 {
private:
public:
  double x;
  double y;
  double z;

  Vector3(double x1, double y1, double z1) {
    x = x1;
    y = y1;
    z = z1;
  }

  Vector3 operator+(Vector3 other) {
    double newX = x + other.x;
    double newY = y + other.y;
    double newZ = z + other.z;

    Vector3 newVector(newX, newY, newZ);
    return newVector;
  }

  Vector3 Vector3::Add(Vector3 other);
};