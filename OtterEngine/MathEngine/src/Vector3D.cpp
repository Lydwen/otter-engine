#include "Vector3D.hpp"
#include <math.h>

Vector3D::Vector3D() : Vector3D(0, 0, 0) {
}

Vector3D::Vector3D(float x1, float y1, float z1) {
  x = x1;
  y = y1;
  z = z1;
}

void Vector3D::Add(const Vector3D other) {
  x = x + other.x;
  y = y + other.y;
  z = z + other.z;
}

float Vector3D::Magnitude() {
  return sqrtf(x * x + y * y + z * z);
}