/*
 * Program Description:
 * This program uses a loop to copy the contents of one integer array to another.
 */

 #include <stdio.h>

 #define SIZE 5
 
 int main() {
     int source[SIZE], destination[SIZE];
 
     // Input values into source array
     printf("Enter %d integers:\n", SIZE);
     for (int i = 0; i < SIZE; i++) {
         scanf("%d", &source[i]);
     }
 
     // Copy values to destination array
     for (int i = 0; i < SIZE; i++) {
         destination[i] = source[i];
     }
 
     // Display copied array
     printf("Copied array:\n");
     for (int i = 0; i < SIZE; i++) {
         printf("%d ", destination[i]);
     }
 
     printf("\n");
     return 0;
 }
 