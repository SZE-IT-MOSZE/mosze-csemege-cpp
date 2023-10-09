//
// Created by keret on 2022. 11. 13..
//


#include <gtest/gtest.h>
#include "geometry.h"


TEST(TriangleTest, CheckBasicTriangle) {
    double a = 10;
    double b = 20;
    double c = 15;
    Triangle tri(a, b, c);
    EXPECT_TRUE(tri.check());
}

TEST(TriangleTest, CheckTriangleCircumference) {
    double a = 5;
    double b = 7;
    double c = 8;
    Triangle tri(a, b, c);
    EXPECT_TRUE(tri.check());
    EXPECT_DOUBLE_EQ(tri.circumference(), 20.0);
}

TEST(TriangleTest, CheckTriangleArea) {
    double a = 3;
    double b = 4;
    double c = 5;
    Triangle tri(a, b, c);
    EXPECT_TRUE(tri.check());
    EXPECT_DOUBLE_EQ(tri.area(), 6.0);
}
