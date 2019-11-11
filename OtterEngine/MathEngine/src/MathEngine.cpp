#include "MathEngine.h"

Vector Vector::Add(Vector other) {
  double newX = x + other.GetX();
  double newY = y + other.GetY();
  double newZ = z + other.GetZ();

  Vector newVector(newX, newY, newZ);
  return newVector;
}
