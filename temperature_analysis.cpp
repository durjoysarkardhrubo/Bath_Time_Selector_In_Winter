
#include <iostream>
#include <vector>
#include <string>

std::vector<float> fetchSimulatedTemperatureData() {
    return {10.0, 10.5, 11.0, 15.2, 18.5, 21.3, 23.7, 26.1, 27.5, 28.0, 27.5, 26.1, 24.7, 23.3, 22.0, 21.5, 21.0, 20.5, 19.0, 17.5, 16.0, 14.5, 13.0, 11.5};
}

int findMaxTempTime(const std::vector<float>& temps) {
    float maxTemp = temps[0];
    int maxTempTime = 0;
    for (int i = 1; i < temps.size(); ++i) {
        if (temps[i] > maxTemp) {
            maxTemp = temps[i];
            maxTempTime = i;
        }
    }
    return maxTempTime;
}

int main() {
    std::vector<float> temperatures = fetchSimulatedTemperatureData();
    int timeOfHighestTemp = findMaxTempTime(temperatures);

    std::cout << "The highest temperature is at " << timeOfHighestTemp << ":00. ";
    if (timeOfHighestTemp >= 6 && timeOfHighestTemp <= 18) {
        std::cout << "It is the best time to bathe." << std::endl;
    } else {
        std::cout << "It might be too cold for bathing." << std::endl;
    }

    return 0;
}
