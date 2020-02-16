#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(HeapSortTest, ReturnSortedVector) {
  Solution s;
  vector<int> v={5,9,3,1,7};
  vector<int> actual = {1,3,5,7,9};
  s.heapsort(v);
  vector<int> expected = v;
  EXPECT_EQ(expected, actual);
}
TEST(HeapSortTest, ReturnEmptyVector) {
  Solution s;
  vector<int> v={};
  vector<int> actual = {};
  s.heapsort(v);
  vector<int> expected = v;
  EXPECT_EQ(expected, actual);
}