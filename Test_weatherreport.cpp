#include <gtest/gtest.h>
#include "include/weatherreport.h"
#include "include/sensorstub.h"

TEST(WeatherReportTest, StormyWeather) {
    SensorStub sensor;
    std::string report = WeatherSpace::Report(sensor);
    EXPECT_EQ(report, "Alert, Stormy with heavy rain");
}

TEST(WeatherReportTest, HighPrecipitationLowWind) {
    SensorStubHighPrecipitation sensor;
    std::string report = WeatherSpace::Report(sensor);
    EXPECT_EQ(report, "Alert, Stormy with heavy rain");
}
