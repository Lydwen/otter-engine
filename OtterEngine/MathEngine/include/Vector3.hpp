#pragma once

struct Vector3 {
  float x, y, z;

  Vector3(float x1, float y1, float z1);

  Vector3 Vector3::operator+(Vector3 other);
  Vector3 Vector3::Add(Vector3 other);
};