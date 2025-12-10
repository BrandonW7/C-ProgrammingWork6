/*
 * Program Description:
 * This program stores 3 temperature readings in Fahrenheit
 * and displays their equivalent in Celsius.
 */

 #include <stdio.h>

 #define SIZE 3
 
 int main() {
     float fahrenheit[SIZE], celsius[SIZE];
 
     // Input Fahrenheit temperatures
     printf("Enter %d temperature readings in Fahrenheit:\n", SIZE);
     for (int i = 0; i < SIZE; i++) {
         scanf("%f", &fahrenheit[i]);
         celsius[i] = (fahrenheit[i] - 32.0) * (5.0 / 9.0);
     }
 
     // Display both Fahrenheit and Celsius
     printf("Fahrenheit to Celsius:\n");
     for (int i = 0; i < SIZE; i++) {
         printf("F: %.2f -> C: %.2f\n", fahrenheit[i], celsius[i]);
     }
 
     return 0;
 }
 