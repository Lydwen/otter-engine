#include <gtest/gtest.h>
#include "Vector3D.hpp"

TEST(VectorTest, TestAddTwoVectorsWillCorrectlyMakeTheAdditionOfTheirMembers) {
  Vector3D vectorLeft(1, 2, 3);
  Vector3D vectorRight(10, 20, 30);

  Vector3D result = vectorLeft.Add(vectorRight);
  EXPECT_EQ(11, result.x);
  EXPECT_EQ(22, result.y);
  EXPECT_EQ(33, result.z);
}

TEST(VectorTest, TestOverloadOperatorPlus) {
  Vector3D vectorLeft(1, 2, 3);
  Vector3D vectorRight(10, 20, 30);

  Vector3D result = vectorLeft + vectorRight;
  EXPECT_EQ(11, result.x);
  EXPECT_EQ(22, result.y);
  EXPECT_EQ(33, result.z);
}

TEST(VectorTest, TestDefaultConstructorCorrectlyGenerateAVector3D) {
  Vector3D defaultVector;

  EXPECT_EQ(0, defaultVector.x);
  EXPECT_EQ(0, defaultVector.y);
  EXPECT_EQ(0, defaultVector.z);
}

TEST(VectorTest, TestMagnitudeOfAVector) {
  Vector3D vectorWithAMagnitudeOf1(1, 0, 0);
  Vector3D vectorWithAMagnitudeOf17(15, 0, -8);

  EXPECT_EQ(1, vectorWithAMagnitudeOf1.Magnitude());
  EXPECT_EQ(17, vectorWithAMagnitudeOf17.Magnitude());
}