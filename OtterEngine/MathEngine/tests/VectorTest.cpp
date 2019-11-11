#include <gtest/gtest.h>
#include "Vector3D.hpp"

TEST(VectorTest, TestAddTwoVectorsWillCorrectlyMakeTheAdditionOfTheirMembers) {
  Vector3D vectorLeft(1, 2, 3);
  Vector3D vectorRight(10, 20, 30);

  vectorLeft.Add(vectorRight);
  EXPECT_EQ(11, vectorLeft.x);
  EXPECT_EQ(22, vectorLeft.y);
  EXPECT_EQ(33, vectorLeft.z);
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

TEST(VectorTest, TestMagnitudeOfVectorZero) {
  Vector3D vectorWithAMagnitudeOf0(0, 0, 0);

  EXPECT_EQ(0, vectorWithAMagnitudeOf0.Magnitude());  
}

TEST(VectorTest, TestMultiplyAVectorByAScalar) {
  Vector3D vector(1, 10, 100);
  Vector3D vectorResultOnMultiplication(2, 20, 200);
  
  EXPECT_EQ(vectorResultOnMultiplication, 2 * vector);
  EXPECT_EQ(vectorResultOnMultiplication, vector * 2);
}