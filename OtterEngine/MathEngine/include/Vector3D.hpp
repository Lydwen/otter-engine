#pragma once

struct Vector3D {
  float x, y, z;

  Vector3D();
  Vector3D(float x1, float y1, float z1);

  inline Vector3D Vector3D::operator*(const float scalar) {
    float newX = scalar * x;
    float newY = scalar * y;
    float newZ = scalar * z;

    return Vector3D(newX, newY, newZ);
  }

  inline Vector3D Vector3D::operator+(const Vector3D other) {
    float newX = x + other.x;
    float newY = y + other.y;
    float newZ = z + other.z;

    Vector3D newVector(newX, newY, newZ);
    return newVector;
  }

  void Vector3D::Add(const Vector3D other);
  float Vector3D::Magnitude();
};

inline Vector3D operator*(const float scalar, Vector3D vector) {
  return vector*scalar;
}

inline bool operator==(const Vector3D left, const Vector3D right) {
  return left.x == right.x && left.y == right.y && left.z == right.z;
}