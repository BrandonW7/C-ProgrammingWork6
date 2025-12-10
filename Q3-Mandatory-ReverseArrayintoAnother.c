/*
 * Program Description:
 * This program reads 5 integers into one array and copies them in reverse
 * order into another array.
 */

 #include <stdio.h>

 #define SIZE 5
 
 int main() {
     int original[SIZE], reversed[SIZE];
 
     // Input values
     printf("Enter %d integers:\n", SIZE);
     for (int i = 0; i < SIZE; i++) {
         scanf("%d", &original[i]);
     }
 
     // Copy in reverse order
     for (int i = 0; i < SIZE; i++) {
         reversed[i] = original[SIZE - 1 - i];
     }
 
     // Display reversed array
     printf("Reversed array:\n");
     for (int i = 0; i < SIZE; i++) {
         printf("%d ", reversed[i]);
     }
 
     printf("\n");
     return 0;
 }
 