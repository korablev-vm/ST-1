// Copyright 2025 Vladlen Korablev
#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(checkPrimeTests, zeroIsNotPrime) {
  EXPECT_FALSE(checkPrime(0));
}

TEST(checkPrimeTests, oneIsNotPrime) {
  EXPECT_FALSE(checkPrime(1));
}

TEST(checkPrimeTests, twoIsPrime) {
  EXPECT_TRUE(checkPrime(2));
}

TEST(checkPrimeTests, twentyNineIsPrime) {
  EXPECT_TRUE(checkPrime(29));
}

TEST(nPrimeTests, firstPrimeIs2) {
  EXPECT_EQ(nPrime(1), 2);
}

TEST(nPrimeTests, thirdPrimeIs5) {
  EXPECT_EQ(nPrime(3), 5);
}

TEST(nPrimeTests, tenthPrimeIs29) {
  EXPECT_EQ(nPrime(10), 29);
}

TEST(nPrimeTests, zeroInputReturnsZero) {
  EXPECT_EQ(nPrime(0), 0);
}

TEST(nextPrimeTests, afterTwoIsThree) {
  EXPECT_EQ(nextPrime(2), 3);
}

TEST(nextPrimeTests, afterElevenIsThirteen) {
  EXPECT_EQ(nextPrime(11), 13);
}

TEST(nextPrimeTests, afterSeventeenIsNineteen) {
  EXPECT_EQ(nextPrime(17), 19);
}

TEST(nextPrimeTests, afterZeroIsTwo) {
  EXPECT_EQ(nextPrime(0), 2);
}

TEST(sumPrimeTests, sumBelow10Is17) {
  EXPECT_EQ(sumPrime(10), 17);
}

TEST(sumPrimeTests, sumBelow20Is77) {
  EXPECT_EQ(sumPrime(20), 77);
}

TEST(sumPrimeTests, sumBelow2Is0) {
  EXPECT_EQ(sumPrime(2), 0);
}
