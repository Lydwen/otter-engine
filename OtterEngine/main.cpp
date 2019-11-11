#include <iostream>
#include <MathEngine.h>

int main(int argc, char* argv[]) {
  std::cout << "Hello World" << std::endl;  
  Vector vectorA(0, 1, 2);
  Vector vectorB(10, 20, 30);
  Vector vectorResult = vectorA.Add(vectorB);
  std::cout << "The value is : " << vectorResult.GetX() << " " << vectorResult.GetY() << " " << vectorResult.GetZ() << std::endl;
  return 0;
}