#include <gtest/gtest.h>
#include "include/tshirts.h"

TEST(TShirtsTest, SizeClassification) {
    EXPECT_EQ(size(37), 'S');
    EXPECT_EQ(size(38), 'M');
    EXPECT_EQ(size(40), 'M');
    EXPECT_EQ(size(42), 'M');
    EXPECT_EQ(size(43), 'L');
}
