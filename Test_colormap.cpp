#include <gtest/gtest.h>
#include <fstream>
#include <sstream>
#include <string>
#include <iostream>
#include "include/colormap.h"

void captureOutput(std::ostream& output) {
    std::streambuf* coutBuffer = std::cout.rdbuf(output.rdbuf());
    printColorMap();
    std::cout.rdbuf(coutBuffer);
}

std::string readExpectedOutputFromCSV(const std::string& filename) {
    std::ifstream csvFile(filename);
    std::ostringstream expectedOutput;
    std::string line;
    if(!csvFile.good()) {
        throw std::runtime_error("Could not open file " + filename);
    }
    while (std::getline(csvFile, line)) {
        expectedOutput << line << "\n";
    }
    return expectedOutput.str();
}

TEST(ColorMapTest, OutputMatchesCSV) {
    std::ostringstream actualOutput;
    captureOutput(actualOutput);

    std::string expectedOutput = readExpectedOutputFromCSV("expected_output.csv");

    EXPECT_EQ(actualOutput.str(), expectedOutput);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}