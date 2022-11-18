#include <gtest/gtest.h>

#include "../say_hello.hpp"

TEST(ExampleTest, BasicTest) {
    EXPECT_EQ(sayHelloTo(std::string("Peter")), "Hello Peter") << "Should say hello to Peter";
}
