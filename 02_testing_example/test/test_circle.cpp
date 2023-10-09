//
// Created by keret on 2022. 11. 13..
//

#include <gtest/gtest.h>

#include "geometry.h"

TEST(CircleTest, CircleCheck){
    double radius = 5.0;
    Circle circle(radius);
    EXPECT_TRUE(circle.check());
}


TEST(CircleTest, CircleINvalidCheck){
    double radius = -5.0;
    Circle circle(radius);
    EXPECT_FALSE(circle.check());
}

TEST(CircleTest, CircleCircumference){
    double radius = 0.5;
    Circle circle(radius);
    EXPECT_DOUBLE_EQ(circle.circumference(), M_PI);
}

TEST(CircleTest, CircleArea){
    double radius = 2.0;
    Circle circle(radius);
    EXPECT_DOUBLE_EQ(circle.area(), 4.0*M_PI);
}