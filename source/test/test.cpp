#include <string>

#include <gtest/gtest.h>

class ReverseTests : public ::testing::Test
{
};

TEST_F(ReverseTests, equals)
{
  std::string testSubject = "Hello";

  EXPECT_EQ(testSubject, "Hello");
}
