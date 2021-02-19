#include <gtest.h>
#include "RomanToArabic.h"

TEST(test_convertor_to_arabic, test_one)
{
	roman R("I");
	arabic v = toArabic(R);
	EXPECT_EQ(1, v);
}

TEST(test_convertor_to_arabic, test_five)
{
	roman R("V");
	arabic v = toArabic(R);
	EXPECT_EQ(5, v);
}

TEST(test_convertor_to_arabic, test_2940)
{
	roman R("MMCMXL");
	arabic v = toArabic(R);
	EXPECT_EQ(4, v);
}

TEST(test_convertor_to_arabic, test_12)
{
	roman R("XII");
	arabic v = toArabic(R);
	EXPECT_EQ(12, v);
}

TEST(test_convertor_to_roman, test_one)
{
	arabic A(1);
	roman r = toRoman(A);
	EXPECT_EQ(r, 1);
}