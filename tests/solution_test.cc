#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(EmptyResult, EmptyResult) {
  Solution solution;
  std::vector<int> input = {};
  EXPECT_EQ(solution.FindMedian(input), -1);
}

TEST(NormalTest, NormalTest) {
  Solution solution;
  std::vector<int> input = {1,20,40,100};
  EXPECT_EQ(solution.FindMedian(input), 30);
}

TEST(ExtraTest, ExtraTest) {
  Solution solution;
  std::vector<int> input = {1,20,40,60,65,100};
  EXPECT_EQ(solution.FindMedian(input), 50);
}
