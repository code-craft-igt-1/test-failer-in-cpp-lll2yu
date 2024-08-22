#include "weatherreport.h"

class SensorStub : public WeatherSpace::IWeatherSensor {
public:
    double TemperatureInC() const override { return 26; }
    int Precipitation() const override { return 70; }
    int Humidity() const override { return 72; }
    int WindSpeedKMPH() const override { return 52; }
};

class SensorStubHighPrecipitation : public WeatherSpace::IWeatherSensor {
public:
    double TemperatureInC() const override { return 26; }
    int Precipitation() const override { return 80; }
    int Humidity() const override { return 72; }
    int WindSpeedKMPH() const override { return 40; }
};
