#include "Vector3.hpp"

Vector3 Vector3::Add(Vector3 other) {
  double newX = x + other.x;
  double newY = y + other.y;
  double newZ = z + other.z;

  Vector3 newVector(newX, newY, newZ);
  return newVector;
}