#include <stdio.h>

// this program prints out Celsius-Fahrenheit table from Celsius equals 0 to 300 with step of 20
int main() {
    double celsius = 0, fahrenheit;
    int max = 300, step = 20;

    printf("%6s |%6s\n", "C", "F");
    printf("-------|-------\n");

    while (celsius <= max) {
        fahrenheit = (9.0 / 5.0 * celsius) + 32;
        printf("%6.2lf |%6.2lf\n", celsius, fahrenheit);
        celsius += step;
    }
}