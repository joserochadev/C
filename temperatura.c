#include <stdio.h>

#define TEMP 1.8

float celsius_fahrenheit(float c)
{
  float f;

  f = TEMP * c + 32;
  return f;
}

int main()
{

  float c;
  float f;

  printf("Entre com a temperatura em celsius: ");
  scanf("%f", &c);

  f = celsius_fahrenheit(c);

  printf("temperatura em fahrenheit: %.2f \n", f);

  return 0;
}