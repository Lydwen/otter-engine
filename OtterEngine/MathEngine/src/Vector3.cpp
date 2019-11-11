#include "Vector3.hpp"

Vector3::Vector3(float x1, float y1, float z1){
  x = x1;
  y = y1;
  z = z1;
}

Vector3 Vector3::operator+(Vector3 other) {
  float newX = x + other.x;
  float newY = y + other.y;
  float newZ = z + other.z;

  Vector3 newVector(newX, newY, newZ);
  return newVector;
}

Vector3 Vector3::Add(Vector3 other) {
  float newX = x + other.x;
  float newY = y + other.y;
  float newZ = z + other.z;

  Vector3 newVector(newX, newY, newZ);
  return newVector;
}