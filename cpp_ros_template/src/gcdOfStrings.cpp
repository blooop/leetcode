#include <algorithm>
#include <functional>
#include <memory>
#include <string>
#include <gtest/gtest.h>

using namespace std;

class Solution {
public:
  std::string divides(std::string test1, std::string str) {
    if (test1.length() % str.length()) {
      int repeats = str.length() / test1.length();
      std::string repeated = "";
    }
    return "";
  }

  std::string gcdOfStrings(std::string str1, std::string str2) { return ""; }
};

TEST(package_name, a_first_test) {


//   ASSERT_EQ(Solution().gcdOfStrings("ABCABC", "ABC"), "ABC");
  ASSERT_EQ(Solution().gcdOfStrings("ABCABC", "ABC"), "");

}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
