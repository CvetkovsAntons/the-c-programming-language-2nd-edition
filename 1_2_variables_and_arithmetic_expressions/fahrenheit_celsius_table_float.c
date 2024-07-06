#include <stdio.h>

// this program prints out Fahrenheit-Celsius table from Fahrenheit equals 0 to 300 with step of 20
int main() {
    float fahrenheit = 0, celsius;
    int max = 300, step = 20;

    printf("%6s |%6s\n", "F", "C");
    printf("-------|-------\n");
    // added cast to float to int values, because IDE showed warning, that conversion during sum, could be incorrect
    while (fahrenheit <= (float)max) {
        celsius = (5.0f / 9.0f) * (fahrenheit - 32.0f);
        printf("%6.2f |%6.2f\n", fahrenheit, celsius);
        fahrenheit += (float)step;
    }
}