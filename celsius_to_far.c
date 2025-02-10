// Scrivi un programma che converte da celsius a fahrenheit

// (0 °C × 9/5) + 32 = 32 °F

#include <stdio.h>

float conversion(float, float, float);

int main() {
  //inserimento della temperatura in C
  float min, max, step;
  float celsius, fahrenheit;

  printf("Inserisci la temperatura minima: ");
  scanf("%f", &min);
  printf("\nInserisci la temperatura massima: ");
  scanf("%f", &max);
  printf("\nIntervallo di output: ");
  scanf("%f", &step);

  printf("C°\t\tF°\n");
  conversion(min, max, step);
}

float conversion(float min, float max, float step) {
  float c_temp  = min;
  float f_temp = 0;

  while (c_temp <= max) {
    f_temp = c_temp * 9 / 5 + 32;
    printf("%.2f \t %.2f \n", c_temp, f_temp);
    c_temp += step;
  }

}