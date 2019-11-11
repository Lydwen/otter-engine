#include "Vector3D.hpp"
#include <math.h>

Vector3D::Vector3D() : Vector3D(0, 0, 0) {
}

Vector3D::Vector3D(float x1, float y1, float z1){
  x = x1;
  y = y1;
  z = z1;
}

Vector3D Vector3D::operator+(Vector3D other) {
  float newX = x + other.x;
  float newY = y + other.y;
  float newZ = z + other.z;

  Vector3D newVector(newX, newY, newZ);
  return newVector;
}

Vector3D Vector3D::Add(Vector3D other) {
  float newX = x + other.x;
  float newY = y + other.y;
  float newZ = z + other.z;

  Vector3D newVector(newX, newY, newZ);
  return newVector;
}

float Vector3D::Magnitude() {
  return sqrt(x * x + y * y + z * z);
}