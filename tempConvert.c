#include <stdio.h>

float convert(float c)
{
  float f;
  f = 1.8 * c + 32;
  return f;
}

int main()
{
  float t1;
  float t2;
  printf("Digite a temperatura em Celsius\n");
  scanf("%f", &t1);
  t2 = convert(t1);
  printf("A temperatura em Fahrenheit e %f", t2);
  return 0;
}
