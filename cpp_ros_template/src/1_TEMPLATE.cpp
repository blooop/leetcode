#include <algorithm>
#include <functional>
#include <memory>
#include <string>
#include <gtest/gtest.h>

using namespace std; 

class Solution {
public:
  int example(int a) {
    return a;
  }
};

TEST(template, test1) {

  ASSERT_EQ(Solution().example(1), 1);
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
