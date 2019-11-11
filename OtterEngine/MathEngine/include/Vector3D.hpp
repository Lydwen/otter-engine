#pragma once

struct Vector3D {
  float x, y, z;

  Vector3D(float x1, float y1, float z1);

  Vector3D Vector3D::operator+(Vector3D other);
  Vector3D Vector3D::Add(Vector3D other);
};