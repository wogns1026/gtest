#include "pch.h"

TEST(addFuncTest, Normal) {
	EXPECT_EQ(2, addFunc(1, 1));
	// 사용자 지정 오류 메세지 제공하는 법
	EXPECT_EQ(3, addFunc(1, 1)) << "1 + 1 is not 3";
	EXPECT_NE(3, addFunc(1, 1));
	EXPECT_LT(1, addFunc(1, 1));
	EXPECT_LE(2, addFunc(1, 1));
	EXPECT_GT(3, addFunc(1, 1));
	EXPECT_GE(2, addFunc(1, 1));
}

TEST(subFuncTest, Normal) {
	EXPECT_EQ(3, subFunc(5, 2));
}

TEST(mulFuncTest, Normal) {
	EXPECT_EQ(6, mulFunc(2, 3));
}

TEST(divFuncTest, Normal) {
	EXPECT_EQ(3, divFunc(6, 2));
}

TEST(factorialFuncTest, Normal) {
	EXPECT_EQ(6, factorialFunc(3));
}

TEST(combinationFuncTest, Normal) {
	EXPECT_EQ(35, combinationFunc(7, 4));
}