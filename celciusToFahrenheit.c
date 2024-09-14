#include <stdio.h>

float convertCelciusToFahrenheit(float celcius) {
    float fahrenheit = celcius * 1.8f + 32.0f;
    return fahrenheit;
}

void main() {
    float celcius;
    printf("Entre com um valor em graus celcius:\t");
    scanf("%f", &celcius);
    float fahrenheit = convertCelciusToFahrenheit(celcius);
    printf("Fahrenheit: %f", fahrenheit);
}
