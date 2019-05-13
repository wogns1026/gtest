#include "pch.h"

TEST(pchTest, addFuncTest) {
	EXPECT_EQ(2, addFunc(1, 1));
	// ����� ���� ���� �޼��� �����ϴ� ��
	EXPECT_EQ(3, addFunc(1, 1)) << "1 + 1 is not 3";
	EXPECT_NE(3, addFunc(1, 1));
	EXPECT_LT(1, addFunc(1, 1));
	EXPECT_LE(2, addFunc(1, 1));
	EXPECT_GT(3, addFunc(1, 1));
	EXPECT_GE(2, addFunc(1, 1));
}

TEST(pchTest, subFuncTest) {
	EXPECT_EQ(3, subFunc(5, 2));
}

TEST(pchTest, mulFuncTest) {
	EXPECT_EQ(6, mulFunc(2, 3));
}

TEST(pchTest, divFuncTest) {
	EXPECT_EQ(3, divFunc(6, 2));
}

TEST(pchTest, factorialFuncTest) {
	EXPECT_EQ(6, factorialFunc(3));
}

TEST(pchTest, combinationFuncTest) {
	EXPECT_EQ(35, combinationFunc(7, 4));
}