/*
 * Program Description:
 * This program reads 3 integers into an array and sorts them in ascending order.
 */

 #include <stdio.h>

 #define SIZE 3
 
 int main() {
     int nums[SIZE], temp;
 
     // Input values
     printf("Enter %d numbers:\n", SIZE);
     for (int i = 0; i < SIZE; i++) {
         scanf("%d", &nums[i]);
     }
 
     // Simple bubble sort for 3 elements
     for (int i = 0; i < SIZE - 1; i++) {
         for (int j = 0; j < SIZE - 1 - i; j++) {
             if (nums[j] > nums[j + 1]) {
                 temp = nums[j];
                 nums[j] = nums[j + 1];
                 nums[j + 1] = temp;
             }
         }
     }
 
     // Display sorted array
     printf("Sorted in ascending order:\n");
     for (int i = 0; i < SIZE; i++) {
         printf("%d ", nums[i]);
     }
 
     printf("\n");
     return 0;
 }
 