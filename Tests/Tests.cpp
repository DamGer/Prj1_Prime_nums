#include <gtest/gtest.h>
#include <iostream>
#include "Prime_Nums.h"
// test N = 3
TEST(Prime_Nums_Test, for_3) {
	const unsigned short N = 3;
	unsigned int array_[N];
	Prime_Nums(array_, N);
	unsigned int Real_Sample[]{ 2, 3, 5 };
	Print_Array(array_, N);
	for (int i = 0; i < N; i++) {
		ASSERT_EQ(array_[i], Real_Sample[i]);
	}
}
// test N = 25
TEST(for_25) {
	const unsigned short N = 25;
	unsigned int array_[N];
	Prime_Nums(array_, N);
	unsigned int Real_Sample[N] { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97 };
	Print_Array(array_, N);
	for (int i = 0; i < N; i++) {
		ASSERT_EQ(array_[i], Real_Sample[i]);
	}
}
// test N = 1
TEST(for_1) {
	const unsigned short N = 1;
	unsigned int array_[N];
	Prime_Nums(array_, N);
	unsigned int Real_Sample = 2;
	Print_Array(array_, N);
	ASSERT_EQ(array_[0], Real_Sample);
}
// test N = 0 
TEST(for_0) {
	unsigned int array_[5];
	try
	{
		Prime_Nums(array_, 0);
	}
	catch (std::exception const err)
	{
		ASSERT_EQ(std::string(err.what()), "N must be greater than zero!");
	}
}

int main(int argc, char** argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
