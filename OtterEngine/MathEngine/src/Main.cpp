#include "MathEngine.h"

using namespace std;

int main()
{
  cout << "Hello CMake." << endl;
  Vector vectorA(0, 1, 2);
  Vector vectorB(10, 20, 30);
  Vector vectorResult = vectorA.Add(vectorB);
  cout << "The value is : " << vectorResult.GetX() << " " << vectorResult.GetY() << " " << vectorResult.GetZ() << endl;
  return 0;
}