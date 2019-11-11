#include <iostream>
#include <Vector3.hpp>

int main(int argc, char* argv[]) {
  std::cout << "Hello World" << std::endl;  
  Vector3 vectorA(0, 1, 2);
  Vector3 vectorB(10, 20, 30);
  Vector3 vectorResult = vectorA.Add(vectorB);
  std::cout << "The value is : " << vectorResult.x << " " << vectorResult.y << " " << vectorResult.z << std::endl;
  return 0;
}