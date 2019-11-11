#include <gtest/gtest.h>
#include "Vector3.hpp"

TEST(VectorTest, TestAddTwoVectorsWillCorrectlyMakeTheAdditionOfTheirMembers) {
  Vector3 vectorLeft(1, 2, 3);
  Vector3 vectorRight(10, 20, 30);

  Vector3 result = vectorLeft.Add(vectorRight);
  EXPECT_EQ(11, result.x);
  EXPECT_EQ(22, result.y);
  EXPECT_EQ(33, result.z);
}

TEST(VectorTest, TestOverloadOperatorPlus) {
  Vector3 vectorLeft(1, 2, 3);
  Vector3 vectorRight(10, 20, 30);

  Vector3 result = vectorLeft + vectorRight;
  EXPECT_EQ(11, result.x);
  EXPECT_EQ(22, result.y);
  EXPECT_EQ(33, result.z);
}