#include <stdio.h>

// this program prints out Fahrenheit-Celsius table from Fahrenheit equals 0 to 300 with step of 20
int main() {
    double fahrenheit = 0, celsius;
    int max = 300, step = 20;

    printf("%6s |%6s\n", "F", "C");
    printf("-------|-------\n");

    while (fahrenheit <= max) {
        celsius = (5.0 / 9.0) * (fahrenheit - 32);
        printf("%6.2lf |%6.2lf\n", fahrenheit, celsius);
        fahrenheit += step;
    }
}