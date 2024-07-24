#include <gtest/gtest.h>
#include <algorithm>
#include <chrono>
#include <functional>
#include <memory>
#include <string>
using namespace std;

class Solution {
  public:
    string mergeAlternately(string word1, string word2) {
        auto len = max(word1.length(), word2.length());
        std::string output;
        for (int i = 0; i < len; i++) {
            if (i < word1.length()) {
                output += word1[i];
            }
            if (i < word2.length()) {
                output += word2[i];
            }
        }
        return output;
    }
};

TEST(template, test1) {
    ASSERT_EQ(Solution().mergeAlternately("abc", "def"), "adbecf");
}

int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
