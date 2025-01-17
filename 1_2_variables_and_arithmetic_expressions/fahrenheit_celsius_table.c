#include <stdio.h>

// this program prints out Fahrenheit-Celsius table from Fahrenheit equals 0 to 300 with step of 20
int main() {
    int fahrenheit = 0, celsius;
    int max = 300, step = 20;

    printf("%6s |%6s\n", "F", "C");
    printf("-------|-------\n");

    while (fahrenheit <= max) {
        celsius = 5 * (fahrenheit - 32) / 9;
        printf("%6d |%6d\n", fahrenheit, celsius);
        fahrenheit += step;
    }
}