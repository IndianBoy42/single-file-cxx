#include <gtest/gtest.h>

// TEST(Suite, Function)
TEST(Tests, ExampleTest) {
	EXPECT_EQ(1+1, 2);
	ASSERT_EQ(2+2, 4);
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
