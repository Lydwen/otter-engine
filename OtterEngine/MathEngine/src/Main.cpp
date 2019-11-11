#include "Vector3.hpp"
#include <iostream>

using namespace std;

int main()
{
  cout << "Hello CMake." << endl;
  Vector3 vectorA(0, 1, 2);
  Vector3 vectorB(10, 20, 30);
  Vector3 vectorResult = vectorA.Add(vectorB);
  cout << "The value is : " << vectorResult.x << " " << vectorResult.y << " " << vectorResult.z << endl;
  return 0;
}