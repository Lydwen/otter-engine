#include <iostream>
#include <Vector3D.hpp>

int main(int argc, char* argv[]) {
  std::cout << "Hello World" << std::endl;  
  Vector3D vectorA(0, 1, 2);
  Vector3D vectorB(10, 20, 30);
  Vector3D vectorResult = vectorA + vectorB;
  std::cout << "The value is : " << vectorResult.x << " " << vectorResult.y << " " << vectorResult.z << std::endl;
  return 0;
}