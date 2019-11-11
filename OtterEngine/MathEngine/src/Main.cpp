#include "Vector3D.hpp"
#include <iostream>

using namespace std;

int main()
{
  cout << "Hello CMake." << endl;
  Vector3D vectorA(0, 1, 2);
  Vector3D vectorB(10, 20, 30);
  Vector3D vectorResult = vectorA.Add(vectorB);
  cout << "The value is : " << vectorResult.x << " " << vectorResult.y << " " << vectorResult.z << endl;
  return 0;
}