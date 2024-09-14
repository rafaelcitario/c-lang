#include <stdio.h>

float convertFahrenheitToCelcius(float fahrenheit)
{
  float celcius = (fahrenheit - 32.0f) / 1.8f;
  return celcius;
}

void main()
{
  float fahrenheit;
  printf("Enter the temperature in fahrenheit:\t");
  scanf("%f", &fahrenheit);
  float celcius = convertFahrenheitToCelcius(fahrenheit);
  printf("Celcius: %.2f C", celcius);
}
