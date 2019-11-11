#include <gtest/gtest.h>
#include "MathEngine.h"

TEST(VectorTest, TestAddTwoVectorsWillCorrectlyMakeTheAdditionOfTheirMembers) {
  Vector vectorLeft(1, 2, 3);
  Vector vectorRight(10, 20, 30);

  Vector result = vectorLeft.Add(vectorRight);
  EXPECT_EQ(11, result.GetX());
  EXPECT_EQ(22, result.GetY());
  EXPECT_EQ(33, result.GetZ());

}