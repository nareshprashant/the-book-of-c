#include <stdio.h>

int main (int argc, char* argv[] ){
  /* Write a program using switch case that takes day of the week (1-7) as user input and prints the name of the day.
  * E.g. Monday for 1, Tuesday for 2, and so on. 
  * In case user input is outside the range 1-7, program should print an error message using default case. 
  * Input: one integer value. You are not expected to check for non-integer values.
  * Output: One of the following depending on input value
  *         Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday, Incorrect input 
  * Note that output is case sensitive */
   int day = 0;
    printf("Enter day of week [1-7]: ");
    scanf("%d",&day);
 
    switch(day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid input\n");
    }
  return 0
}
