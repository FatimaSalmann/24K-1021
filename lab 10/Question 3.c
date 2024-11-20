#include <stdio.h>

const double MAX_TEMP = 30.0; 

// Function to check if the temperature exceeds the limit
void checkTemperature(double temp) {
    // Static variable to count how many times the temperature exceeds the limit
    static int exceedCount = 0;

    if (temp > MAX_TEMP) {
        exceedCount++;  
        printf("Temperature %.2f°C exceeds the limit of %.2f°C.\n", temp, MAX_TEMP);
    } else {
        printf("Temperature %.2f°C is within the allowable range.\n", temp);
    }
    // Display how many times the limit was exceeded
    printf("The temperature has exceeded the limit %d time(s).\n", exceedCount);
}

int main() {
    
    double temperatures[] = {28.5, 32.0, 31.5, 29.0, 35.0};  
    int numTemperatures = sizeof(temperatures) / sizeof(temperatures[0]);  

    // Loop through the array and check each temperature
    for (int i = 0; i < numTemperatures; i++) {
        checkTemperature(temperatures[i]);
    }

    return 0;
}
