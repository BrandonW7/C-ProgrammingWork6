/*
 * Program Description:
 * This program reads 4 integers into an array, swaps the 1st with 2nd,
 * and 3rd with 4th, then displays the updated array.
 */

 #include <stdio.h>

 #define SIZE 4
 
 int main() {
     int values[SIZE], temp;
 
     // Input values
     printf("Enter %d integers:\n", SIZE);
     for (int i = 0; i < SIZE; i++) {
         scanf("%d", &values[i]);
     }
 
     // Display original array
     printf("Original order:\n");
     for (int i = 0; i < SIZE; i++) {
         printf("%d ", values[i]);
     }
 
     // Swap 1st & 2nd, 3rd & 4th
     temp = values[0];
     values[0] = values[1];
     values[1] = temp;
 
     temp = values[2];
     values[2] = values[3];
     values[3] = temp;
 
     // Display swapped array
     printf("\nSwapped order:\n");
     for (int i = 0; i < SIZE; i++) {
         printf("%d ", values[i]);
     }
 
     printf("\n");
     return 0;
 }
 