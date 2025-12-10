/*
 * Program Description:
 * This program stores 5 characters in a char array and ensures that whitespace
 * characters are not allowed.
 */

 #include <stdio.h>
 #include <ctype.h>
 
 #define SIZE 5
 
 int main() {
     char letters[SIZE];
     char input;
 
     printf("Enter %d non-whitespace characters:\n", SIZE);
 
     for (int i = 0; i < SIZE; ) {
         scanf(" %c", &input); // Space before %c to ignore whitespaces
         if (isspace(input)) {
             printf("Whitespace not allowed. Try again.\n");
         } else {
             letters[i] = input;
             i++;
         }
     }
 
     // Display characters
     printf("You entered:\n");
     for (int i = 0; i < SIZE; i++) {
         printf("%c ", letters[i]);
     }
 
     printf("\n");
     return 0;
 }
 